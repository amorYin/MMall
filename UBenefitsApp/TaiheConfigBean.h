//
//  TaiheConfigBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TaiheConfigBean : NSObject
@property (copy,nonatomic) NSString * MonetaryUnit;

@property (copy,nonatomic) NSString * BussCity;

@property double SelectedFestivalMaxNumber;

@property (copy,nonatomic) NSString * UpdatePerson;

@property (copy,nonatomic) NSString * LoginTopImg;

@property double Switch2In5;

@property (copy,nonatomic) NSString * RegProvince;

@property (copy,nonatomic) NSString * Property;

@property (copy,nonatomic) NSString * RegCity;

@property (copy,nonatomic) NSString * CompanySysTitle;

@property double TimeOutInternal;

@property (copy,nonatomic) NSString * Url;

@property (copy,nonatomic) NSString * FullName;

@property (copy,nonatomic) NSString * LogoUrl;

@property (copy,nonatomic) NSString * ID;

@property (copy,nonatomic) NSString * Introducation;

@property (copy,nonatomic) NSString * ClientPWD;

@property (copy,nonatomic) NSString * FocusImg;

@property (copy,nonatomic) NSString * Scale;

@property (copy,nonatomic) NSString * EnName;

@property (copy,nonatomic) NSString * FestivalTip;

@property (copy,nonatomic) NSString * CreatePerson;

@property (copy,nonatomic) NSString * TimelyIncentivesTip;

@property BOOL IsSendEmail;

@property (copy,nonatomic) NSString * NSelectNTip;

@property double UpdateTime;

@property (copy,nonatomic) NSString * WarmingTip;

@property double Points;

@property (copy,nonatomic) NSString * ZipCode;

@property (copy,nonatomic) NSString * GiffGaffPointsAlias;

@property (copy,nonatomic) NSString * Name;

@property (copy,nonatomic) NSString * ToCHomePage;

@property (copy,nonatomic) NSString * Email;

@property (copy,nonatomic) NSString * State;

@property (copy,nonatomic) NSString * CompanyChargeLimited;

@property (copy,nonatomic) NSString * EmployeeChargeLimited;

@property (copy,nonatomic) NSString * Address;

@property double CreateTime;

@property (copy,nonatomic) NSString * BussProvince;

@property (copy,nonatomic) NSString * PictruesLink;

@property (copy,nonatomic) NSString * PictruesUrl;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * TradeMarkUrl;

@property (copy,nonatomic) NSString * CSSPath;

@property (copy,nonatomic) NSString * RegNo;

@property double AllowEmpNumber;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
