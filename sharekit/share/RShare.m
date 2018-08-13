//
//  RShare.m
//  sharekit
//
//  Created by valenti on 2018/5/30.
//  Copyright © 2018 rex. All rights reserved.
//

#import "RShare.h"
#import "RShareManager.h"

@implementation RShare

- (void)connect:(RConfiguration)c {}

- (void)setPlatformObj:(id)obj {
    [[RShareManager shared] setValue:obj forKey:@"platformObj"];
}

@end
