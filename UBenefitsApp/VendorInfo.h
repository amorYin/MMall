//
//  VendorInfo.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VendorInfo : NSObject
@property (copy,nonatomic) NSString * Bank;

@property (copy,nonatomic) NSString * BankAccounts;

@property (copy,nonatomic) NSString * BussArea;

@property (copy,nonatomic) NSString * City;

@property (copy,nonatomic) NSString * CompanyEmail;

@property (copy,nonatomic) NSString * CreatePerson;

@property double CreateTime;

@property (copy,nonatomic) NSString * EnName;

@property double EstabDate;

@property int FlagId;

@property (copy,nonatomic) NSString * ID;

@property (copy,nonatomic) NSString * Name;

@property (copy,nonatomic) NSString * PayStyle;

@property (copy,nonatomic) NSString * Province;

@property (copy,nonatomic) NSString * RefundsAdd;

@property (copy,nonatomic) NSString * RefundsContacter;

@property (copy,nonatomic) NSString * RefundsOfficeTel;

@property (copy,nonatomic) NSString * RefundsTel;

@property (copy,nonatomic) NSString * RefundsZipCode;

@property (copy,nonatomic) NSString * RegAddress;

@property int RegCapital;

@property (copy,nonatomic) NSString * RegLegalPerson;

@property (copy,nonatomic) NSString * RegName;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * State;

@property (copy,nonatomic) NSString * UpdatePerson;

@property double UpdateTime;

@property (copy,nonatomic) NSString * ZipCode;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
