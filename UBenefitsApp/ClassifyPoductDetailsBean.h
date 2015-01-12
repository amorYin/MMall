//
//  ClassifyPoductDetailsBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ClassifyPoductDetailsBean : NSObject
@property (copy,nonatomic) NSString * poductDetailsUrl; //
@property (copy,nonatomic) NSString * poductDetailsName;
@property (copy,nonatomic) NSString * poductDetailsSubName;
@property (copy,nonatomic) NSString * poductDetailsPrice;
@property (copy,nonatomic) NSString * poductDetailsCostPrice;

@property BOOL isEditNum;
@property BOOL issSelectitem;
@property int poductNum;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
