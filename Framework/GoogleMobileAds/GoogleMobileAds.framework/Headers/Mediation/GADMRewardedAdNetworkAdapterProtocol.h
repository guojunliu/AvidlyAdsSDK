//
//  GADMRewardedAdNetworkAdapterProtocol.h
//  Google Mobile Ads SDK
//
//  Copyright 2018 Google. All rights reserved.
//

#import <GoogleMobileAds/GoogleMobileAds.h>

NS_ASSUME_NONNULL_BEGIN

@protocol GADMRewardedAdNetworkConnector;

/// Your adapter must conform to this protocol to provide rewarded ads.
@protocol GADMRewardedAdNetworkAdapter<NSObject>

/// The extras class that is used to specify additional parameters for a request to this ad network.
/// Returns Nil if the network does not have extra settings for publishers to send.
+ (nullable Class<GADAdNetworkExtras>)networkExtrasClass;

/// Returns an initialized instance of the adapter when mediation ad requests come in. The adapter
/// must only maintain a weak reference to the provided connector.
- (instancetype)initWithRewardedAdNetworkConnector:(id<GADMRewardedAdNetworkConnector>)connector;

/// Tells the adapter to request a rewarded ad. The adapter must notify the Google Mobile Ads SDK
/// if the request succeeded or failed using callbacks provided in the connector.
- (void)requestRewardedAd;

/// Tells the adapter to present the rewarded ad with the provided view controller. This
/// method is only called after the adapter successfully requested an ad.
- (void)presentRewardedAdWithRootViewController:(UIViewController *)viewController;

@end

NS_ASSUME_NONNULL_END
