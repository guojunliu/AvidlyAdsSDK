//
//  OpenUpBannerRectangleWrapper.h
//  OpenUpSDK
//
//  Created by steve on 2018/4/16.
//  Copyright © 2018年 liuguojun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OpenUpBannerBaseWrapper.h"

@interface OpenUpBannerRectangleWrapper : OpenUpBannerBaseWrapper

- (instancetype)initWithPlacement:(NSString *)placement controller:(UIViewController*)vc;

- (instancetype)initWithPlacement:(NSString *)placement controller:(UIViewController*)vc size:(CGSize)size;

@end
