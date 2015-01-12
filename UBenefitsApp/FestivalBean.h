//
//  FestivalBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FestivalBean : NSObject
@property (copy,nonatomic) NSString * CompanyFestivalId;

@property double FestivalType;

//private ArrayList<ChildFestivalInfo> ChildFestivalInfo = new ArrayList<ChildFestivalInfo>();

@property (copy,nonatomic) NSString * FestivalDate;

@property BOOL IsDistributed; //是否分配积分

@property (copy,nonatomic) NSString * FestivalName;

@property (copy,nonatomic) NSString * ID;

@property BOOL IsChecked; //是否能选择

@property BOOL IsLegalFestivals; //是否能更改日期

@property (copy,nonatomic) NSString * FestivalTypeName;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
