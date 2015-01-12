//
//  OrderProduct.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrderProduct : NSObject

@property double SubTotalPay;

@property double ProductsCost;

@property (copy,nonatomic) NSString * OrderDetailState;

@property double ProductsID;

@property (copy,nonatomic) NSString * UpdatePerson;

@property (copy,nonatomic) NSString * CreatePerson;

@property double OrdersProductsID;

@property double UpdateTime;

@property double ProductsNumber;

@property (copy,nonatomic) NSString * ProductsSKUID;

@property (copy,nonatomic) NSString * ProductsSKUName;

@property double CreateTime;

@property double ID;

@property (copy,nonatomic) NSString * SKURemark;

@property (copy,nonatomic) NSString * ProductsName;

@property double ProductsPrice;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * OutStockRemark;

@property (copy,nonatomic) NSString * ProductNo;

@property (copy,nonatomic) NSString * RepresentImgUrl;

//@property (copy,nonatomic) NSString * imgUrl = "http://img13.360buyimg.com/n7/g13/M09/0B/05/rBEhVFIxaGkIAAAAAAGEV0SZGCMAADEsQOGrOkAAYRv640.jpg!q70.jpg";

@property (copy,nonatomic) NSString * ProductType;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
