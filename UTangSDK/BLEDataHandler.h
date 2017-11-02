//
//  BLEDataHandler.h
//  BleManager
//
//  Created by csj on 2016/11/17.
//  Copyright © 2016年 csj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BLEManager.h"
#import "DataDefines.h"
#import <Algorithm/Algorithm.h>

extern AlgorithmCGMalgorithm *AlgoValue;

/**
 *  返回蓝牙的可用状态
 **/
typedef void(^BLEUsable)(BOOL isUsable);

/**
 *  返回蓝牙的连接状态
 **/
typedef void(^BLEConnectStates)(BOOL isConnect);

/**
 *  获取电流数据的数量
 **/
typedef void(^GetCurrentDataCount)();

/**
 *  返回搜素到的蓝牙设备名称以及信号强度
 **/
typedef void(^BLEDeviceName)(CBPeripheral *deviceName ,NSNumber *rssi);

/**
 *  返回工作状态的告警类型
 **/
typedef void(^DataAlarmType)(AlarmType typeBlock);

/**
 * 返回高低血糖的告警
 **/
typedef void(^SugarAlarmType)(SugarType typeBlock);


@interface BLEDataHandler : NSObject<BLEDelegate>
 

/*蓝牙数据处理类*/
@property (strong, nonatomic) BLEManager            *bleManager;
@property (copy  , nonatomic) BLEUsable             usableHandler;
@property (copy  , nonatomic) BLEDeviceName         deviceHandler;
@property (copy  , nonatomic) BLEConnectStates      statesHandler;
@property (copy  , nonatomic) DataAlarmType         alarmHandler;
@property (copy  , nonatomic) SugarAlarmType        sugarHandler;
@property (copy  , nonatomic) GetCurrentDataCount   countHandler;


- (void)setUsableHandler:(BLEUsable)usableHandler;
- (void)setDeviceHandler:(BLEDeviceName)deviceHandler;
- (void)setStatesHandler:(BLEConnectStates)statesHandler;
- (void)setAlarmHandler:(DataAlarmType)alarmHandler;
- (void)setSugarHandler:(SugarAlarmType)sugarHandler;
- (void)setCountHandler:(GetCurrentDataCount)countHandler;

+ (instancetype)shareHandle;

@end
