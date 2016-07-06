//
//  NSMutableString+LBCoreKit.m
//  LBCoreKit
//
//  Created by macbookpro gao on 16/7/6.
//  Copyright © 2016年 LonelyBanana. All rights reserved.
//

#import "NSMutableString+LBCoreKit.h"

@implementation NSMutableString (LBCoreKit)

/**
 *  替换字符串
 *
 *  @param searchString 将要被替换的字符串
 *  @param newString    替换后的字符串
 */
- (void)replaceString:(NSString *)searchString withString:(NSString *)newString {
    NSRange range = [self rangeOfString:searchString];
    [self replaceCharactersInRange:range withString:newString];
}

/**
 *  去除空格
 */
- (void)removeSpace {
    [self replaceString:@" " withString:@""];
}

- (void)removeNilAndNull {
    
    if ([self isEqual:[NSNull null]]| (self == nil)) {
        
        [self setString:@""];
    }
}


@end
