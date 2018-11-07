//
//  ZZRewardAdInfo.h
//  ZZAdSDK
//
//  Created by 至真 on 2017/10/17.
//  Copyright © 2017年 xuhuize. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZZRewardAdInfo : NSObject


/**
 奖励的单位
 */
@property (nonatomic, copy  ) NSString  *rewardCurrency;

/**
 *  激励的名称
 */
@property (nonatomic, copy  ) NSString  *rewardName;

/**
 *  激励的数量
 */
@property (nonatomic, assign) NSInteger rewardAmount;

- (instancetype)initWithRewardCurrency:(NSString *)rewardCurrency rewardName:(NSString *)rewardName andRewardAmount:(NSInteger )rewardAmount;
@end
