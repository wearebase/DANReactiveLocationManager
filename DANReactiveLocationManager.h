//
//  DANReactiveLocationManager.h
//
//  Created by Daniel Tomlinson on 08/04/2014.
//  Copyright (c) 2014 Daniel Tomlinson.
//

#import <Foundation/Foundation.h>

@class RACSignal;
@class CLLocation;

#define kRLMErrorDomain @"reactiveLocationManager.danie.lt"

@interface DANReactiveLocationManager : NSObject

@property (nonatomic, assign) CGFloat   maximumRangeInMeters; // Defaults to 100
@property (nonatomic, assign) NSInteger maximumLocationAgeInSeconds; // Defaults to 10
@property (nonatomic, assign) BOOL      shouldUseDetailedLocationUpdates; // Defaults to NO

- (void)beginMonitoringLocation;
- (void)stopMonitoringLocation;

@property (nonatomic, strong, readonly) RACSignal *locationDidUpdateSignal;

@end
