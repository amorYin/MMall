//
//  HomeMailBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HomeMailBean : NSObject
@property (copy,nonatomic) NSString * name; //名字
@property int  resid;//图标
@property (copy,nonatomic) NSString * headUrl;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
