//
//  AddressBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AddressBean : NSObject
//	private Boolean defaultFirst =false;

@property int index;

@property (copy,nonatomic) NSString * UpdatePerson;

@property (copy,nonatomic) NSString * CreatePerson;

@property (copy,nonatomic) NSString * IsDefault;

@property (copy,nonatomic) NSString * IsDelete;

@property double UpdateTime;

@property (copy,nonatomic) NSString * UserID;

@property (copy,nonatomic) NSString * Province;

@property (copy,nonatomic) NSString * ZipCode;

@property (copy,nonatomic) NSString * City;

@property (copy,nonatomic) NSString * AddressID;

@property (copy,nonatomic) NSString * County;

@property (copy,nonatomic) NSString * Receiver;

@property (copy,nonatomic) NSString * Address;

@property double CreateTime;

@property (copy,nonatomic) NSString * Mobile;

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * ReceiverTel;

//**********用户地址
@property (copy,nonatomic) NSString * MyTexts;

@property double Sort;

@property (copy,nonatomic) NSString * ParentId;

@property (copy,nonatomic) NSString * MyTables;

@property (copy,nonatomic) NSString * Id;

@property (copy,nonatomic) NSString * MyColums;

@property int type ;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
