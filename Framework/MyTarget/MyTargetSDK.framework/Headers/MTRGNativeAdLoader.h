//
//  MTRGNativeAdLoader.h
//  MyTargetSDK
//
//  Created by Andrey Seredkin on 09.01.2018.
//  Copyright © 2018 Mail.ru Group. All rights reserved.
//

#import <MyTargetSDK/MTRGNativeAd.h>

@class MTRGCustomParams;

NS_ASSUME_NONNULL_BEGIN

@interface MTRGNativeAdLoader : NSObject

@property(nonatomic, readonly, nullable) MTRGCustomParams *customParams;
@property(nonatomic) BOOL autoLoadImages;
@property(nonatomic) BOOL autoLoadVideo;
@property(nonatomic) BOOL trackEnvironmentEnabled;
@property(nonatomic) BOOL trackLocationEnabled;

+ (instancetype)loaderForCount:(NSUInteger)count slotId:(NSUInteger)slotId;
- (instancetype)init NS_UNAVAILABLE;
- (void)loadWithCompletionBlock:(void (^)(NSArray<MTRGNativeAd *> *nativeAds))completionBlock;

@end

NS_ASSUME_NONNULL_END
