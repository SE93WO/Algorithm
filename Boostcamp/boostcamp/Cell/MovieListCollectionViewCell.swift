//
//  MovieListCollectionViewCell.swift
//  boostcamp
//
//  Created by SeungWoo Jang on 15/12/2018.
//  Copyright © 2018 SeungWoo Jang. All rights reserved.
//

import UIKit

class MovieListCollectionViewCell: UICollectionViewCell{
    
    @IBOutlet weak var coverImage: UIImageView!
    @IBOutlet weak var titleLabel: UILabel!
    @IBOutlet weak var infoLabel: UILabel!
    @IBOutlet weak var dateLabel: UILabel!
    @IBOutlet weak var ageImage: UIImageView!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.titleLabel.adjustsFontSizeToFitWidth = true
        self.infoLabel.adjustsFontSizeToFitWidth = true
        self.dateLabel.adjustsFontSizeToFitWidth = true
    }
}
