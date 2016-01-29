//
//  SCMessage.swift
//  SimplyChat
//
//  Created by Yuxiang Tang on 1/28/16.
//  Copyright © 2016 Yuxiang Tang. All rights reserved.
//

import Foundation
import JSQMessagesViewController

class SCMessage: NSObject, JSQMessageData {
    
    var senderId_ : String!
    var senderDisplayName_ : String!
    var date_ : NSDate
    var isMediaMessage_ : Bool
    var hash_ : Int = 0
    var text_ : String
    
    
    init(senderId: String, senderDisplayName: String?, isMediaMessage: Bool, hash: Int, text: String) {
        self.senderId_ = senderId
        self.senderDisplayName_ = senderDisplayName!
        self.date_ = NSDate()
        self.isMediaMessage_ = isMediaMessage
        self.hash_ = hash
        self.text_ = text
    }
    
    func senderId() -> String! {
        return senderId_;
    }
    
    func senderDisplayName() -> String! {
        return senderDisplayName_;
    }
    
    func date() -> NSDate! {
        return date_;
    }
    
    func isMediaMessage() -> Bool {
        return isMediaMessage_;
    }
    
    func messageHash() -> UInt {
        return UInt(hash_)
    }
    

    func text() -> String! {
        return text_;
    }
    
    
}

