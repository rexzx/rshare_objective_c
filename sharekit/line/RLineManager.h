//
//  RLineManager.h
//  sharekit
//
//  Created by valenti on 2018/7/23.
//  Copyright © 2018 rex. All rights reserved.
//

#import "RShare.h"

NS_ASSUME_NONNULL_BEGIN
@interface RLineManager : RShare

+ (instancetype)shared;

-(void)connect:(RConfiguration)c;

- (void)shareText:(NSString*)text;

- (void)shareImage:(UIImage*)image;

@end
NS_ASSUME_NONNULL_END
