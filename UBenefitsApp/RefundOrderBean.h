//
//  RefundOrderBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RefundOrderBean : NSObject
@property (copy,nonatomic) NSString * ExpressNo;

@property (copy,nonatomic) NSString * GoodsState;

@property double RefundOnlinePay;

//private OrderProduct OrderProducts ;

@property double RefundID;

@property (copy,nonatomic) NSString * UpdatePerson;

@property double OrderID;

@property (copy,nonatomic) NSString * OrdersCode;

@property double OrdersProductsID;

@property double ReturnGoodsTime;

@property (copy,nonatomic) NSString * UserID;

@property double ApplyRefundTime;

@property (copy,nonatomic) NSString * ReturnPayAdminID;

@property double ReturnPayTime;

@property (copy,nonatomic) NSString * ExpressName;

@property double CheckTime;

@property (copy,nonatomic) NSString * RefundType;

@property (copy,nonatomic) NSString * ProductNo;

@property double RefundTime;

@property double ProductsID;

@property (copy,nonatomic) NSString * ReturnPayDiffeCause;

@property (copy,nonatomic) NSString * CreatePerson;

@property (copy,nonatomic) NSString * RefundAdminID;

@property double UpdateTime;

@property double RefundPointsPay;

@property (copy,nonatomic) NSString * CheckContent;

@property (copy,nonatomic) NSString * RefundRemark;

@property (copy,nonatomic) NSString * ReturnPayRefundCause;

@property double ExpressFee;

@property int UbenefitsState;

@property (copy,nonatomic) NSString * ExpressCode;

@property (copy,nonatomic) NSString * RefundsReason;

@property (copy,nonatomic) NSString * State;

@property (copy,nonatomic) NSString * CheckerID;

@property double CreateTime;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * RefundOnlinePayStyle;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
