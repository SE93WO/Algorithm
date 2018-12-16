//
//  MovieDirectorTableViewCell.swift
//  boostcamp
//
//  Created by SeungWoo Jang on 16/12/2018.
//  Copyright © 2018 SeungWoo Jang. All rights reserved.
//

import UIKit

class MovieDirectorTableViewCell: UITableViewCell {
    
    @IBOutlet weak var actorLabel: UILabel!
    @IBOutlet weak var directorLabel: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.actorLabel.adjustsFontSizeToFitWidth = true
        self.directorLabel.adjustsFontSizeToFitWidth = true
    }
}
