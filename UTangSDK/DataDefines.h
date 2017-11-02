//
//  DataDefines.h
//  BleManager
//
//  Created by csj on 2016/11/24.
//  Copyright © 2016年 csj. All rights reserved.
//

#ifndef DataDefines_h
#define DataDefines_h


/**
 *  所有数据处理过程中的状态
 **/
typedef NS_ENUM(NSUInteger, DataStates) {
    DataStateExecution = 0,
    DataStateSuccess,
    DataStateFailure,
    DataStateTimeout
};

/**
 *  所有数据任务处理类型
 **/
typedef NS_ENUM(NSUInteger, DataTaskType) {
    DataTaskBleConnect = 0,
    DataTaskRequestVersion,
    DataTaskBindDevice,
    DataTaskTimeSynchronization,
    DataTaskRequestLog,
    DataTaskRequestLogFinish,
    DataTaskSensorInitState,
    DataTaskRequestStates,
    DataTaskRequestData,
    DataTaskRequestDataFinish,
    DataTaskRequestDataCheck,
    DataTaskRequestReference,
    DataTaskInputReference,
    DataTaskCalculateBloodGlucoseValue,
    DataTaskRequestBatteryTime,
    DataTaskProcessingComplete//数据处理完成
};

/**
 *  状态的告警
 **/
typedef NS_ENUM(NSUInteger, AlarmType) {
    AlarmTypeMonitorEnd = 0,
    AlarmTypeCurrentTooLarge,
    AlarmTypeCurrentTooSmall,
    AlarmTypeLowPower,
    AlarmTypeSensorHasExpired,
    AlarmTypeLogStoreIsFull,
    AlarmTypeMemoryFailure,
};

/**
 *  高低血糖的告警
 **/
typedef NS_ENUM(NSUInteger, SugarType) {
    SugarAlarmHightSugar = 0,
    SugarAlarmLowSugar,
    SugarAlarmTwoHourSugar
}; 

#endif /* DataDefines_h */
