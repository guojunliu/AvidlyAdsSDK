//
//  OpenUpIntersitialWrapper.h
//  OpenUpSDK
//
//  Created by steve on 2017/4/18.
//  Copyright © 2017年 liuguojun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@protocol OpenUpIntersitialDelegate;
@protocol OpenUpIntersitialLoadDelegate;

@interface OpenUpIntersitialWrapper : NSObject

- (instancetype)initPlacement:(NSString *)placement;

- (NSString *)getPlacement;

- (void)setDelegate:(id<OpenUpIntersitialDelegate>)delegate;

- (BOOL)isReady;

- (BOOL)show:(UIViewController *)viewController;

- (void)load:(id<OpenUpIntersitialLoadDelegate>)loadDelegate;

- (void)onlineReportDebug:(NSString *)eid placeId: placeid msg:(NSString *)msg;

@end

@protocol OpenUpIntersitialDelegate <NSObject>

/**
 插屏广告展示
 
 @param interstitialAd 插屏广告
 */
- (void)interstitialAdDidShow:(OpenUpIntersitialWrapper *)interstitialAd;

/**
 插屏广告关闭
 
 @param interstitialAd 插屏广告
 */
- (void)interstitialAdDidClose:(OpenUpIntersitialWrapper *)interstitialAd;

/**
 插屏广告点击
 
 @param interstitialAd 插屏广告
 */
- (void)interstitialAdDidClick:(OpenUpIntersitialWrapper *)interstitialAd;

@end

@protocol OpenUpIntersitialLoadDelegate <NSObject>

/**
 插屏广告加载成功

 @param interstitialAd 插屏广告
 */
- (void)interstitialAdDidLoad:(OpenUpIntersitialWrapper *)interstitialAd;

/**
 插屏广告加载失败

 @param interstitialAd 插屏广告
 */
- (void)interstitialAdDidLoadFail:(OpenUpIntersitialWrapper *)interstitialAd;
@end
