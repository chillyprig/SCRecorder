//
//  XHCameraTagetView.h
//  iyilunba
//
//  Created by 曾 宪华 on 13-11-8.
//  Copyright (c) 2013年 曾 宪华 开发团队(http://iyilunba.com ). All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SCRecorder.h"

@interface SCRecorderFocusTargetView : UIView

@property (strong, nonatomic) UIImage *outsideFocusTargetImage;
@property (strong, nonatomic) UIImage *insideFocusTargetImage;
@property (strong, nonatomic) SCRecorder *recorder;
@property (assign, nonatomic) float insideFocusTargetImageSizeRatio;

- (void)startTargeting;
- (void)stopTargeting;

@end
