//
//  MovieLlistModel.swift
//  boostcamp
//
//  Created by SeungWoo Jang on 2018. 12. 10..
//  Copyright © 2018년 SeungWoo Jang. All rights reserved.
//

import Foundation

struct Movie_List: Codable {
    let movies: [MovieList]
}

struct MovieList: Codable {
    let grade: Int
    let thumb: String
    let reservation_grade: Int
    let title: String
    let reservation_rate: Double
    let user_rating: Double
    let date: String
    let id: String
    
    var tableViewInfoText: String {
        return "평점 : \(self.user_rating) 예매율 : \(self.reservation_rate)% 예매순위 : \(self.reservation_grade)위"
    }
    
    var collectionViewInfoText: String {
        return "\(self.reservation_grade)위(\(self.user_rating) / \(self.reservation_rate)%)"
    }
}

