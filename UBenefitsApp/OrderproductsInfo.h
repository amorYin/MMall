//
//  OrderproductsInfo.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrderproductsInfo : NSObject
@property (copy,nonatomic) NSString * UpdatePerson;

@property (copy,nonatomic) NSString * UserID;

@property int ProductsNumber;

@property int  Stock;

@property (copy,nonatomic) NSString * ProductsSKUName;

@property (copy,nonatomic) NSString * RepresentImgUrl;

@property (copy,nonatomic) NSString * ProductType;

@property (copy,nonatomic) NSString * VendorsID;

@property (copy,nonatomic) NSString * ProductsName;

@property (copy,nonatomic) NSString * ProductNo;

@property int ProductsID;

@property (copy,nonatomic) NSString * CreatePerson;

@property (copy,nonatomic) NSString * IsDelete;

@property double UpdateTime;

@property double CreateCost;

@property double CreatePrice;

@property (copy,nonatomic) NSString * ProductsSKUID;

@property double DeleteTime;

@property (copy,nonatomic) NSString * State;

@property double CreateTime;

@property (copy,nonatomic) NSString * OrderCode;

@property double PointsPrice;

@property (copy,nonatomic) NSString * SKURemark;

@property (copy,nonatomic) NSString * ShoppingCartID;

@property double SumPrice;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * Telephone;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
