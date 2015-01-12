//
//  ProductsSKUSet.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProductsSKUSet : NSObject
@property double CostPrice;

@property (copy,nonatomic) NSString * CreatePerson;

@property double CreateTime;

@property double DeleteTime;

@property (copy,nonatomic) NSString * DeleteUser;

@property (copy,nonatomic) NSString * ID;

@property (copy,nonatomic) NSString * IsDelete;

@property double MarketPrice;

@property (copy,nonatomic) NSString * Name;

@property double PointsPrice;

@property double ProductsID;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * SMSTemplate;

@property double Stock;

@property (copy,nonatomic) NSString * UpdatePerson;

@property double UpdateTime;

@property double Discount;


//private ArrayList<com.taihe.ubenefits.pages.api.SpecificationValSetOfSku> SpecificationValSetOfSku = new ArrayList<com.taihe.ubenefits.pages.api.SpecificationValSetOfSku>();
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
