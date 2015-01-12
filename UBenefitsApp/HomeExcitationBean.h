//
//  HomeExcitationBean.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HomeExcitationBean : NSObject
@property (copy,nonatomic) NSString * content; //内容
@property int  i_bgColor;//颜色
@property (copy,nonatomic) NSString * S_bgColor;//颜色
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
