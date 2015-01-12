//
//  ProductSet.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProductSet : NSObject
@property (copy,nonatomic) NSString * Name;

@property double MarketPrice;

@property (copy,nonatomic) NSString * ADDescription;

@property BOOL IsSysRecommend;

@property (copy,nonatomic) NSString * Type;

@property double BeginSellTime;

@property double RowNumber;

@property double SalesVolumn;

@property (copy,nonatomic) NSString * ID;

@property double PointsPrice;

@property double Discount;

@property (copy,nonatomic) NSString * ImgURL;

@property (copy,nonatomic) NSString * No;



@property double PointPrice;

@property (copy,nonatomic) NSString * ProductAdDescripion;

@property double ProductID;

@property (copy,nonatomic) NSString * ProductName;

@property (copy,nonatomic) NSString * ProductNo;

@property (copy,nonatomic) NSString * RepresentImgUrl;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
