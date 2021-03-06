//
//  UtilsMacro.h
//  PhoneSearch
//
//  Created by 王隆帅 on 15/5/20.
//  Copyright (c) 2015年 王隆帅. All rights reserved.
//

/**
 *  本类放一些方便使用的宏定义
 */

// ios7之上的系统
#define IS_IOS7 ([[[UIDevice currentDevice] systemVersion] floatValue] >=7.0 ? YES : NO)

// 获取屏幕 宽度、高度 bounds就是屏幕的全部区域
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

#define IS_IPHONE4 [UIScreen mainScreen].bounds.size.height == 480

// 获取当前屏幕的高度 applicationFrame就是app显示的区域，不包含状态栏
#define kMainScreenHeight ([UIScreen mainScreen].applicationFrame.size.height)
#define kMainScreenWidth  ([UIScreen mainScreen].applicationFrame.size.width)

// 判断字段时候为空的情况
#define IF_NULL_TO_STRING(x) ([(x) isEqual:[NSNull null]]||(x)==nil)? @"":TEXT_STRING(x)
// 转换为字符串
#define TEXT_STRING(x) [NSString stringWithFormat:@"%@",x]

// rgb颜色转换（16进制->10进制）
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
// 设置颜色RGB
#define COLOR(R, G, B, A) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A]

//获取系统版本
#define IOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
#define CurrentSystemVersion [[UIDevice currentDevice] systemVersion]

//定义UIImage对象
#define IMAGE(A) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:A ofType:nil]]
#define ImageNamed(name) [UIImage imageNamed:name]

// 下拉 有更多数据
#define LS_HEADER_REFRESH_HASMORE_DATA 1
// 下拉 无更多数据
#define LS_HEADER_REFRESH_NOMORE_DATA 2
// 上拉 有更多数据
#define LS_FOOTER_REFRESH_HASMORE_DATA 3
// 上拉 无更多数据
#define LS_FOOTER_REFRESH_NOMORE_DATA 4
// 刷新出错
#define LS_REFRESH_ERROR 5

// 每次请求列表 数据量
#define LS_REQUEST_LIST_COUNT @"10"
#define LS_REQUEST_LIST_NUM_COUNT 10

// 个人信息
#define IS_LOGIN (((NSString *)SEEKPLISTTHING(YC_USER_ID)).length > 0)

#define YC_USER_ID @"user_id"
#define YC_USER_NAME @"user_name"
#define YC_USER_TOKEN @"user_token"

#define YC_USER_ISONE @"one"//第一次登陆

#define YD_HISTORY_STORAGE @"yd_history_storage"

//主题色#21C1F7
#define MAINCOLOR UIColorFromRGB(0x21C1F7)

#define SUBCOLOR UIColorFromRGB(0xFF4C4C)

#define GX_BGCOLOR COLOR(234, 234, 234, 1)

#define MAIN_TEXT_COLOR COLOR(109, 109, 109, 1)

#define MAIN_LINE_COLOR COLOR(135, 135, 135, 1)

#define MAIN_LIGHT_LINE_COLOR COLOR(174, 174, 174, 1)

#define MAIN_BLACK_TEXT_COLOR COLOR(38, 38, 38, 1)

#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;

// APP颜色
#define ZS_BLUE_COLOR [UIColor colorWithR:32 G:150 B:255 alpha:1.0]














