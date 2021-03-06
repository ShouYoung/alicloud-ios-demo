//
//  AlicloudReachabilityManager.h
//
//  Created by 亿刀 on 14-1-9.
//  Edited by junmo on 15-5-16
//  Copyright (c) 2014年 Twitter. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ALICLOUD_NETWOEK_STATUS_NOTIFY @"AlicloudNetworkStatusChangeNotify"

typedef enum {
    AlicloudNotReachable = 0,
    AlicloudReachableViaWiFi,
    AlicloudReachableVia2G,
    AlicloudReachableVia3G,
    AlicloudReachableVia4G
} AlicloudNetworkStatus;

@interface AlicloudReachabilityManager : NSObject

+ (AlicloudReachabilityManager *)shareInstance;

/**
 *	@brief	返回当前网络状态(同步调用，可能会阻塞调用线程)
 *
 *	@return
 */
- (AlicloudNetworkStatus)currentNetworkStatus;

/**
 *	@brief	返回之前网络状态
 *
 *	@return
 */
- (AlicloudNetworkStatus)preNetworkStatus;

/**
 *	@brief	检测网络是否连通(同步调用，阻塞调用线程)
 *
 *	@return
 */
- (BOOL)checkInternetConnection;

@end
