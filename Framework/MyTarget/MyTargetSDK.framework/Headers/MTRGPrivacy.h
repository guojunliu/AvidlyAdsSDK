//
//  MTRGPrivacy.h
//  myTargetSDK 4.7.9
//
//  Created by Andrey Seredkin on 16.05.2018.
//  Copyright © 2018 Mail.Ru Group. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MTRGPrivacy : NSObject

+ (BOOL)userConsent;

+ (void)setUserConsent:(BOOL)userConsent;

+ (BOOL)userAgeRestricted;

+ (void)setUserAgeRestricted:(BOOL)userAgeRestricted;

@end

NS_ASSUME_NONNULL_END
