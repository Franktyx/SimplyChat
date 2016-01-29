//
//  SCLoginPage.swift
//  SimplyChat
//
//  Created by Yuxiang Tang on 1/28/16.
//  Copyright © 2016 Yuxiang Tang. All rights reserved.
//

import Foundation
import UIKit

class SCLoginPage: UIViewController {
    
    let screenWidth = UIScreen.mainScreen().bounds.width
    let screenHeight = UIScreen.mainScreen().bounds.height
    
    
    var loginButton: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.loginButton = UIButton()
        self.loginButton.frame = CGRectMake(self.screenWidth / 2, 200, 100, 50)
        self.loginButton.setTitle("Login", forState: UIControlState.Normal)
        self.loginButton.backgroundColor = UIColor.brownColor()
        self.loginButton.addTarget(self, action: "loginButtonOnClick:", forControlEvents: UIControlEvents.TouchUpInside)
        self.view.addSubview(self.loginButton)
        
    }
    
    func loginButtonOnClick(sender: UIButton){
        self.performSegueWithIdentifier("login", sender: sender)
    }
}