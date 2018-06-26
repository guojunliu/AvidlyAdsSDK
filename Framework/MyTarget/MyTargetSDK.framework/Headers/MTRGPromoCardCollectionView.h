//
//  MTRGPromoCardCollectionView.h
//  myTargetSDK 4.7.9
//
//  Created by Andrey Seredkin on 02.11.16.
//  Copyright © 2016 Mail.ru Group. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MyTargetSDK/MTRGNativePromoCard.h>
#import <MyTargetSDK/MTRGPromoCardSliderProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface MTRGPromoCardCollectionView : UICollectionView <MTRGPromoCardSliderProtocol, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic, weak, nullable) id <MTRGPromoCardSliderDelegate> cardSliderDelegate;
@property (nonatomic) BOOL isCardsClickable;

- (void)setCards:(NSArray<MTRGNativePromoCard *> *)cards;

@end

NS_ASSUME_NONNULL_END
