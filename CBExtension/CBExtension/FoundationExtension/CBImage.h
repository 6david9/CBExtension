//
//  CBImage.h
//  CBExtension
//
//  Created by ly on 13-7-14.
//  Copyright (c) 2013年 Lei Yan. All rights reserved.
//

#ifndef CBExtension_CBImage_h
#define CBExtension_CBImage_h

CG_INLINE
CGRect CGRectMakeScale(CGRect rect, CGFloat scale)
{
    if (scale <= 0)
        return CGRectZero;
    
    return CGRectMake(rect.origin.x * scale, rect.origin.y * scale ,
                      rect.size.width * scale, rect.size.height * scale);
}

#endif
