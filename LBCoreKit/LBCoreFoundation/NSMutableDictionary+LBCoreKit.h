//
//  NSMutableDictionary+LBCoreKit.h
//  LBCoreKit
//
//  Created by macbookpro gao on 16/7/6.
//  Copyright © 2016年 LonelyBanana. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
@interface NSMutableDictionary (LBCoreKit)

#pragma mark - 安全操作
-(void)setObj:(id)i forKey:(NSString*)key;
-(void)setString:(NSString*)i forKey:(NSString*)key;

-(void)setBool:(BOOL)i forKey:(NSString*)key;
-(void)setInt:(int)i forKey:(NSString*)key;
-(void)setInteger:(NSInteger)i forKey:(NSString*)key;
-(void)setUnsignedInteger:(NSUInteger)i forKey:(NSString*)key;

-(void)setChar:(char)c forKey:(NSString*)key;
-(void)setFloat:(float)i forKey:(NSString*)key;
-(void)setDouble:(double)i forKey:(NSString*)key;
-(void)setLongLong:(long long)i forKey:(NSString*)key;

-(void)setCGFloat:(CGFloat)f forKey:(NSString*)key;
-(void)setPoint:(CGPoint)o forKey:(NSString*)key;
-(void)setSize:(CGSize)o forKey:(NSString*)key;
-(void)setRect:(CGRect)o forKey:(NSString*)key;

@end
