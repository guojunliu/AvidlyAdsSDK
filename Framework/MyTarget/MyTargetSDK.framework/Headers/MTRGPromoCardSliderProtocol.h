//
//  MTRGPromoCardSliderProtocol.h
//  myTargetSDK 4.7.9
//
//  Created by Andrey Seredkin on 24.11.17.
//  Copyright © 2017 Mail.ru Group. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class MTRGNativePromoCard;

@protocol MTRGPromoCardSliderDelegate <NSObject>

- (void)onCardClick:(MTRGNativePromoCard *)card;
- (void)onSlideToVisibleCards:(NSArray<MTRGNativePromoCard *> *)cards;

@end

@protocol MTRGPromoCardSliderProtocol <NSObject>

@required

@property (nonatomic, weak, nullable) id <MTRGPromoCardSliderDelegate> cardSliderDelegate;
@property (nonatomic) BOOL isCardsClickable;

- (void)setCards:(NSArray<MTRGNativePromoCard *> *)cards;
- (NSArray<MTRGNativePromoCard *> *)visibleCards;

@end

NS_ASSUME_NONNULL_END
