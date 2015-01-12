//
//  PhoneRechargeInfoBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PhoneRechargeInfoBean : NSObject
@property (copy,nonatomic) NSString * RetPara;

@property (copy,nonatomic) NSString * Amount;

@property (copy,nonatomic) NSString * MobileNum;

@property (copy,nonatomic) NSString * RetResult;

@property (copy,nonatomic) NSString * RetResultText;

@property (copy,nonatomic) NSString * ZtOrderNo;

@property (copy,nonatomic) NSString * UpdatePerson;

@property (copy,nonatomic) NSString * CompanyId;

@property (copy,nonatomic) NSString * Cpid;

@property (copy,nonatomic) NSString * CreatePerson;

@property (copy,nonatomic) NSString * Operator;

@property (copy,nonatomic) NSString * UserId;

@property (copy,nonatomic) NSString * Province;

@property double CreateDate;

@property (copy,nonatomic) NSString * CpOrderNo;

@property (copy,nonatomic) NSString * TradeType;

@property (copy,nonatomic) NSString * CreateTime;

@property (copy,nonatomic) NSString * Sign;

@property (copy,nonatomic) NSString * Id;

@property double UpdateDate;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * TuiFei;

@property (copy,nonatomic) NSString * KouFei;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
