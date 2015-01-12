//
//  BrandInfo.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BrandInfo : NSObject
@property (copy,nonatomic) NSString * CreatePerson;

@property double CreateTime;

@property (copy,nonatomic) NSString * Description;

@property (copy,nonatomic) NSString * ID;

@property (copy,nonatomic) NSString * LogoUrl;

@property (copy,nonatomic) NSString * Name;

@property (copy,nonatomic) NSString * Remark;

@property double Sort;

@property (copy,nonatomic) NSString * State;

@property (copy,nonatomic) NSString * UpdatePerson;

@property double UpdateTime;

@property (copy,nonatomic) NSString * WebUrl;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
