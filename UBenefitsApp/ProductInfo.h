//
//  ProductInfo.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProductInfo : NSObject
@property (copy,nonatomic) NSString * ADDesc;

@property double BeginSellTime;

@property (copy,nonatomic) NSString * BeginSellUser;

//private com.taihe.ubenefits.pages.api.BrandInfo BrandInfo;

@property (copy,nonatomic) NSString * BrandsID;

@property double CheckTime;

@property (copy,nonatomic) NSString * CheckerID;

@property (copy,nonatomic) NSString * CreatePerson;

@property double CreateTime;

@property (copy,nonatomic) NSString * DefaultCategoryID;

@property double DeleteTime;

@property (copy,nonatomic) NSString * DeleteUser;

@property (copy,nonatomic) NSString * Details;

//private List<com.taihe.ubenefits.pages.api.FileSetOfProduct> FileSetOfProduct = new ArrayList<com.taihe.ubenefits.pages.api.FileSetOfProduct>();

@property double FlagId;

@property (copy,nonatomic) NSString * FreightSummary;

@property double FreightTemplateID;

@property double ID;

@property (copy,nonatomic) NSString * Introduction;

@property (copy,nonatomic) NSString * IsAllowRefunds;

@property (copy,nonatomic) NSString * IsGroupBuy;

@property (copy,nonatomic) NSString * IsRebuild;

@property (copy,nonatomic) NSString * IsSysRecommend;

@property double MaxPointPrice;

@property double MinGroupNumber;

@property double MinPointPrice;

@property (copy,nonatomic) NSString * Name;

@property double PlanBuyOff;

@property double PlanBuyOn;

@property (copy,nonatomic) NSString * ProductNo;

@property (copy,nonatomic) NSString * ProductType;

//private List<com.taihe.ubenefits.pages.api.ProductsExtendSet> ProductsExtendSet = new ArrayList<com.taihe.ubenefits.pages.api.ProductsExtendSet>();

//private List<com.taihe.ubenefits.pages.api.ProductsSKUSet> ProductsSKUSet = new ArrayList<com.taihe.ubenefits.pages.api.ProductsSKUSet>();

@property (copy,nonatomic) NSString * Remark;

@property (copy,nonatomic) NSString * Remark2;

@property (copy,nonatomic) NSString * Remark3;

@property (copy,nonatomic) NSString * RepresentImgUrl;

@property (copy,nonatomic) NSString * SalesPromotionTagID;

@property (copy,nonatomic) NSString * SearchKeywords;

@property double SellCount;

@property double ShoppingRates;

@property double SoldOutTime;

@property (copy,nonatomic) NSString * SoldOutUser;

@property double Sort;

@property (copy,nonatomic) NSString * State;

@property double Stock;

@property (copy,nonatomic) NSString * UpdatePerson;

@property double UpdateTime;

//private com.taihe.ubenefits.pages.api.VendorInfo VendorInfo;

@property (copy,nonatomic) NSString * VendorsID;

@property (copy,nonatomic) NSString * VendorsProductsLink;
+ (id)objWithJsonDic:(NSDictionary *)jsonDic;
@end
