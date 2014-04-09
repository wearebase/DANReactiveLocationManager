//
//  CLLocation+RLMAdditions.m
//  NCTX
//
//  Created by Daniel Tomlinson on 09/04/2014.
//  Copyright (c) 2014 We Are Base. All rights reserved.
//

#import "CLLocation+RLMAdditions.h"


@implementation CLLocation (RLMAdditions)

- (BOOL)isOlderThanAge:(NSInteger)ageInSeconds
{
    NSInteger locationTimeIntervalSinceNow = abs([self.timestamp timeIntervalSinceNow]);
    return (locationTimeIntervalSinceNow > ageInSeconds);
}

- (BOOL)isOutsideRange:(NSInteger)rangeInMeters
{
    return (self.horizontalAccuracy > rangeInMeters && self.verticalAccuracy > rangeInMeters);
}

@end

