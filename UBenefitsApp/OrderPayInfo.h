//
//  OrderPayInfo.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrderPayInfo : NSObject
@property BOOL OnlineSwitch;

@property double UserPoint;

@property double UnPayPoint;

@property double FreezingPoints;

@property double OnlinePay;

@property double PointPayAlready;

//private com.taihe.ubenefits.pages.api.OrdersPay Orders;

@property double TotalPay;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
