//
//  ClassifyBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ClassifyBean : NSObject
@property (copy,nonatomic) NSString * ID;
@property (copy,nonatomic) NSString * IconURL;
@property (copy,nonatomic) NSString * Name;
// pageIndex 默认0、分类 1、猜你喜欢 2、热销商品
@property int pageIndex ;
//private ArrayList<ProductSet> ProductSet = new ArrayList<ProductSet>();
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
