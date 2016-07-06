//
//  NSMutableString+LBCoreKit.h
//  LBCoreKit
//
//  Created by macbookpro gao on 16/7/6.
//  Copyright © 2016年 LonelyBanana. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableString (LBCoreKit)
- (void)replaceString:(NSString *)searchString withString:(NSString *)newString;
- (void)removeSpace;
- (void)removeNilAndNull;
@end
