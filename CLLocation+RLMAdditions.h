//
//  CLLocation+RLMAdditions.h
//
//  Created by Daniel Tomlinson on 09/04/2014.
//  Copyright (c) 2014 We Are Base. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

@interface CLLocation (RLMAdditions)

- (BOOL)isOlderThanAge:(NSInteger)ageInSeconds;
- (BOOL)isOutsideRange:(NSInteger)rangeInMeters;

@end
