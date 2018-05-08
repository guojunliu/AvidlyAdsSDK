//
//  WMRewardedVideoAd+Private.h
//  WMAdSDK
//
//  Created by gdp on 2018/1/18.
//  Copyright © 2018年 bytedance. All rights reserved.
//

#import "WMRewardedVideoAd.h"
#import "WMNativeAd.h"

@class WMNativeAd;
@protocol WMNativeAdDelegate;

@interface WMRewardedVideoAd() <WMNativeAdDelegate>
@property (nonatomic, strong) WMNativeAd *nativeAd;
@property (nonatomic, strong) WMRewardedVideoModel *rewardedVideoModel;
@end
