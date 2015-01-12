//
//  MobileInfo.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MobileInfo : NSObject
@property (copy,nonatomic) NSString * areaVid;

@property (copy,nonatomic) NSString * carrier;

@property (copy,nonatomic) NSString * catName;

@property (copy,nonatomic) NSString * ispVid;

@property (copy,nonatomic) NSString * mts;

@property (copy,nonatomic) NSString * province;

@property (copy,nonatomic) NSString * telString;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
