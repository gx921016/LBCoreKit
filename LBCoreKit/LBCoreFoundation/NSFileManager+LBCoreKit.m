//
//  NSFileManager+LBCoreKit.m
//  LBCoreKit
//
//  Created by macbookpro gao on 16/7/6.
//  Copyright © 2016年 LonelyBanana. All rights reserved.
//

#import "NSFileManager+LBCoreKit.h"

@implementation NSFileManager (LBCoreKit)

/**
 *  获取URL
 *
 *  @param directory 指定的directory
 *
 *  @return 得到的URL
 */
+ (NSURL *)URLForDirectory:(NSSearchPathDirectory)directory {
    return [self.defaultManager URLsForDirectory:directory inDomains:NSUserDomainMask].lastObject;
}

/**
 *  获取指定directory的路径
 *
 *  @param directory 指定的directory
 *
 *  @return 得到的路径
 */
+ (NSString *)pathForDirectory:(NSSearchPathDirectory)directory {
    return NSSearchPathForDirectoriesInDomains(directory, NSUserDomainMask, YES)[0];
}

/**
 *  获取Documents目录URL
 *
 *  @return Documents目录URL
 */
+ (NSURL *)documentsURL {
    return [self URLForDirectory:NSDocumentDirectory];
}

/**
 *  获取Documents目录路径
 *
 *  @return Documents目录路径
 */
+ (NSString *)documentsPath {
    return [self pathForDirectory:NSDocumentDirectory];
}

/**
 *  获取Library目录URL
 *
 *  @return Library目录URL
 */
+ (NSURL *)libraryURL {
    return [self URLForDirectory:NSLibraryDirectory];
}

/**
 *  获取Library目录路径
 *
 *  @return Library目录路径
 */
+ (NSString *)libraryPath {
    return [self pathForDirectory:NSLibraryDirectory];
}

/**
 *  获取Cache目录URL
 *
 *  @return Cache目录URL
 */
+ (NSURL *)cachesURL {
    return [self URLForDirectory:NSCachesDirectory];
}

/**
 *  获取Cache目录路径
 *
 *  @return Cache目录路径
 */
+ (NSString *)cachesPath {
    return [self pathForDirectory:NSCachesDirectory];
}

/**
 *  获取应用沙盒根路径
 *
 *  @return 应用沙盒根路径
 */
+ (NSString *)homePath {
    return NSHomeDirectory();
}

/**
 *  获取Tmp目录路径
 *
 *  @return Tmp目录路径
 */
+ (NSString *)tmpPath {
    return NSTemporaryDirectory();
}

/*!
 * @brief 判断文件是否存在于沙盒中
 * @param fileName 文件路径名
 * @return 返回YES表示存在，返回NO表示不存在
 */
- (BOOL)isFileExists:(NSString *)filePath {
    NSFileManager *fileManager = [NSFileManager defaultManager];
    BOOL result = [fileManager fileExistsAtPath:filePath];
    
    return result;
}

/*!
 * @brief 判断文件是否超时
 * @param filePath 文件路径名
 * @param timeout 限制的超时时间，单位为秒
 * @return 返回YES表示超时，返回NO表示未超时
 */
- (BOOL)isFile:(NSString *)filePath timeout:(NSTimeInterval)timeout {
    if ([[NSFileManager defaultManager] isFileExists:filePath]) {
        NSError *error = nil;
        NSDictionary *attributes = [[NSFileManager defaultManager] attributesOfItemAtPath:filePath
                                                                                    error:&error];
        if (error) {
            return YES;
        }
        if ([attributes isKindOfClass:[NSDictionary class]] && attributes) {
            //  NSLog(@"%@", attributes);
            NSString *createDate = [attributes objectForKey:@"NSFileModificationDate"];
            createDate = [NSString stringWithFormat:@"%@", createDate];
            if (createDate.length >= 19) {
                createDate = [createDate substringToIndex:19];
                NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
                formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
                
                NSDate *sinceDate = [formatter dateFromString:createDate];
                NSTimeInterval interval = [[NSDate date] timeIntervalSinceDate:sinceDate];
                return interval <= 0;
            }
        }
    }
    return YES;
}



@end
