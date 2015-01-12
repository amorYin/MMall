//
//  MallClassifyBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MallClassifyBean : NSObject
@property int CateLevel;

@property (copy,nonatomic) NSString * CreatePerson;

@property double CreateTime;

@property (copy,nonatomic) NSString * Description; //名称

@property (copy,nonatomic) NSString * ID;//分类id

@property (copy,nonatomic) NSString * Name;

@property (copy,nonatomic) NSString * ParentID;

@property int ProductsCount;

@property (copy,nonatomic) NSString * Remark;

@property int Sort;

@property (copy,nonatomic) NSString * State;

@property (copy,nonatomic) NSString * UpdatePerson;

@property (copy,nonatomic) NSString * UpdateTime;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
