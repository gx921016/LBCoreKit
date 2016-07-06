//
//  NSFileManager+LBCoreKit.h
//  LBCoreKit
//
//  Created by macbookpro gao on 16/7/6.
//  Copyright © 2016年 LonelyBanana. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileManager (LBCoreKit)

#pragma mark - 各种路径及URL
+ (NSURL *)documentsURL;
+ (NSString *)documentsPath;
+ (NSURL *)libraryURL;
+ (NSString *)libraryPath;
+ (NSURL *)cachesURL;
+ (NSString *)cachesPath;
+ (NSString *)homePath;
+ (NSString *)tmpPath;

#pragma 各种方法
- (BOOL)isFileExists:(NSString *)filePath;
- (BOOL)isFile:(NSString *)filePath timeout:(NSTimeInterval)timeout;

@end
