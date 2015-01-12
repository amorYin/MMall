//
//  MyUserInfoBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MyUserInfoBean : NSObject
//private UserInfoBean BasicInfo;

//private UserExtendInfo ExtendInfo;

//private ArrayList<UsersIn2ToN> UsersIn2ToN = new ArrayList<UsersIn2ToN>();
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
