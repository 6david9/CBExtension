//
//  NSFileManager+CBExtension.m
//  CBExtension
//
//  Created by ly on 13-6-2.
//  Copyright (c) 2013年 Lei Yan. All rights reserved.
//

#import "NSFileManager+CBExtension.h"

@implementation NSFileManager (CBExtension)

+ (BOOL)iCoundAvaliable:(NSString *)containerID
{
    NSURL *ubiq = [[NSFileManager defaultManager]
                   URLForUbiquityContainerIdentifier:containerID];
    
    return ( (ubiq) ? YES : NO );
}

@end
