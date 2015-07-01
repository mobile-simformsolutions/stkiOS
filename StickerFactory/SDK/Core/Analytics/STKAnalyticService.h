//
//  STKAnalyticService.h
//  StickerFactory
//
//  Created by Vadim Degterev on 30.06.15.
//  Copyright (c) 2015 908 Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


//Categories
extern NSString *const STKAnalyticMessageCategory;

//Actions
extern NSString *const STKAnalyticActionCheck;


@interface STKAnalyticService : NSObject

+ (instancetype) sharedService;

- (void)sendEventWithCategory:(NSString*)category
                       action:(NSString*)action
                        label:(NSString*)label
                        value:(NSInteger)value;

@end