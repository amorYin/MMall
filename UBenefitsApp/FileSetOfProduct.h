//
//  FileSetOfProduct.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FileSetOfProduct : NSObject
@property (copy,nonatomic) NSString * CreatePerson;

@property double CreateTime;

@property (copy,nonatomic) NSString * FullPath;

@property (copy,nonatomic) NSString * Id;

@property (copy,nonatomic) NSString * Name;

@property (copy,nonatomic) NSString * Path;

@property (copy,nonatomic) NSString * Remark;

@property double Size;

@property (copy,nonatomic) NSString * State;

@property (copy,nonatomic) NSString * Suffix;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
