//
//  UserExtendInfo.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserExtendInfo : NSObject

@property double Birthday;

@property double CompanyAge;

@property (copy,nonatomic) NSString * CompanyName;

@property (copy,nonatomic) NSString * CreatePerson;

@property double CreateTime;

@property (copy,nonatomic) NSString * Department;

@property (copy,nonatomic) NSString * Function;

@property (copy,nonatomic) NSString * IDCard;

@property (copy,nonatomic) NSString * IDType;

@property (copy,nonatomic) NSString * IconUrl;

@property (copy,nonatomic) NSString * IsCalendarAlarm;

@property (copy,nonatomic) NSString * IsLunarCalendar;

@property (copy,nonatomic) NSString * IsMarried;

@property (copy,nonatomic) NSString * IsSharePoint;

@property (copy,nonatomic) NSString * JobLevel;

@property (copy,nonatomic) NSString * JobNumber;

@property (copy,nonatomic) NSString * JobState;

@property double MerryDate;

@property (copy,nonatomic) NSString * Nationality;

@property (copy,nonatomic) NSString * Position;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * Sex;

@property (copy,nonatomic) NSString * UpdatePerson;

@property double UpdateTime;

@property (copy,nonatomic) NSString * UserID;

@property (copy,nonatomic) NSString * UserName;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
