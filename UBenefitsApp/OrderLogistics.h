//
//  OrderLogistics.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrderLogistics : NSObject

@property (copy,nonatomic) NSString * ExpressNo;

@property BOOL IsCompanyAddress;

@property (copy,nonatomic) NSString * UpdatePerson;

@property double OrderID;

@property (copy,nonatomic) NSString * CreatePerson;

@property double UpdateTime;

@property (copy,nonatomic) NSString * Province;

@property (copy,nonatomic) NSString * ZipCode;

@property (copy,nonatomic) NSString * City;

@property (copy,nonatomic) NSString * BuyerRemark;

@property (copy,nonatomic) NSString * ExpModifyRemark;

@property (copy,nonatomic) NSString * ExpressCode;

@property (copy,nonatomic) NSString * County;

@property (copy,nonatomic) NSString * ExpressName;

@property double DeliveryTime;

@property (copy,nonatomic) NSString * Receiver;

@property (copy,nonatomic) NSString * Address;

@property double CreateTime;

@property (copy,nonatomic) NSString * Mobile;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * ReceiverTel;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
