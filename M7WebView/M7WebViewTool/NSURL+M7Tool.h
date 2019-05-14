//
//  NSURL+M7Tool.h
//  Pkit
//
//  Created by DevMan7 on 2017/12/22.
//  Copyright © 2017年 llyouss. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (M7Tool)



/**
   组合请求参数

 @param baseURL 请求链接，？之前部分
 @param params ？之后的参数
 @return 完整的请求链接
 */
+ (NSURL *)generateURL:(NSString*)baseURL params:(NSDictionary*)params;


/**
   打开跨域请求

 @param URL 请求链接
 */
+ (void)openURL:(NSURL *)URL;

+ (void)safariOpenURL:(NSURL *)URL;

@end
