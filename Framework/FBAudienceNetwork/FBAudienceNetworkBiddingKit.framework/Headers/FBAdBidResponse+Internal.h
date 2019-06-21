// Copyright 2004-present Facebook. All Rights Reserved.

#import <Foundation/Foundation.h>

#import "FBAdBidResponse.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Class summary.
 */
@interface FBAdBidResponse (Internal)
- (instancetype)initWithPlatformAuctionID:(NSString *)platformAuctionID
                             bidRequestID:(NSString *)bidRequestID
                             impressionID:(NSString *)impressionID
                              placementID:(NSString *)placementID
                               bidPayload:(NSString *)payload
                                     nurl:(nullable NSString *)nurl
                                     lurl:(nullable NSString *)lurl
                                 currency:(nullable NSString *)currency
                                 bidPrice:(double)price;

- (instancetype)initWithPlacementID:(NSString *)placementID
                       errorMessage:(NSString *)errorMessage;

- (instancetype)initWithPlacementID:(NSString *)placementID
                              error:(NSError *)error;

- (instancetype)initWithPlacementID:(NSString *)placementID
                errorForURLResponse:(NSHTTPURLResponse *)response;

- (void)notifyLossWithErrorCode:(NSInteger)errorCode;
- (void)notifyTimeoutWithURL:(NSString *)timeoutURL;
@end

NS_ASSUME_NONNULL_END
