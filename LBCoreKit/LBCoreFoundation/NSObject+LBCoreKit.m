//
//  NSObject+LBCoreKit.m
//  LBCoreKit
//
//  Created by macbookpro gao on 16/7/6.
//  Copyright © 2016年 LonelyBanana. All rights reserved.
//

#import "NSObject+LBCoreKit.h"
#import <objc/runtime.h>
@implementation NSObject (LBCoreKit)

#pragma mark- associated
- (id)uxy_getAssociatedObjectForKey:(const char *)key
{
    const char * propName = key;
    id currValue = objc_getAssociatedObject( self, propName );
    return currValue;
}

- (id)uxy_copyAssociatedObject:(id)obj forKey:(const char *)key
{
    const char * propName = key;
    id oldValue = objc_getAssociatedObject( self, propName );
    objc_setAssociatedObject( self, propName, obj, OBJC_ASSOCIATION_COPY );
    return oldValue;
}

- (id)uxy_retainAssociatedObject:(id)obj forKey:(const char *)key;
{
    const char * propName = key;
    id oldValue = objc_getAssociatedObject( self, propName );
    objc_setAssociatedObject( self, propName, obj, OBJC_ASSOCIATION_RETAIN_NONATOMIC );
    return oldValue;
}

- (id)uxy_assignAssociatedObject:(id)obj forKey:(const char *)key
{
    const char * propName = key;
    id oldValue = objc_getAssociatedObject( self, propName );
    objc_setAssociatedObject( self, propName, obj, OBJC_ASSOCIATION_ASSIGN );
    return oldValue;
}

- (void)uxy_removeAssociatedObjectForKey:(const char *)key
{
    const char * propName = key;
    objc_setAssociatedObject( self, propName, nil, OBJC_ASSOCIATION_ASSIGN );
}

- (void)uxy_removeAllAssociatedObjects
{
    objc_removeAssociatedObjects( self );
}


@end
