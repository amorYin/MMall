//
//  UsersIn2ToN.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UsersIn2ToN : NSObject
@property (copy,nonatomic) NSString * BenefitCenterId;

@property (copy,nonatomic) NSString * CompanyId;

@property (copy,nonatomic) NSString * CreatePerson;

@property double CreateTime;

@property double FestivalDate;

@property (copy,nonatomic) NSString * FestivalId;

@property double FestivalType;

@property (copy,nonatomic) NSString * ID;

@property BOOL IsShared;

@property (copy,nonatomic) NSString * Name;

@property double SharedDate;

@property (copy,nonatomic) NSString * UpdatePerson;

@property double UpdateTime;

@property (copy,nonatomic) NSString * UserID;
@property (copy,nonatomic) NSString * festival_id;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
