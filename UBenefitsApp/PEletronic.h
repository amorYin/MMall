//
//  PEletronic.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PEletronic : NSObject

@property (copy,nonatomic) NSString * ProductPEID;

@property (copy,nonatomic) NSString * UpdatePerson;

@property double OrderID;

@property (copy,nonatomic) NSString * BatchCode;

@property double OrdersProductsID;

@property (copy,nonatomic) NSString * UseState;

@property double PEBeginTime;

@property double SaleTime;

@property (copy,nonatomic) NSString * SaleState;

@property (copy,nonatomic) NSString * IsRebuild;

@property double SendCount;

@property double ProductsID;

@property (copy,nonatomic) NSString * CreatePerson;

@property double UpdateTime;

@property double LastSendTime;

@property (copy,nonatomic) NSString * ProductsSKUID;

@property (copy,nonatomic) NSString * PECode;

@property double CreateTime;

@property (copy,nonatomic) NSString * IsBatch;

@property double PEEndTime;

@property double PostTime;

@property double FirstSendTime;

@property (copy,nonatomic) NSString * FromPEID;

@property (copy,nonatomic) NSString * PEPassword;

@property (copy,nonatomic) NSString * ReceiveMobile;

@property (copy,nonatomic) NSString * Remark;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
