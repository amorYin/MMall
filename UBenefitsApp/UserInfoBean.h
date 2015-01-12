//
//  UserInfoBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserInfoBean : NSObject
@property (copy,nonatomic) NSString * EMail;

@property (copy,nonatomic) NSString * Telephone;

@property double FreezingPoints;

@property (copy,nonatomic) NSString * IsSharePoint;

@property (copy,nonatomic) NSString * Password;

@property (copy,nonatomic) NSString * BatchCode;

@property (copy,nonatomic) NSString * IDCard;

@property (copy,nonatomic) NSString * IsLunarCalendar;

@property (copy,nonatomic) NSString * UserID;

@property (copy,nonatomic) NSString * UserName;

@property (copy,nonatomic) NSString * IsMarried;

@property double Birthday;

@property double CompanyAge;

@property BOOL IsSetFestival;

@property (copy,nonatomic) NSString * Department;

@property double MerryDate;

@property (copy,nonatomic) NSString * LoginState;

@property (copy,nonatomic) NSString * Sex;

@property (copy,nonatomic) NSString * UserType;

@property (copy,nonatomic) NSString * JobNumber;

@property (copy,nonatomic) NSString * CompanyID;

@property (copy,nonatomic) NSString * CreatePerson;

@property (copy,nonatomic) NSString * Function;

@property BOOL IsSetPassword;

@property (copy,nonatomic) NSString * BenefitCenterId;

@property (copy,nonatomic) NSString * IconUrl;

@property (copy,nonatomic) NSString * CompanyName;

@property (copy,nonatomic) NSString * UserAccounts;

@property BOOL IsSetPaypassword;

@property double Points;

@property (copy,nonatomic) NSString * Nationality;

@property (copy,nonatomic) NSString * JobState;

@property BOOL IsSetTelephone;

@property (copy,nonatomic) NSString * IsCalendarAlarm;

@property (copy,nonatomic) NSString * JobLevel;

@property (copy,nonatomic) NSString * State;

@property double CreateTime;

@property (copy,nonatomic) NSString * IDType;

@property (copy,nonatomic) NSString * IsBatch;

@property (copy,nonatomic) NSString * Position;

@property (copy,nonatomic) NSString * ShowImg;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * CompanyClientPWD;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
