//
//  ClientAccessObjectFunction.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ClientAccessObjectFunction : NSObject
@property (copy,nonatomic) NSString * Error;

@property (copy,nonatomic) NSString *  ClientAccessObject;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
