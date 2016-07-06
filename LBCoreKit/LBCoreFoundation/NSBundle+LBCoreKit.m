//
//  NSBundle+LBCoreKit.m
//  LBCoreKit
//
//  Created by macbookpro gao on 16/7/6.
//  Copyright © 2016年 LonelyBanana. All rights reserved.
//

#import "NSBundle+LBCoreKit.h"

@implementation NSBundle (LBCoreKit)

/**
 *  获取icon的路径
 *
 *  @return 获得的路径
 */
- (NSString*)appIconPath{
    NSString* iconFilename = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleIconFile"] ;
    NSString* iconBasename = [iconFilename stringByDeletingPathExtension] ;
    NSString* iconExtension = [iconFilename pathExtension] ;
    return [[NSBundle mainBundle] pathForResource:iconBasename
                                           ofType:iconExtension] ;
}

/**
 *  获取appIcon
 *
 *  @return 得到的iconImage
 */
- (UIImage*)appIcon {
    UIImage*appIcon = [[UIImage alloc] initWithContentsOfFile:[self appIconPath]] ;
    return appIcon;
}
@end
