//
//  LFLiveDebug.h
//  LaiFeng
//
//  Created by LaiFeng on 16/5/20.
//  Copyright © 2016年 LaiFeng All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LFLiveDebug : NSObject

@property (nonatomic, copy) NSString *streamId;                         // Stream id
@property (nonatomic, copy) NSString *uploadUrl;                        // Stream address
@property (nonatomic, assign) CGSize videoSize;                         // Upload resolution
@property (nonatomic, assign) BOOL isRtmp;                              // Upload mode (TCP or RTMP)

@property (nonatomic, assign) CGFloat elapsedMilli;                     // The time unit from the last statistics ms
@property (nonatomic, assign) CGFloat timeStamp;                        // Current timestamp, thus calculating the data within 1s
@property (nonatomic, assign) CGFloat dataFlow;                         // Total traffic
@property (nonatomic, assign) CGFloat bandwidth;                        // 1s total bandwidth
@property (nonatomic, assign) CGFloat currentBandwidth;                 // Last bandwidth

@property (nonatomic, assign) NSInteger dropFrame;                      // Number of lost frames
@property (nonatomic, assign) NSInteger totalFrame;                     // Total number of frames

@property (nonatomic, assign) NSInteger capturedAudioCount;             // 1s within the number of audio capture
@property (nonatomic, assign) NSInteger capturedVideoCount;             // 1s within the number of video capture
@property (nonatomic, assign) NSInteger currentCapturedAudioCount;      // Number of last audio captures
@property (nonatomic, assign) NSInteger currentCapturedVideoCount;      // Number of last video captures

@property (nonatomic, assign) NSInteger unSendCount;                    // No number of transmissions (on behalf of the current buffer waiting to send)

@end
