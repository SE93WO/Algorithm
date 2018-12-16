//
//  MovieInfoModel.swift
//  boostcamp
//
//  Created by SeungWoo Jang on 2018. 12. 10..
//  Copyright © 2018년 SeungWoo Jang. All rights reserved.
//

import Foundation

struct Movie_Info: Codable {
    let movieInfo: [MovieInfo]
}

struct MovieInfo: Codable {
    let audience: Int
    let actor: String
    let duration: Int
    let director: String
    let synopsis: String
    let genre: String
    let grade: Int
    let image: String
    let reservation_grade: Int
    let title: String
    let reservation_rate: Double
    let user_rating: Double
    let date: String
    let id: String
}
