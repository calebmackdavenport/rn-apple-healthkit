//
//  RCTAppleHealthKit+Methods_Dietary.h
//  RCTAppleHealthKit
//
//  Created by Greg Wilson on 2016-06-26.
//  Copyright © 2016 Greg Wilson. All rights reserved.
//

#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Dietary)

- (void)dietary_getDietaryEnergy:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getCaffeine:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getCarbohydrates:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getSugar:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getFiber:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getFolate:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getIron:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getMagnesium:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getMonounsaturatedFat:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getPolyunsaturatedFat:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getPotassium:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getProtein:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getSaturatedFat:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getSodium:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getTotalFat:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getVitaminA:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getVitaminB6:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getVitaminB12:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getVitaminC:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getVitaminD:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getVitaminE:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getVitaminK:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getWater:(NSDictionary  *)input callback:(RCTResponseSenderBlock)callback;

- (void)saveFood:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)saveWater:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

@end
