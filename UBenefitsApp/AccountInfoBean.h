//
//  AccountInfoBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>
//单位账号信息
@interface AccountInfoBean : NSObject
@property (copy,nonatomic) NSString * Abstract;

@property (copy,nonatomic) NSString * BatchCode;

@property (copy,nonatomic) NSString * BenefitType;

@property (copy,nonatomic) NSString * CreatePerson;

@property double CreateTime;

@property (copy,nonatomic) NSString * FromUserID;

@property (copy,nonatomic) NSString * IsBatch;

@property (copy,nonatomic) NSString * OrderCode;

@property double PayMoney;

@property double PayPoints;

@property double PostTime;

@property double ReceivePoints;

@property (copy,nonatomic) NSString * RefundID;

@property double RemainingPoints;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * Sign;

@property (copy,nonatomic) NSString * Type;

@property (copy,nonatomic) NSString * UpdatePerson;

@property double UpdateTime;

@property (copy,nonatomic) NSString * UserID;

@property (copy,nonatomic) NSString * UserRPID;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
// copy成员变量
//- (void)copyContentFromObject:(AccountInfoBean *)object;
@end
