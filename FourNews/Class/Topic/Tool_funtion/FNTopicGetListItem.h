//
//  FNTopicGetListItem.h
//  FourNews
//
//  Created by xmg on 16/4/10.
//  Copyright © 2016年 张战威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNTopicGetListItem : NSObject

+ (void)getTopicNewsListWithPageCount:(NSInteger)pageCount :(void(^)(NSArray *))complete;

@end
