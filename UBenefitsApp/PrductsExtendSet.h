//
//  PrductsExtendSet.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PrductsExtendSet : NSObject
@property (copy,nonatomic) NSString * Content;

@property (copy,nonatomic) NSString * CreatePerson;

@property double CreateTime;

@property (copy,nonatomic) NSString * ID;

@property (copy,nonatomic) NSString * Name;

@property double ProductsID;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * Type;

@property (copy,nonatomic) NSString * UpdatePerson;

@property double UpdateTime;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
