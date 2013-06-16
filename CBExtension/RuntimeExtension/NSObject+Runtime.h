//
//  NSObject+Runtime.h
//  Map
//
//  Created by  ly on 13-6-15.
//  Copyright (c) 2013年 Sogou, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Runtime)

- (NSString *)className;
- (NSArray *)conformedProtocols;

@end
