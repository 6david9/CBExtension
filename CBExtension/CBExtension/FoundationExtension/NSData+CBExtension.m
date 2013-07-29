//
//  NSData+CBExtension.m
//  CBExtension
//
//  Created by ly on 13-7-29.
//  Copyright (c) 2013年 Lei Yan. All rights reserved.
//

#import "NSData+CBExtension.h"

@implementation NSData (CBExtension)

- (NSDictionary *)jsonObject
{
    return [NSJSONSerialization JSONObjectWithData:self options:NSJSONReadingMutableContainers error:nil];
}

@end
