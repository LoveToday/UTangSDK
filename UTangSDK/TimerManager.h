//
//  TimerManager.h
//  BleManager
//
//  Created by csj on 2016/11/24.
//  Copyright © 2016年 csj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataDefines.h"

@interface TimerManager : NSObject

/**
 *  初始化 1、数据步骤  2、超时的时长  3、超时的次数
 **/
+ (instancetype)timeWithTimeout:(DataTaskType)taskType timeout:(NSInteger) timeout count:(NSInteger)timeoutCount;

/**
 *  启动定时器
 **/
- (void)startTimer;

/**
 *  暂停定时器
 **/
- (void)stopTimer;

/**
 *  结束定时器
 **/
- (void)endTimer;

@end
