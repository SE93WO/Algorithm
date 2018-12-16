//
//  MovieDetailTableViewCell.swift
//  boostcamp
//
//  Created by SeungWoo Jang on 16/12/2018.
//  Copyright © 2018 SeungWoo Jang. All rights reserved.
//

import UIKit

class MovieDetailTableViewCell: UITableViewCell {
    
    @IBOutlet weak var coverImage: UIImageView!
    @IBOutlet weak var titleLabel: UILabel!
    @IBOutlet weak var dateLabel: UILabel!
    @IBOutlet weak var genreLabel: UILabel!
    @IBOutlet weak var ageImage: UIImageView!
    @IBOutlet weak var reservationRateLabel: UILabel!
    @IBOutlet weak var userRatingLabel: UILabel!
    @IBOutlet weak var audienceLabel: UILabel!
    @IBOutlet weak var starImage1: UIImageView!
    @IBOutlet weak var starImage2: UIImageView!
    @IBOutlet weak var starImage3: UIImageView!
    @IBOutlet weak var starImage4: UIImageView!
    @IBOutlet weak var starImage5: UIImageView!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.titleLabel.adjustsFontSizeToFitWidth = true
        self.dateLabel.adjustsFontSizeToFitWidth = true
        self.genreLabel.adjustsFontSizeToFitWidth = true
        self.reservationRateLabel.adjustsFontSizeToFitWidth = true
        self.userRatingLabel.adjustsFontSizeToFitWidth = true
        self.audienceLabel.adjustsFontSizeToFitWidth = true
    }
}
