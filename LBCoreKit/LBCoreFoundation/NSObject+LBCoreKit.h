//
//  NSObject+LBCoreKit.h
//  LBCoreKit
//
//  Created by macbookpro gao on 16/7/6.
//  Copyright © 2016年 LonelyBanana. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (LBCoreKit)

#pragma mark- associated
- (id)uxy_getAssociatedObjectForKey:(const char *)key;
- (id)uxy_copyAssociatedObject:(id)obj forKey:(const char *)key;
- (id)uxy_retainAssociatedObject:(id)obj forKey:(const char *)key;
- (id)uxy_assignAssociatedObject:(id)obj forKey:(const char *)key;
- (void)uxy_removeAssociatedObjectForKey:(const char *)key;
- (void)uxy_removeAllAssociatedObjects;

@end
