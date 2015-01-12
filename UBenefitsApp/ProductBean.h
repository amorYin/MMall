//
//  ProductBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProductBean : NSObject
@property (copy,nonatomic) NSString * ID;

//private ArrayList<ProductSet> ProductSet = new ArrayList<ProductSet>();
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
