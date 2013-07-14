//
//  CBImage.h
//  CBExtension
//
//  Created by ly on 13-7-14.
//  Copyright (c) 2013年 Lei Yan. All rights reserved.
//

#ifndef CBExtension_CBImage_h
#define CBExtension_CBImage_h

/*** 返回被放大 scale 倍后的 rect
 * @discussion 错误返回 CGRectZero
 */
CG_INLINE
CGRect CGRectMakeScale(CGRect rect, CGFloat scale)
{
    if (scale < 0.00001)
        return CGRectZero;
    
    return CGRectMake(rect.origin.x * scale, rect.origin.y * scale ,
                      rect.size.width * scale, rect.size.height * scale);
}

#endif
