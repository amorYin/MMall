//
//  SpecificationValSetOfSku.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SpecificationValSetOfSku : NSObject
@property (copy,nonatomic) NSString * Name;

@property double Sort;

@property (copy,nonatomic) NSString * Value;

@property double ProductsID;

@property (copy,nonatomic) NSString * UpdatePerson;

@property (copy,nonatomic) NSString * CreatePerson;

@property double CreateTime;

@property (copy,nonatomic) NSString * ID;

@property double UpdateTime;

@property (copy,nonatomic) NSString * Remark;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
