//
//  ZZVideoAd.h
//  ZZAdSDK
//
//  Created by 至真 on 2017/10/10.
//  Copyright © 2017年 xuhuize. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZZRewardAdInfo.h"
NS_ASSUME_NONNULL_BEGIN

@protocol ZZRewardVideoAdDelegate;
@interface ZZRewardVideoAd : NSObject
@property (nonatomic, weak, nullable) id <ZZRewardVideoAdDelegate> delegate;
@property (nonatomic, getter=isReadyToPlay, readonly) BOOL readyToPlay;//视频是否可以播放
/**
 根据广告位初始化

 @param placementID 广告位
 @return 返回当前对象
 */
- (instancetype)initWithPlacementID:(NSString *)placementID;

/**
 加载视频广告
 */
- (void)loadRewardVideoAd;

/**
 展示视频广告

 @param rootViewController 当前控制器
 */
- (void)showAdFromRootViewController:(UIViewController *)rootViewController;

@end

@protocol ZZRewardVideoAdDelegate <NSObject>
@optional
/**
 视频加载成功
 
 @param  rewardVideoAd rewardVideoAd
 */
- (void)zzAd_RewardVideoAdLoadSuccess:(ZZRewardVideoAd *)rewardVideoAd;

/**
 视频加载失败
 
 @param rewardVideoAd rewardVideoAd
 @param error error
 */
- (void)zzAd_RewardVideoAd:(ZZRewardVideoAd *)rewardVideoAd didFailLoadWithError:(NSError *)error;

/**
 即将展示全屏广告
 
 @param rewardVideoAd rewardVideoAd
 */
- (void)zzAd_RewardVideoAdWillEnterFullscreen:(ZZRewardVideoAd *)rewardVideoAd;

/**
 退出视频播放界面
 
 @param rewardVideoAd rewardVideoAd
 */
-(void)zzAd_RewardVideoAdDidExitVideo:(ZZRewardVideoAd *)rewardVideoAd;

/**
 退出全屏广告
 
 @param rewardVideoAd rewardVideoAd
 */
- (void)zzAd_RewardVideoAdDidExitFullscreen:(ZZRewardVideoAd *)rewardVideoAd;

/**
 点击了视频
 
 @param rewardVideoAd rewardVideoAd
 */
- (void)zzAd_RewardVideoAdDidClicked:(ZZRewardVideoAd *)rewardVideoAd;

/**
 获取观看视频奖励
 @param rewardVideoAd rewardVideoAd
 @param rewardAdInfo rewardAdInfo
 */
-(void)zzAd_RewardVideoAd:(ZZRewardVideoAd * )rewardVideoAd didGetReward:(ZZRewardAdInfo *)rewardAdInfo;
@end


NS_ASSUME_NONNULL_END
