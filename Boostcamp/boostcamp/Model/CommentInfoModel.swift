//
//  CommentInfoModel.swift
//  boostcamp
//
//  Created by SeungWoo Jang on 2018. 12. 12..
//  Copyright © 2018년 SeungWoo Jang. All rights reserved.
//

import Foundation

struct Comment_Info: Codable {
    let comments: [CommentInfo]
}

struct CommentInfo: Codable {
    let rating: Double
    let timestamp: Double
    let writer: String
    let movie_id: String
    let contents: String
}
