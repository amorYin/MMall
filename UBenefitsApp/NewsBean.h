//
//  NewsBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NewsBean : NSObject
@property (copy,nonatomic) NSString * UpdatePerson;

@property (copy,nonatomic) NSString * CreatePerson;

@property double CreateTime;

@property (copy,nonatomic) NSString * ID;

@property double UpdateTime;

@property (copy,nonatomic) NSString * Content;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * AreaDescription;

@property (copy,nonatomic) NSString * Title;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
