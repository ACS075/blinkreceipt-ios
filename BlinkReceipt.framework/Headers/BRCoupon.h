//
//  BRCoupon.h
//  BlinkReceipt
//
//  Created by Danny Panzer on 10/13/16.
//  Copyright © 2016 BlinkReceipt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BRValue.h"

typedef NS_ENUM(NSUInteger, BRCouponType) {
    BRCouponTypeUnknown,
    BRCouponTypeStore,
    BRCouponTypeMfgr
};

/**
 *  Describes one coupon or discount on a receipt
 */
@interface BRCoupon : NSObject

/**
 *  The type of coupon based on the above enum
 */
@property (nonatomic, readonly) BRCouponType couponType;

/**
 *  The amount of the coupon or discount
 */
@property (nonatomic, readonly, strong) BRFloatValue *couponAmount;

/**
 *  Coupon description
 */
@property (nonatomic, readonly, strong) BRStringValue *couponDesc;


/**
 *  Coupon SKU
 */
@property (nonatomic, readonly, strong) BRStringValue *couponSku;

/**
 *  If this coupon is related to a particular product, this property will be set to correspond to the index of related product in the `BRScanResults.products` array.
 
    Default value: -1
 */
@property (nonatomic, readonly) NSInteger relatedProductIndex;

/**
 *  Convert a coupon type to a user-friendly string
 */
+ (NSString*)friendlyNameForCouponType:(BRCouponType)type;

@end
