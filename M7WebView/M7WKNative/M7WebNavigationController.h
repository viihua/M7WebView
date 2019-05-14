//
//  M7WebNavigationController.h
//  Pkit
//
//  Created by DevMan7 on 2017/12/19.
//  Copyright © 2017年 llyouss. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface M7WebNavigationController : UINavigationController

@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; //侧滑手势
@property (nonatomic, assign) BOOL isEnableScroll;


@end

@protocol LCPanBackProtocol <NSObject>

/**
 能否侧滑
 
 @param panNavigationController panNavigationController
 @return BooL
 */
- (BOOL)enablePanBack:(M7WebNavigationController *)panNavigationController;

/**
 开始侧滑手势
 
 @param panNavigationController panNavigationController
 */
- (void)startPanBack:(M7WebNavigationController *)panNavigationController;

/**
 完成侧滑
 
 @param panNavigationController panNavigationController
 */
- (void)finshPanBack:(M7WebNavigationController *)panNavigationController;

/**
 重置侧滑手势
 
 @param panNavigationController panNavigationController
 */
- (void)resetPanBack:(M7WebNavigationController *)panNavigationController;

@end


