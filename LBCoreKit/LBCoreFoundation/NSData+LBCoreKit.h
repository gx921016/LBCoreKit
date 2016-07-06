//
//  NSData+LBCoreKit.h
//  LBCoreKit
//
//  Created by macbookpro gao on 16/7/6.
//  Copyright © 2016年 LonelyBanana. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (LBCoreKit)

#pragma mark - 加密
// md5
- (NSString*)md5;

// sha
- (NSString *)sha1;
- (NSString *)sha256;
- (NSString *)sha384;
- (NSString *)sha512;

// base64
- (NSString *)base64Encode;
- (NSString *)base64Decode;

// des
- (NSString *)encryptWithKey:(NSString *)key;
- (NSString *)decryptWithKey:(NSString *)key;

// Add libz.dylib to your project.
#pragma mark - gzip
extern NSString* const GzipErrorDomain;
- (NSData*)gzip:(NSError**)error;

@end
