//
//  VeganHelper.h
//  iamvegan
//
//  Created by Ian MacKinnon on 2016-01-22.
//  Copyright © 2016 Ian MacKinnon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>

#import "VeganHelper.h"
#import "Vegan.h"
#import <MagicalRecord/MagicalRecord.h>

#define SOURCE_BEACON_ID @"ca.lunarluau.iamvegan"
#define VEGAN_UUID      @"67EADC65-1C39-42CA-95CC-7EF8692B68C7"


@interface VeganHelper : NSObject

+(void) handleRangedBeacon:(CLBeacon*)beacon;
+(void) handleUserCheckinResponse:(NSInteger)buttonIndex for:(NSDictionary*)userInfo;
+(void) clearVegans;

@end