//
//  LFLiveStreamInfo.h
//  LFLiveKit
//
//  Created by LaiFeng on 16/5/20.
//  Copyright © 2016年 LaiFeng All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LFLiveAudioConfiguration.h"
#import "LFLiveVideoConfiguration.h"



/// 流状态
typedef NS_ENUM (NSUInteger, LFLiveState){
    // Prepare for
    LFLiveReady = 0,
    // connecting
    LFLivePending = 1,
    // connected
    LFLiveStart = 2,
    // Has been disconnected
    LFLiveStop = 3,
    // Connection error
    LFLiveError = 4,
    // Is refreshing
    LFLiveRefresh = 5
};

typedef NS_ENUM (NSUInteger, LFLiveSocketErrorCode) {
    LFLiveSocketError_PreView = 201,              // Preview failed
    LFLiveSocketError_GetStreamInfo = 202,        // Get streaming media information failed
    LFLiveSocketError_ConnectSocket = 203,        // Connection socket failed
    LFLiveSocketError_Verification = 204,         // Authentication server failed
    LFLiveSocketError_ReConnectTimeOut = 205      // Reconnect server timeout
};

@interface LFLiveStreamInfo : NSObject

@property (nonatomic, copy) NSString *streamId;

#pragma mark -- FLV
@property (nonatomic, copy) NSString *host;
@property (nonatomic, assign) NSInteger port;
#pragma mark -- RTMP
@property (nonatomic, copy) NSString *url; // Upload address (RTMP with just fine)
// Audio configuration
@property (nonatomic, strong) LFLiveAudioConfiguration *audioConfiguration;
// Video configuration
@property (nonatomic, strong) LFLiveVideoConfiguration *videoConfiguration;

@end
