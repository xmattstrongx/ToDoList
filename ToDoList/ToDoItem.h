//
//  ToDoItem.h
//  ToDoList
//
//  Created by Matthew Strong on 1/11/15.
//  Copyright (c) 2015 Matthew Strong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;

@property BOOL completed;

@property (readonly) NSDate *creationDate;


@end
