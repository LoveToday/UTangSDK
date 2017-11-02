//
//  TaskManager.h
//  BleManager
//
//  Created by csj on 2016/11/24.
//  Copyright © 2016年 csj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataDefines.h"
#import "TimerManager.h"

/**
 *  回调步骤以及该步骤的状态回去
 **/
typedef void(^DataStepStatus)(DataTaskType taskType, DataStates dataState);

/**
 *  回调日志是否获取完
 **/
typedef void(^DataLogIsFinish)(BOOL isFinish);

@interface TaskManager : NSObject

@property (nonatomic, strong) TimerManager  *connectTimer;
@property (nonatomic, strong) TimerManager  *versionTimer;
@property (nonatomic, strong) TimerManager  *bindTimer;
@property (nonatomic, strong) TimerManager  *snycTimer;
@property (nonatomic, strong) TimerManager  *logTimer;
@property (nonatomic, strong) TimerManager  *finishTimer;
@property (nonatomic, strong) TimerManager  *statesTimer;
@property (nonatomic, strong) TimerManager  *dataTimer;
@property (nonatomic, strong) TimerManager  *dataFinishTimer;
@property (nonatomic, strong) TimerManager  *dataCheckTimer;
@property (nonatomic, strong) TimerManager  *refTimer;
@property (nonatomic, strong) TimerManager  *inputRefTimer;
@property (nonatomic, strong) TimerManager  *batteryTimer;

/**
 *  任务处理  1、步骤类型  2、数据状态
 **/
- (void)handlerWithTask:(DataTaskType)taskType status:(DataStates)dataStates;

/**
 *  电流总个数
 **/
@property (nonatomic, assign) NSInteger         currentCount;

/**
 *  传感器id
 **/
@property (nonatomic,   copy) NSString          *sensorId;

/**
 *  回调方法
 **/
@property (nonatomic,   copy) DataStepStatus    stepHandler;
@property (nonatomic,   copy) DataLogIsFinish   logHandler;
 
- (void)setStepHandler:(DataStepStatus)stepHandler;
- (void)setLogHandler:(DataLogIsFinish)logHandler;

+ (instancetype)shareTask;

@end
