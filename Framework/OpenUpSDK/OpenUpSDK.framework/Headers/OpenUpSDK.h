//
//  OpenUpSDK.h
//  OpenUpSDK
//
//  Created by steve on 2017/4/20.
//  Copyright © 2017年 liuguojun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "OpenUpBannerBaseWrapper.h"
#import "OpenUpBannerStripWrapper.h"
#import "OpenUpBannerRectangleWrapper.h"

#import "OpenUpIntersitialWrapper.h"
#import "OpenUpInterstitialDebug.h"

#import "OpenUpRewardWrapper.h"
#import "OpenUpRewardDebug.h"

#import "OpenUpIconWrapper.h"

#import "OpenUpSDKVersion.h"
#import "OpenUpSDKGlobalZone.h"
#import "OpenUpAccessPrivacyInfoStatusEnum.h"

@interface OpenUpSDK : NSObject

/**
 初始化SDK
 
 @param appKey appKey
 */
+ (void)initSDKWithAppKey:(NSString *)appKey;

/**
 初始化SDK（根据发行区域）

 @param appKey appKey
 @param zone 发行区域
 */
+ (void)initSDKWithAppKey:(NSString *)appKey zone:(OpenUpSDKGlobalZone)zone;

/**
 CP初始化ABTest配置
 
 @param gameAccountId 用户在游戏中的帐号id
 @param completeTask 是否完成了游戏中的新手任务，可选0或者1
 @param isPaid 付费 - 0 未付费；>1 付费金额
 @param promotionChannelName 推广渠道
 @param gender 性别   "M", "F"，未知可以传""
 @param age 年龄
 @param tags 标签
 */
+ (void)initAdConfigWithGameAccountId:(NSString *)gameAccountId completeTask:(BOOL)completeTask isPaid:(int)isPaid promotionChannelName:(NSString *)promotionChannelName gender:(NSString *)gender age:(int)age tags:(NSArray<NSString *> *)tags;

/**
 CP根据广告位获取ABTest配置
 
 @param placementID 广告位 (不能为nil和@"")
 @return 广告配置
 */
+ (NSDictionary *)getAdConfigWithPlacementID:(NSString *)placementID;

/**
 CP根据广告位获取ABTest配置(json)
 
 @param placementID 广告位 (不能为nil和@"")
 @return 广告配置(json字符串)
 */
+ (NSString *)getAdConfigJsonStrWithPlacementID:(NSString *)placementID;

+ (void)loadUPAdsByManual;

/**
 更新访问用户隐私信息状态

 @param status 访问用户隐私信息状态，不能传OpenUpAccessPrivacyInfoStatusNone
 */
+ (void)updateAccessPrivacyInfoStatus:(OpenUpAccessPrivacyInfoStatus)status;

/**
 使用弹窗向用户请求访问隐私信息授权

 @param viewController 当前视图控制器
 @param completionBlock 回调，其中isAccepted为YES表示用户同意使用隐私信息，为NO表示用户不同意使用隐私信息
 */
+ (void)requestAuthorizationWithAlert:(UIViewController *)viewController completion:(void (^)(BOOL isAccepted))completionBlock;

/**
 获取当前访问用户隐私信息状态

 @return 访问用户隐私信息状态
 */
+ (OpenUpAccessPrivacyInfoStatus)getCurrentAccessPrivacyInfoStatus;

/**
 查询用户是否是欧盟用户

 @param completionBlock 回调 isEuropeanUnion为YES表示是欧盟用户
 */
+ (void)checkIsEuropeanUnionUser:(void (^)(BOOL isEuropeanUnion))completionBlock;

/**
 当前SDK是否是debug模式

 @return isLogOpened
 */
+ (BOOL)isLogOpened;

/**
 自检接口，方便用户检测 OpenUpSDK 接入是否正确，自检成功游戏自动上线（此方式仅用于测试阶段，正式应用请不要调用该接口）。
 请在初始化之后调用。
 
 @param viewController 用来展示测试页面的viewController
 */
+ (void)autoOneKeyInspect:(UIViewController *)viewController;

+ (void)setAppsFlyerUID:(NSString *)appsFlyerUID;

+ (void)setAdjustId:(NSString *)adjustId;

@end
