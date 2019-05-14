//
//  PAPhotoBrowser.h
//  Pkit
//
//  Created by DevMan7 on 2019/5/11.
//  Copyright © 2018年 llyouss. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

@interface PAPhotoBrowser : NSObject

@property (nonatomic, retain) NSMutableArray *photos;
@property (nonatomic, retain) NSMutableArray<NSString *> *video;

+ (instancetype)shareInstance;
- (void)loadPhotoBrowserShowIndex:(NSInteger)index;

@end
