// Copyright (c) 2014-present, Facebook, Inc. All rights reserved.
//
// You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
// copy, modify, and distribute this software in source code or binary form for use
// in connection with the web services and APIs provided by Facebook.
//
// As with any software that integrates with the Facebook platform, your use of
// this software is subject to the Facebook Developer Principles and Policies
// [http://developers.facebook.com/policy/]. This copyright notice shall be
// included in all copies or substantial portions of the software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>

#import "FBAdBidRequest.h"

NS_ASSUME_NONNULL_BEGIN

static NSDictionary *parametersForBanner(NSString *placementID, NSInteger width, NSInteger height)
{
    // construct the imp objects which are array of slots to bid on
    NSMutableDictionary *impObject = [NSMutableDictionary dictionary];
    // construct the banner object
    NSMutableDictionary *bannerObject = [NSMutableDictionary dictionary];
    // width
    bannerObject[@"w"] = @(width);
    // height
    bannerObject[@"h"] = @(height);
    impObject[@"banner"] = bannerObject;
    // Placement ID or Placement Name
    impObject[@"tagid"] = placementID;
    // A unique identifier for this impression within the context of the bid request.
    impObject[@"id"] = [[NSUUID UUID] UUIDString];

    return impObject;
}

static NSDictionary *parametersForInterstitial(NSString *placementID)
{
    // construct the imp objects which are array of slots to bid on
    NSMutableDictionary *impObject = [NSMutableDictionary dictionary];
    // construct the banner object
    NSMutableDictionary *bannerObject = [NSMutableDictionary dictionary];
    // width
    bannerObject[@"w"] = @0;
    // height
    bannerObject[@"h"] = @0;
    impObject[@"banner"] = bannerObject;
    // Placement ID or Placement Name
    impObject[@"tagid"] = placementID;
    // interstitial: 0 = normal (default); 1 = interstitial
    impObject[@"instl"] = @1;
    // A unique identifier for this impression within the context of the bid request
    impObject[@"id"] = [[NSUUID UUID] UUIDString];

    return impObject;
}

static NSDictionary *parametersForNative(NSString *placementID)
{
    // construct the imp objects which are array of slots to bid on
    NSMutableDictionary *impObject = [NSMutableDictionary dictionary];
    // construct the banner object
    NSMutableDictionary *nativeObject = [NSMutableDictionary dictionary];
    // width
    nativeObject[@"w"] = @-1;
    // height
    nativeObject[@"h"] = @-1;
    impObject[@"native"] = nativeObject;
    // Placement ID or Placement Name
    impObject[@"tagid"] = placementID;
    // A unique identifier for this impression within the context of the bid request
    impObject[@"id"] = [[NSUUID UUID] UUIDString];

    return impObject;
}

static NSDictionary *parametersForVideo(NSString *placementID, NSInteger linearity)
{
    // construct the imp objects which are array of slots to bid on
    NSMutableDictionary *impObject = [NSMutableDictionary dictionary];
    // construct the banner object
    NSMutableDictionary *videoObject = [NSMutableDictionary dictionary];
    // width
    videoObject[@"w"] = @0;
    // height
    videoObject[@"h"] = @0;
    // linearity
    videoObject[@"linearity"] = @(linearity);
    impObject[@"video"] = videoObject;
    // Placement ID or Placement Name
    impObject[@"tagid"] = placementID;
    // A unique identifier for this impression within the context of the bid request
    impObject[@"id"] = [[NSUUID UUID] UUIDString];

    return impObject;
}

static NSDictionary *parametersForRewardedVideo(NSString *placementID)
{
    return parametersForVideo(placementID, 2);
}

static NSDictionary *parametersForInStreamVideo(NSString *placementID)
{
    return parametersForVideo(placementID, 1);
}

static NSArray * _Nullable parametersForAdFormat(FBAdBidFormat format, NSString *placementID)
{
    switch (format) {
        case FBAdBidFormatBanner_300_50:
            return @[parametersForBanner(placementID, 300, 50)];

        case FBAdBidFormatBanner_320_50:
            return @[parametersForBanner(placementID, 320, 50)];

        case FBAdBidFormatBanner_HEIGHT_50:
            return @[parametersForBanner(placementID, -1, 50)];

        case FBAdBidFormatBanner_HEIGHT_90:
            return @[parametersForBanner(placementID, -1, 90)];

        case FBAdBidFormatBanner_HEIGHT_250:
            return @[parametersForBanner(placementID, -1, 250)];

        case FBAdBidFormatInterstitial:
            return @[parametersForInterstitial(placementID)];

        case FBAdBidFormatNative:
        case FBAdBidFormatNativeBanner:
            return @[parametersForNative(placementID)];

        case FBAdBidFormatInstreamVideo:
            return @[parametersForInStreamVideo(placementID)];

        case FBAdBidFormatRewardedVideo:
            return @[parametersForRewardedVideo(placementID)];
        default:
            break;
    }
    return nil;
}

NS_ASSUME_NONNULL_END
