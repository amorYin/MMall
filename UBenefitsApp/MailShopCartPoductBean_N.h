//
//  MailShopCartPoductBean_N.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MailShopCartPoductBean_N : NSObject
@property int mcartPoductNum;
@property double mcartPoductAllPrice;

//private ArrayList<ClassifyPoductDetailsBean> mallShopCartItemBean ;

//private ArrayList<ClassifyPoductDetailsBean> noSelectmallShopCartItemBean = new ArrayList<ClassifyPoductDetailsBean>();

//private ArrayList<ClassifyPoductDetailsBean> SelectmallShopCartItemBean = new ArrayList<ClassifyPoductDetailsBean>();
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
