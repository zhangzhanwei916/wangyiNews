//
//  FNNewsDealDetailItem.h
//  FourNews
//
//  Created by xmg on 16/4/3.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FNNewsDetailItem.h"

@interface FNNewsDealDetailItem : NSObject

+ (FNNewsDetailItem *)itemWithDetailitem:(FNNewsDetailItem *)item :(void(^)(NSMutableArray *array))getStrongRange;

@end
