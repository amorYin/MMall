//
//  OrdersPay.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrdersPay : NSObject
@property (copy,nonatomic) NSString * OrderState;

//private Object Products;

@property double CloseTime;

@property (copy,nonatomic) NSString * UpdatePerson;

@property double FreezingPoints;

@property (copy,nonatomic) NSString * CloseReason;

@property (copy,nonatomic) NSString * UserID;

@property double OldOrderID;

//private Object OrderLogistics;

@property double TotalPay;

@property double PaymentTime;

@property double DeliveryTime;

@property (copy,nonatomic) NSString * ProductType;

@property double OnlinePay;

@property (copy,nonatomic) NSString * ParentCode;

@property double ID;

@property (copy,nonatomic) NSString * OnlinePayStyle;

@property (copy,nonatomic) NSString * DeleteUser;

@property double DesignatedPoint;

@property (copy,nonatomic) NSString * VendorsID;

@property double ShoppingRates;

@property (copy,nonatomic) NSString * DesignatedPointCode;

@property (copy,nonatomic) NSString * OutStockRemark;

@property (copy,nonatomic) NSString * CreatePerson;

@property (copy,nonatomic) NSString * DeleteRemark;

@property double PointsPay;

@property double UpdateTime;

@property (copy,nonatomic) NSString * OutStockUser;

@property (copy,nonatomic) NSString * CloseType;

@property double DeleteTime;

@property (copy,nonatomic) NSString * DeliveryRemark;

@property double CreateTime;

@property (copy,nonatomic) NSString * IsBatch;

@property (copy,nonatomic) NSString * OrderCode;

@property (copy,nonatomic) NSString * PayStyle;

@property double PostTime;

@property double ConfirmTime;

@property (copy,nonatomic) NSString * DeliveryUser;

@property (copy,nonatomic) NSString * ReceiveMobile;

@property (copy,nonatomic) NSString * Remark;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
