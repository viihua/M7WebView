//
//  M7WKPanGestureRecognizer.h
//  Pkit
//
//  Created by DevMan7 on 2017/12/15.
//  Copyright © 2017年 llyouss. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface M7WKPanGestureRecognizer : UIPanGestureRecognizer

@property (readonly, nonatomic) UIEvent *event; //屏幕的手势事件

- (CGPoint)startPointWithView:(UIView *)view;

@end
