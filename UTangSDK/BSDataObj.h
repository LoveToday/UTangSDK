//
//  BSDataObj.h
//  UT_New_SDK_Demo
//
//  Created by csj on 2017/5/27.
//  Copyright © 2017年 csj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/********************* 针头数据表BSDataObj*********************************/
#define kBSTable                    @"BSTable"

#define kCurrentIndex               @"CurrentIndex"
#define kCurrentValue               @"CurrentValue"
#define kReferenceValue             @"ReferenceValue"
#define kBSValue                    @"BSValue" 
#define kUploaded                   @"Uploaded"

@interface BSDataObj : NSObject

@property (nonatomic,assign)    NSInteger           onlyID;         //自增ID
@property (nonatomic,assign)    NSInteger           userID;         //用户ID
@property (nonatomic,assign)    BOOL                uploaded;       //是否上传

@property (nonatomic,copy)      NSString            *sensorID;      //传感器ID
@property (nonatomic,copy)      NSString            *devID;         //设备ID
@property (nonatomic,assign)    NSInteger           currentIndex;   //电流序号
@property (nonatomic,assign)    NSInteger           currentValue;   //收到的电流
@property (nonatomic,assign)    CGFloat             referenceValue; //参比值
@property (nonatomic,assign)    CGFloat             BSValue;        //归一化后的血糖值 
@property (nonatomic,assign)    NSInteger           timeIndex;      //每个数据对应的时间戳

@end
