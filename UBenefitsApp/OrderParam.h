//
//  OrderParam.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrderParam : NSObject
@property (copy,nonatomic) NSString * shoppingCartIDs;

@property (copy,nonatomic) NSString * addressID;

@property (copy,nonatomic) NSString * receiveMobile;

@property (copy,nonatomic) NSString * buyerRemark;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
