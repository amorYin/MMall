//
//  MailParam.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MailParam : NSObject
@property (copy,nonatomic) NSString * id;

@property double pageindex;

@property double pagesize;

@property (copy,nonatomic) NSString * type;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
