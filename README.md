CBExtension
===========

CBExtension 是一套便于开发的宏扩展与工具类。主要由我在平时开发中写的一些经常用到的宏扩展与类扩展组成。写这个扩展的目的就是越来越感觉OC的东西太啰嗦了，为了实现一个功能要写太多的代码了。写这个扩展就是为了跳高生产力。节省出更多的时间思考程序关键的设计，而不是花太多的时间在敲 @property (strong, nonatomic) .... 这类的无脑的代码片段。

CBExtension is a suite of Macros to raise productivity.

依赖的框架
===========
1. Foundation
2. Quartz Core

注意
===========
CBExtension支持的最低平台为 iOS 5.0

以静态库的形式链接 CBExtension 需要在链接选项中添加 -ObjC 选项