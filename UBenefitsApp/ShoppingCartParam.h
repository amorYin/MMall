//
//  ShoppingCartParam.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ShoppingCartParam : NSObject
@property (copy,nonatomic) NSString * shoppingcartid;

@property BOOL isdelete;

@property (copy,nonatomic) NSString * count;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
