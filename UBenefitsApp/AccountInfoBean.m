//
//  AccountInfoBean.m
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import "AccountInfoBean.h"

@implementation AccountInfoBean
@synthesize Abstract,BatchCode,BenefitType,CreateTime,CreatePerson,IsBatch,PostTime,PayMoney,PayPoints,OrderCode,
Remark,ReceivePoints,RefundID,RemainingPoints,Sign,Type,UpdateTime,UpdatePerson,UserID,UserRPID,FromUserID;
#pragma mark - Factory

+ (id)houseWithJsonDic:(NSDictionary *)jsonDic
{
//    if (![jsonDic respondsToSelector:@selector(objectForKey:)]) {
//        return nil;
//    }
//    AccountInfoBean *house = [[AccountInfoBean alloc] init];
//    for (NSString *element in jsonDic.allKeys) {
//        if ([element isEqualToString:@"comid"]) {
//            house.comid = [jsonDic objectForKey:element];
//        }
//        else if ([element isEqualToString:@"comname"]) {
//            house.comname = [jsonDic objectForKey:element];
//        }
//        else if ([element isEqualToString:@"comaddr"]) {
//            house.comaddr = [jsonDic objectForKey:element];
//        }
//        else if ([element isEqualToString:@"houid"]) {
//            house.houid = [jsonDic objectForKey:element];
//        }
//        else if ([element isEqualToString:@"houaddr"]) {
//            house.houaddr = [jsonDic objectForKey:element] ;
//            //            NSArray *res= [house.houaddr componentsSeparatedByString:@"-"];
//            //            if ([res count]) {
//            //                house.houseno=[res objectAtIndex:0];
//            //                house.unit=[res objectAtIndex:1];
//            //                house.room= [res objectAtIndex:2];
//            //            }
//        }else if ([element isEqualToString:@"name"]) {
//            house.name = [jsonDic objectForKey:element] ;
//        }else if ([element isEqualToString:@"telephone"]) {
//            house.telephone = [jsonDic objectForKey:element] ;
//        }
//    }
//    return house;
}


@end
