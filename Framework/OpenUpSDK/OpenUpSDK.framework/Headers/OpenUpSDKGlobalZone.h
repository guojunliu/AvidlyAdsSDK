//
//  OpenUpSDKAdsGlobalZone.h
//  OpenUpSDK
//
//  Created by steve on 2018/4/16.
//  Copyright © 2018年 liuguojun. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, OpenUpSDKGlobalZone) {
    OpenUpSDKGlobalZoneForeign = 0,     //海外
    OpenUpSDKGlobalZoneDomestic = 1,    //中国大陆
    OpenUpSDKGlobalZoneAuto = 2,        //自动根据ip判断
};
