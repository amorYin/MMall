//
//  SubmitOrderBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SubmitOrderBean : NSObject
@property (copy,nonatomic) NSString * Telephone;

@property BOOL HaveGoods;

@property double ProductPoints;

@property double TotalPoints;

@property (copy,nonatomic) NSString * UserID;

@property double ShoppingRates;

//private ArrayList<com.taihe.ubenefits.pages.api.OrderProductsInfo> ProductsInfo = new ArrayList<com.taihe.ubenefits.pages.api.OrderProductsInfo>();

@property BOOL HavePE;

@property int ProductCount;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
