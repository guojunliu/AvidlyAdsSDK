//
//  GADMRewardedAdNetworkConnectorProtocol_Preview.h
//  Google Mobile Ads SDK
//
//  Copyright 2018 Google. All rights reserved.
//

#import <GoogleMobileAds/GADAdReward.h>
#import <GoogleMobileAds/Mediation/GADMediationAdRequest.h>

NS_ASSUME_NONNULL_BEGIN

@protocol GADMRewardedAdNetworkAdapter;

/// Rewarded ad network adapters interact with the Google Mobile Ads SDK using an object that
/// conforms to the GADMRewardedAdNetworkConnector protocol. The connector object can be used to
/// obtain information for ad requests and to call back to the Google Mobile Ads SDK on ad responses
/// and user interactions.
@protocol GADMRewardedAdNetworkConnector<GADMediationAdRequest>

/// Tells the connector that the adapter failed to present a rewarded ad.
- (void)rewardedAdDidFailToPresentWithError:(NSError *)error;

/// Tells the connector that the rewarded ad has loaded successfully.
- (void)rewardedAdDidLoad;

/// Tells the connector that the rewarded ad failed to load.
- (void)rewardedAdDidFailToLoadWithError:(NSError *)error;

/// Tells the connector that the rewarded ad was presented.
- (void)rewardedAdDidPresent;

/// Tells the connector that the rewarded ad has started playing.
- (void)rewardedAdDidStartPlaying;

/// Tells the connector that the rewarded ad got clicked.
- (void)rewardedAdDidGetClick;

/// Tells the connector that the rewarded ad has completed playing.
- (void)rewardedAdDidCompletePlaying;

/// Tells the connector that the rewarded ad was dismissed.
- (void)rewardedAdDidDismiss;

/// Tells the connector that the user has earned a reward.
- (void)userDidEarnReward:(GADAdReward *)reward;

@end

NS_ASSUME_NONNULL_END
