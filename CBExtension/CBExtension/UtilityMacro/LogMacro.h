//
//  LogMacro.h
//  CBExtension
//
//  Created by ly on 13-6-29.
//  Copyright (c) 2013年 Lei Yan. All rights reserved.
//

#ifndef LogMacro_h
#define LogMacro_h

#ifdef DEBUG

#define CBLog(format, ...)   NSLog(format, ##__VA_ARGS__)
#define po(obj)              NSLog(@"%@", obj)
#define pi(var_i)            NSLog(@"%d", var_i)
#define pf(var_f)            NSLog(@"%f", var_f)

#define print_function()     NSLog(@"%s", __PRETTY_FUNCTION__)

#else

#define CBLog(format, ...)  do{ }while(0)
#define po(obj)             do{ }while(0)
#define pi(var_i)           do{ }while(0)
#define pf(var_f)           do{ }while(0)

#define print_function()    do{ }while(0)

#endif



#endif
