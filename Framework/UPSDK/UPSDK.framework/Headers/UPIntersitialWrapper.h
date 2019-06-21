//
//  UPIntersitialWrapper.h
//  UPSDK
//
//  Created by steve on 2017/4/18.
//  Copyright © 2017年 liuguojun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@protocol UPIntersitialDelegate;
@protocol UPIntersitialLoadDelegate;

@interface UPIntersitialWrapper : NSObject

- (instancetype)initPlacement:(NSString *)placement;

- (NSString *)getPlacement;

- (void)setDelegate:(id<UPIntersitialDelegate>)delegate;

- (BOOL)isReady;

- (BOOL)show:(UIViewController *)viewController;

- (void)load:(id<UPIntersitialLoadDelegate>)loadDelegate;

- (void)onlineReportDebug:(NSString *)eid placeId: placeid msg:(NSString *)msg;

@end

@protocol UPIntersitialDelegate <NSObject>

/**
 插屏广告展示
 
 @param interstitialAd 插屏广告
 */
- (void)interstitialAdDidShow:(UPIntersitialWrapper *)interstitialAd;

/**
 插屏广告关闭
 
 @param interstitialAd 插屏广告
 */
- (void)interstitialAdDidClose:(UPIntersitialWrapper *)interstitialAd;

/**
 插屏广告点击
 
 @param interstitialAd 插屏广告
 */
- (void)interstitialAdDidClick:(UPIntersitialWrapper *)interstitialAd;

@end

@protocol UPIntersitialLoadDelegate <NSObject>

/**
 插屏广告加载成功

 @param interstitialAd 插屏广告
 */
- (void)interstitialAdDidLoad:(UPIntersitialWrapper *)interstitialAd;

/**
 插屏广告加载失败

 @param interstitialAd 插屏广告
 */
- (void)interstitialAdDidLoadFail:(UPIntersitialWrapper *)interstitialAd;
@end
