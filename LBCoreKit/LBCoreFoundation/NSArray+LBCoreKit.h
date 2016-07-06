//
//  NSArray+LBCoreKit.h
//  LBCoreKit
//
//  Created by macbookpro gao on 16/7/6.
//  Copyright © 2016年 LonelyBanana. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
@interface NSArray (LBCoreKit)

#pragma mark - 取值
- (id)firstObject;
- (id)randomObject;

#pragma mark - 排序
- (NSArray *)shuffledArray;
- (NSArray *)reversedArray;
- (NSArray *)uniqueArray;
- (NSArray *)arraySorting:(NSString *)parameters  ascending:(BOOL)ascending;

#pragma mark - 安全操作
-(id)objectWithIndex:(NSUInteger)index;

- (NSString*)stringWithIndex:(NSUInteger)index;
- (NSNumber*)numberWithIndex:(NSUInteger)index;
- (NSArray*)arrayWithIndex:(NSUInteger)index;
- (NSDictionary*)dictionaryWithIndex:(NSUInteger)index;
- (NSInteger)integerWithIndex:(NSUInteger)index;
- (NSUInteger)unsignedIntegerWithIndex:(NSUInteger)index;
- (BOOL)boolWithIndex:(NSUInteger)index;

- (int16_t)int16WithIndex:(NSUInteger)index;
- (int32_t)int32WithIndex:(NSUInteger)index;
- (int64_t)int64WithIndex:(NSUInteger)index;

- (char)charWithIndex:(NSUInteger)index;
- (short)shortWithIndex:(NSUInteger)index;
- (float)floatWithIndex:(NSUInteger)index;
- (double)doubleWithIndex:(NSUInteger)index;

- (CGFloat)CGFloatWithIndex:(NSUInteger)index;
- (CGPoint)pointWithIndex:(NSUInteger)index;
- (CGSize)sizeWithIndex:(NSUInteger)index;
- (CGRect)rectWithIndex:(NSUInteger)index;

@end
