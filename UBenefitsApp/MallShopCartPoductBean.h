//
//  MallShopCartPoductBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MallShopCartPoductBean : NSObject

@property int mcartPoductNum;
@property int mdeleteCartPoductNum;
@property double mcartPoductAllPrice;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
