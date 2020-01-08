//
//  OpenUpBannerStripWrapper.h
//  OpenUpSDK
//
//  Created by steve on 2018/4/16.
//  Copyright © 2018年 liuguojun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OpenUpBannerBaseWrapper.h"

typedef NS_ENUM(NSUInteger, OpenUpStripShowLocationType) {
    OpenUpStripShowLocationTypeTop       = 1,        //顶部
    OpenUpStripShowLocationTypeBottom    = 2,        //底部
};

@interface OpenUpBannerStripWrapper : OpenUpBannerBaseWrapper

- (instancetype)initWithPlacement:(NSString *)placement controller:(UIViewController*)vc;

- (instancetype)initWithPlacement:(NSString *)placement controller:(UIViewController*)vc size:(CGSize)size;

- (instancetype)initWithPlacement:(NSString *)placement controller:(UIViewController*)vc showLocation:(OpenUpStripShowLocationType)type;

- (instancetype)initWithPlacement:(NSString *)placement controller:(UIViewController*)vc size:(CGSize)size showLocation:(OpenUpStripShowLocationType)type;


@end
