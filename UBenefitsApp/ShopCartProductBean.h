//
//  ShopCartProductBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ShopCartProductBean : NSObject
@property double ProductsID;

@property (copy,nonatomic) NSString * UpdatePerson;

@property (copy,nonatomic) NSString * CreatePerson;

@property (copy,nonatomic) NSString * IsDelete;

@property double UpdateTime;

@property (copy,nonatomic) NSString * UserID;

@property int ProductsNumber;

@property int Stock;

@property double CreateCost;

@property double CreatePrice;

@property (copy,nonatomic) NSString * ProductsSKUID;

@property (copy,nonatomic) NSString * ProductsSKUName;

@property (copy,nonatomic) NSString * RepresentImgUrl;

@property double DeleteTime;

@property (copy,nonatomic) NSString * State;

@property double CreateTime;

@property (copy,nonatomic) NSString * OrderCode;

@property double PointsPrice;

@property (copy,nonatomic) NSString * SKURemark;

@property (copy,nonatomic) NSString * ShoppingCartID;

@property (copy,nonatomic) NSString * ProductsName;

@property double SumPrice;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * ProductNo;

@property BOOL isEditNum;

//未编辑状态下
@property BOOL issSelectitem;
//编辑状态
@property BOOL isEditSelectitem;


@property int poductNum;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
