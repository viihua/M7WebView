//
//  M7WKPanGestureRecognizer.m
//  Pkit
//
//  Created by DevMan7 on 2017/12/15.
//  Copyright © 2017年 llyouss. All rights reserved.
//

#import "M7WKPanGestureRecognizer.h"
#import <UIKit/UIGestureRecognizerSubclass.h>

@implementation M7WKPanGestureRecognizer
{
    CGPoint _startLocation;
}


- (CGPoint)startPointWithView:(UIView *)view
{
    return [view convertPoint:_startLocation toView:self.view];
}


- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    UITouch *touch = [touches anyObject];
    _startLocation = [touch locationInView:self.view];
    _event = event;
    [super touchesBegan:touches withEvent:event];
}

- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    if (self.state == UIGestureRecognizerStatePossible || event.timestamp - _event.timestamp > 0.3) {
        self.state = UIGestureRecognizerStateFailed;
        return;
    }
    [super touchesMoved:touches withEvent:event];
}

- (void)reset
{
    _startLocation =  CGPointZero;
    _event = nil;
    [super reset];
}

@end
