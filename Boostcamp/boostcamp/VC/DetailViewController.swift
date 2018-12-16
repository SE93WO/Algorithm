//
//  DetailViewController.swift
//  boostcamp
//
//  Created by SeungWoo Jang on 16/12/2018.
//  Copyright © 2018 SeungWoo Jang. All rights reserved.
//

import UIKit

class DetailViewController: UIViewController, UITableViewDataSource, UITableViewDelegate {

    @IBOutlet weak var indicator: UIActivityIndicatorView!
    @IBOutlet weak var detailTableView: UITableView!
    let cellIdentifier: String = "detailTableViewCell"
    let fullStarImage = UIImage(named: "ic_star_large_full")!
    let halfStarImage = UIImage(named: "ic_star_large_half")!
    let emptyStarImage = UIImage(named: "ic_star_large")!
    var movieInfo: MovieInfo?
    var commentInfo: [CommentInfo] = []
    var receiveId: String?
    var receiveTitle: String?
    
    func numberOfSections(in tableView: UITableView) -> Int {
        return 4
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        switch section {
        case 0:
            return 1
        case 1:
            return 1
        case 2:
            return 1
        case 3:
            return commentInfo.count
        default:
            return 0
        }
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        switch indexPath.section {
        case 0:
            let cell = detailTableView.dequeueReusableCell(withIdentifier: self.cellIdentifier, for: indexPath) as! MovieDetailTableViewCell
            guard let target = movieInfo else { return cell }
            
            cell.titleLabel.text = target.title
            cell.dateLabel.text = "\(target.date)개봉"
            cell.genreLabel.text = "\(target.genre)/\(target.duration)분"
            cell.reservationRateLabel.text = "예매율\n\(target.reservation_grade)위 \(target.reservation_rate)%"
            cell.userRatingLabel.text = "평점\n\(target.user_rating)"
            cell.ageImage.image = UIImage(named: "ic_\(target.grade)")
            
            let formatter = NumberFormatter()
            formatter.numberStyle = .decimal
            if let audience = formatter.string(from: NSNumber(value: target.audience)) {
                cell.audienceLabel.text = "누적관객수\n\(audience)"
            }
            
            cell.starImage1.image = starRating(starNumber: 1, rating: target.user_rating)
            cell.starImage2.image = starRating(starNumber: 2, rating: target.user_rating)
            cell.starImage3.image = starRating(starNumber: 3, rating: target.user_rating)
            cell.starImage4.image = starRating(starNumber: 4, rating: target.user_rating)
            cell.starImage5.image = starRating(starNumber: 5, rating: target.user_rating)
            
            DispatchQueue.global().async {
                guard let imageURL = URL(string: target.image) else { return }
                guard let imageData = try? Data(contentsOf: imageURL) else { return }
                DispatchQueue.main.async {
                    cell.coverImage.image = UIImage(data: imageData)
                }
            }
            
            return cell
            
        case 1:
            let cell = tableView.dequeueReusableCell(withIdentifier: "detailTabileViewSynopsisCell") as! MovieSynopsisTableViewCell
            guard let target = movieInfo else { return cell }
            cell.synopsisLabel.text = target.synopsis
            
            return cell
            
        case 2:
            let cell = tableView.dequeueReusableCell(withIdentifier: "detailTabileViewDirectorCell") as!  MovieDirectorTableViewCell
            guard let target = movieInfo else { return cell }
            cell.directorLabel.text = target.director
            cell.actorLabel.text = target.actor
            
            return cell
            
        case 3:
            let cell = tableView.dequeueReusableCell(withIdentifier: "detailTabileViewCommentCell") as! MovieCommentsTableViewCell
            let target = commentInfo[indexPath.row]
            
            let formatter = DateFormatter()
            let timestamp = Date(timeIntervalSince1970: TimeInterval(target.timestamp))
            formatter.dateFormat = "yyyy-MM-dd HH:mm:ss"
            formatter.timeZone = TimeZone(abbreviation: "UTC")
            
            let dateString = formatter.string(from: timestamp)
            
            cell.idLabel.text = target.writer
            cell.dateLabel.text = "\(dateString)"
            cell.commentLabel.text = target.contents
            
            cell.starImage1.image = starRating(starNumber: 1, rating: target.rating)
            cell.starImage2.image = starRating(starNumber: 2, rating: target.rating)
            cell.starImage3.image = starRating(starNumber: 3, rating: target.rating)
            cell.starImage4.image = starRating(starNumber: 4, rating: target.rating)
            cell.starImage5.image = starRating(starNumber: 5, rating: target.rating)
            
            return cell
            
        default:
            fatalError()
        }
    }
 
    func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        return UITableView.automaticDimension
    }
    
    func tableView(_ tableView: UITableView, estimatedHeightForRowAt indexPath: IndexPath) -> CGFloat {
        return UITableView.automaticDimension
    }
    
    func movieInfoURL(receiveId : String?) {
        guard let id = receiveId else { return }
        self.indicator.startAnimating()
        guard let url = URL(string: "http://connect-boxoffice.run.goorm.io/movie?id=\(id)") else { return }
        
        let session: URLSession = URLSession(configuration: .default)
        let dataTask: URLSessionDataTask = session.dataTask(with: url) { (data: Data?, response: URLResponse?, error: Error?) in
            
            if let error = error {
                let alert = UIAlertController(title: "Error", message: "\(error.localizedDescription)", preferredStyle: UIAlertController.Style.alert)
                alert.addAction(UIAlertAction(title: "취소", style: UIAlertAction.Style.default, handler: nil))
                self.present(alert, animated: true, completion: nil)
                return
            }
            
            guard let data = data else { return }
            
            do {
                let apiRespon: MovieInfo = try
                    JSONDecoder().decode(MovieInfo.self, from: data)
                self.movieInfo = apiRespon
                 
                DispatchQueue.main.async {
                    self.detailTableView.reloadData()
                }
                
            }catch let DecodingError.dataCorrupted(context) {
                print(context)
            }catch let DecodingError.keyNotFound(key, context) {
                print("Key '\(key)' not found:", context.debugDescription)
                print("codingPath:", context.codingPath)
            }catch let DecodingError.valueNotFound(value, context) {
                print("Value '\(value)' not found:", context.debugDescription)
                print("codingPath:", context.codingPath)
            }catch let DecodingError.typeMismatch(type, context)  {
                print("Type '\(type)' mismatch:", context.debugDescription)
                print("codingPath:", context.codingPath)
            }catch(let err) {
                let alert = UIAlertController(title: "Error", message: "\(err.localizedDescription)", preferredStyle: UIAlertController.Style.alert)
                alert.addAction(UIAlertAction(title: "취소", style: UIAlertAction.Style.default, handler: nil))
                self.present(alert, animated: true, completion: nil)
                return
            }
        }
        
        self.indicator.stopAnimating()
        dataTask.resume()
    }
    
    func commentInfoURL(receiveId : String?) {
        guard let id = receiveId else { return }
        self.indicator.startAnimating()
        guard let url = URL(string: "http://connect-boxoffice.run.goorm.io/comments?movie_id=\(id)") else { return }
        
        let session: URLSession = URLSession(configuration: .default)
        let dataTask: URLSessionDataTask = session.dataTask(with: url) { (data: Data?, response: URLResponse?, error: Error?) in
            
            if let error = error {
                let alert = UIAlertController(title: "Error", message: "\(error.localizedDescription)", preferredStyle: UIAlertController.Style.alert)
                alert.addAction(UIAlertAction(title: "취소", style: UIAlertAction.Style.default, handler: nil))
                self.present(alert, animated: true, completion: nil)
                return
            }
            
            guard let data = data else { return }
            
            do {
                let apiRespon: Comment_Info = try
                    JSONDecoder().decode(Comment_Info.self, from: data)
                self.commentInfo = apiRespon.comments
                
                DispatchQueue.main.async {
                    self.detailTableView.reloadData()
                }
                
            }catch let DecodingError.dataCorrupted(context) {
                print(context)
            }catch let DecodingError.keyNotFound(key, context) {
                print("Key '\(key)' not found:", context.debugDescription)
                print("codingPath:", context.codingPath)
            }catch let DecodingError.valueNotFound(value, context) {
                print("Value '\(value)' not found:", context.debugDescription)
                print("codingPath:", context.codingPath)
            }catch let DecodingError.typeMismatch(type, context)  {
                print("Type '\(type)' mismatch:", context.debugDescription)
                print("codingPath:", context.codingPath)
            }catch(let err) {
                let alert = UIAlertController(title: "Error", message: "\(err.localizedDescription)", preferredStyle: UIAlertController.Style.alert)
                alert.addAction(UIAlertAction(title: "취소", style: UIAlertAction.Style.default, handler: nil))
                self.present(alert, animated: true, completion: nil)
                return
            }
        }
        
        self.indicator.stopAnimating()
        dataTask.resume()
    }
    
    func starRating(starNumber: Int, rating: Double) -> UIImage {
        let ratingInt = (Int(rating))
        let userRating = ratingInt / 2
        
        if ratingInt % 2 == 1 {
            if userRating >= starNumber {
                return fullStarImage
            } else if userRating + 1 == starNumber {
                return halfStarImage
            } else {
                return emptyStarImage
            }
        } else {
            if userRating >= starNumber {
                return fullStarImage
            } else {
                return emptyStarImage
            }
        }
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        detailTableView.dataSource = self
        detailTableView.delegate = self
        guard let title = self.receiveTitle else { return }
        
        self.navigationItem.title = title
        self.movieInfoURL(receiveId: receiveId)
        self.commentInfoURL(receiveId: receiveId)
    }
}
