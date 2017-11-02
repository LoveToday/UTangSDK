//
//  UTangSDK.h
//  UTangSDK
//
//  Created by csj on 2017/5/27.
//  Copyright © 2017年 csj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "BLEDataHandler.h"
#import "TaskManager.h"
#import "BSDataObj.h"

/**
 *  搜素到的蓝牙列表以及信号强度
 **/
typedef void(^BLEDeviceHandler)(CBPeripheral *deviceName, NSNumber *rssi);

@interface UTangSDK : NSObject

@property (copy   , nonatomic) BLEDeviceHandler     bleHandler;
- (void)setBleHandler:(BLEDeviceHandler)bleHandler;

- (BOOL)initWithUTang:(NSString *)utKey;

/**
 *  蓝牙是否处于可用状态(powered on and available to use)
 **/
- (void)hy_bleUsable:(BLEUsable)usableHandler;

/**
 *  搜索蓝牙设备
 **/
- (void)hy_searchBleDevice;

/**
 *  停止搜素设备
 **/
- (void)hy_stopScan;

/**
 *  连接蓝牙设备
 **/
- (void)hy_connectBleDevice:(CBPeripheral *)peripheral;

/**
 *  蓝牙连接成功，开启数据处理流程
 **/
- (void)hy_startTheDataFlow;

/**
 *  断开蓝牙设备
 **/
- (void)hy_didDisConnectBLEDevice;

/**
 *  获取蓝牙连接状态
 **/
- (void)hy_connectionStatus:(BLEConnectStates)isConnect;

/**
 *  获取数据步骤以及该步骤的状态
 **/
- (void)hy_dataStepsAndStatus:(DataStepStatus)states;

/**
 *  获取电流数据量
 **/
- (void)hy_getCurrentDataCount:(GetCurrentDataCount)countHandler;

/**
 *  获取当前连接的传感器ID
 **/
- (NSString *)hy_getSensorid;

/**
 *  获取所有的(sensorId:传感器id, launcherId:发射器id)
 **/
- (NSMutableArray *)getAllSensorId;

/**
 获取最新一条血糖数据
 sensorId:传感器ID
 **/
- (BSDataObj *)hy_firstSugarData:(NSString *)sensorId;

/**
 *  获取所有的血糖数据
 *  sensorId:传感器ID
 **/
- (NSMutableArray *)hy_getSugarAllData:(NSString *)sensorId;

/**
 *  获取参比列表
 **/
- (NSMutableArray *)hy_refDataList:(NSString *)sensorId;

/**
 *  获取可以输入参比的时间范围
 **/
- (NSInteger)hy_referenceRangeStart:(NSString *)sensorId;
- (NSInteger)hy_referenceRangeEnd:(NSString *)sensorId;

/**
 *  修改参比  refArray的JSON格式 [{"refValue":"参比值","timeValue":"精确到秒的时间戳"},
 *                              {"refValue":"参比值","timeValue":"精确到秒的时间戳"}]
 **/
- (void)hy_refManage:(NSMutableArray *)refArray sensorId:(NSString *)sensorId;

/**
 *  工作状态的告警
 **/
- (void)hy_alarmType:(DataAlarmType)alarm;

/**
 *  高低血糖的告警
 **/
- (void)hy_sugarAlarm:(SugarAlarmType)sugar;

+ (instancetype)hy_bleManager;

@end
