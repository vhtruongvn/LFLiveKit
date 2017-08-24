//
//  LFLiveDebug.m
//  LaiFeng
//
//  Created by LaiFeng on 16/5/20.
//  Copyright © 2016年 LaiFeng All rights reserved.
//

#import "LFLiveDebug.h"

@implementation LFLiveDebug

- (NSString *)description {
    return [NSString stringWithFormat:@"Frames lost:%ld Total frames:%ld Last audio capture:%ld Last video capture:%ld Not sent:%ld Total traffic:%0.f", (long)_dropFrame, (long)_totalFrame, (long)_currentCapturedAudioCount, (long)_currentCapturedVideoCount, (long)_unSendCount, _dataFlow];
}


@end
