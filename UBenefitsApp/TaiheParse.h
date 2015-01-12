//
//  TaiheParse.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TaiheParse : NSObject





public static TaiheConfigBean parseConfigBean(String valueOf) {
    TaiheConfigBean configBean = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONObject messageObj = json.optJSONObject(TaiheAPI.CLIENTACCESSOBJECT);
                Gson gson = new Gson();
                configBean = gson.fromJson(String.valueOf(messageObj),TaiheConfigBean.class);
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return configBean;
}

/**
 * 商城主页分类
 * @param valueOf
 * @return
 */
public static ArrayList<ClassifyBean> parseMallHomeclassify(String valueOf) {
    ArrayList<ClassifyBean> mallHomeclassify = new ArrayList<ClassifyBean>();
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray messageObj = json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                Type listType = new TypeToken<ArrayList<ClassifyBean>>(){}.getType();
                Gson gson = new Gson();
                mallHomeclassify = gson.fromJson(String.valueOf(messageObj), listType);
                if(mallHomeclassify==null){
                    mallHomeclassify = new ArrayList<ClassifyBean>();
                }
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return mallHomeclassify;
}

/**
 * 商城主页商品
 * @param valueOf
 * @return
 */
public static ArrayList<ProductBean> parseProductBean(String valueOf) {
    ArrayList<ProductBean> productBean = new ArrayList<ProductBean>();
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray messageObj = json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                Type listType = new TypeToken<ArrayList<ProductBean>>(){}.getType();
                Gson gson = new Gson();
                productBean = gson.fromJson(String.valueOf(messageObj), listType);
                if(productBean==null){
                    productBean = new ArrayList<ProductBean>();
                }
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return productBean;
}

/**
 *
 * @param valueOf
 * @return
 */
public static ArrayList<ProductSet> parseProductInfo(String valueOf,String type) {
    ArrayList<ProductSet> productSetData = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray jsonobj =json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                JSONArray messageObj = jsonobj.optJSONObject(0).optJSONArray(type);
                if(messageObj==null){
                    messageObj = jsonobj;
                }
                Type listType = new TypeToken<ArrayList<ProductSet>>(){}.getType();
                Gson gson = new Gson();
                productSetData = gson.fromJson(String.valueOf(messageObj), listType); ;
                if(productSetData==null){
                    productSetData = new ArrayList<ProductSet>();
                }
            }
            
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return productSetData;
}

/**
 *
 * @param valueOf
 * @return
 */
public static ArrayList<ProductSet> parseHotProductInfo(String valueOf,String type) {
    ArrayList<ProductSet> productSetData = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONObject jsonobj =json.optJSONObject(TaiheAPI.CLIENTACCESSOBJECT);
                JSONArray messageObj = jsonobj.optJSONArray(type);
                
                Type listType = new TypeToken<ArrayList<ProductSet>>(){}.getType();
                Gson gson = new Gson();
                productSetData = gson.fromJson(String.valueOf(messageObj), listType);
                if(productSetData==null){
                    productSetData = new ArrayList<ProductSet>();
                }
            }
            
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return productSetData;
}

/**
 *
 * @param valueOf
 * @return
 */
public static ArrayList<ProductSet> parseSeachProductInfo(String valueOf,String type) {
    ArrayList<ProductSet> productSetData = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                //					JSONObject jsonobj =json.optJSONObject(TaiheAPI.CLIENTACCESSOBJECT);
                JSONArray messageObj = json.optJSONArray(type);
                
                Type listType = new TypeToken<ArrayList<ProductSet>>(){}.getType();
                Gson gson = new Gson();
                productSetData = gson.fromJson(String.valueOf(messageObj), listType);
                if(productSetData==null){
                    productSetData = new ArrayList<ProductSet>();
                }
            }
            
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return productSetData;
}
/**
 * 商品分类
 * @param valueOf
 * @return
 */
public static ArrayList<MallClassifyBean> parseMallClassify(String valueOf) {
    ArrayList<MallClassifyBean> mallClassify = new ArrayList<MallClassifyBean>();
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray messageObj = json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                Type listType = new TypeToken<ArrayList<MallClassifyBean>>(){}.getType();
                Gson gson = new Gson();
                mallClassify = gson.fromJson(String.valueOf(messageObj), listType);
                if(mallClassify==null){
                    mallClassify = new ArrayList<MallClassifyBean>();
                }
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return mallClassify;
}

/**
 *
 * @param valueOf
 * @return
 */
public static ProductInfo parseProductInfo(String valueOf) {
    ProductInfo ProductInfo = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONObject messageObj = json.optJSONObject(TaiheAPI.CLIENTACCESSOBJECT);
                Gson gson = new Gson();
                ProductInfo = gson.fromJson(String.valueOf(messageObj),ProductInfo.class);
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return ProductInfo;
}

/**
 * 商品分类
 * @param valueOf
 * @return
 */
public static ArrayList<ShopCartProductBean> parseShopCartProductBean(String valueOf) {
    ArrayList<ShopCartProductBean> shopCartPoductBean = new ArrayList<ShopCartProductBean>();
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray messageObj = json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                Type listType = new TypeToken<ArrayList<ShopCartProductBean>>(){}.getType();
                Gson gson = new Gson();
                shopCartPoductBean = gson.fromJson(String.valueOf(messageObj), listType);
                if(shopCartPoductBean==null){
                    shopCartPoductBean = new ArrayList<ShopCartProductBean>();
                }
                
                
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return shopCartPoductBean;
}


/**
 * 地址
 * @param valueOf
 * @return
 */
public static AddressBean parseAddressBean(String valueOf) {
    AddressBean addressBean = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONObject messageObj = json.optJSONObject(TaiheAPI.CLIENTACCESSOBJECT);
                Gson gson = new Gson();
                addressBean = gson.fromJson(String.valueOf(messageObj),AddressBean.class);
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return addressBean;
}


/**
 * 配送地址集合
 * @param valueOf
 * @return
 */
public static ArrayList<AddressBean> parseAddressBeanBean(String valueOf) {
    ArrayList<AddressBean> addressBeanBean = new ArrayList<AddressBean>();
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray messageObj = json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                Type listType = new TypeToken<ArrayList<AddressBean>>(){}.getType();
                Gson gson = new Gson();
                addressBeanBean = gson.fromJson(String.valueOf(messageObj), listType);
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return addressBeanBean;
}



/**
 *
 * @param valueOf
 * @return
 */
public static SubmitOrderBean parseSubmitOrderBean(String valueOf) {
    SubmitOrderBean submitOrderBean = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONObject messageObj = json.optJSONObject(TaiheAPI.CLIENTACCESSOBJECT);
                Gson gson = new Gson();
                submitOrderBean = gson.fromJson(String.valueOf(messageObj),SubmitOrderBean.class);
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return submitOrderBean;
}

/**
 *
 * @param valueOf
 * @return
 */
public static OrderPayInfo parseOrderPayInfoBean(String valueOf) {
    OrderPayInfo orderPayInfo = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONObject messageObj = json.optJSONObject(TaiheAPI.CLIENTACCESSOBJECT);
                Gson gson = new Gson();
                orderPayInfo = gson.fromJson(String.valueOf(messageObj),OrderPayInfo.class);
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return orderPayInfo;
}


/**
 *
 * @param valueOf
 * @return
 */
public static ArrayList<OrdersInfoBean> parseOrdersInfoBean(String valueOf,Activity activity) {
    ArrayList<OrdersInfoBean> ordersInfoBean = new ArrayList<OrdersInfoBean>();
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray messageObj = json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                Type listType = new TypeToken<ArrayList<OrdersInfoBean>>(){}.getType();
                //					Gson gson = new Gson();
                Exclude ex = new Exclude();
                Gson gson = new GsonBuilder().addDeserializationExclusionStrategy(ex).addSerializationExclusionStrategy(ex).create();
                ordersInfoBean = gson.fromJson(String.valueOf(messageObj), listType);
                if(activity!=null){
                    for (OrdersInfoBean temp : ordersInfoBean) {
                        temp.setImageAdapter(new ImageAdapter(activity, temp.getProducts()));
                    }
                }
                if(ordersInfoBean==null){
                    ordersInfoBean = new ArrayList<OrdersInfoBean>();
                }
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return ordersInfoBean;
}

/**
 *
 * @param valueOf
 * @return
 */
public static OrdersInfoBean parseOrdersInfoBean(String valueOf) {
    OrdersInfoBean ordersInfoBean = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONObject messageObj = json.optJSONObject(TaiheAPI.CLIENTACCESSOBJECT);
                Exclude ex = new Exclude();
                Gson gson = new GsonBuilder().addDeserializationExclusionStrategy(ex).addSerializationExclusionStrategy(ex).create();
                ordersInfoBean = gson.fromJson(String.valueOf(messageObj),OrdersInfoBean.class);
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return ordersInfoBean;
}

/**
 *
 * @param valueOf
 * @return
 */
public static OrdersInfoBeanm parseOrdersInfoBeanm(String valueOf) {
    OrdersInfoBeanm useInfo = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONObject messageObj = json.optJSONObject(TaiheAPI.CLIENTACCESSOBJECT);
                Gson gson = new Gson();
                useInfo = gson.fromJson(String.valueOf(messageObj),OrdersInfoBeanm.class);
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return useInfo;
}
/**
 *
 * @param valueOf
 * @return
 */
public static ArrayList<RefundOrderBean> parseRefundOrderBean(String valueOf) {
    ArrayList<RefundOrderBean> refundOrderBean = new ArrayList<RefundOrderBean>();
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray messageObj = json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                Type listType = new TypeToken<ArrayList<RefundOrderBean>>(){}.getType();
                Gson gson = new Gson();
                refundOrderBean = gson.fromJson(String.valueOf(messageObj), listType);
                if(refundOrderBean==null){
                    refundOrderBean = new ArrayList<RefundOrderBean>();
                }
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return refundOrderBean;
}


/**
 *
 * @param valueOf
 * @return
 */
public static UserInfoBean parseUserInfoBean(String valueOf) {
    UserInfoBean useInfo = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONObject messageObj = json.optJSONObject(TaiheAPI.CLIENTACCESSOBJECT);
                Gson gson = new Gson();
                useInfo = gson.fromJson(String.valueOf(messageObj),UserInfoBean.class);
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return useInfo;
}


/**
 *
 * @param valueOf
 * @return
 */
public static ArrayList<NewsBean> parseNewsBean(String valueOf) {
    ArrayList<NewsBean> newsBean = new ArrayList<NewsBean>();
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray messageObj = json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                Type listType = new TypeToken<ArrayList<NewsBean>>(){}.getType();
                Gson gson = new Gson();
                newsBean = gson.fromJson(String.valueOf(messageObj), listType);
                if(newsBean==null){
                    newsBean = new ArrayList<NewsBean>();
                }
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return newsBean;
}

/**
 *
 * @param valueOf
 * @return
 */
public static MyUserInfoBean parseMyUserInfoBean(String valueOf) {
    MyUserInfoBean myUserInfoBean = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONObject messageObj = json.optJSONObject(TaiheAPI.CLIENTACCESSOBJECT);
                Gson gson = new Gson();
                myUserInfoBean = gson.fromJson(String.valueOf(messageObj),MyUserInfoBean.class);
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return myUserInfoBean;
}

/**
 *
 * @param valueOf
 * @return
 */
public static ArrayList<AccountInfoBean> parseAccountInfoBean(String valueOf) {
    ArrayList<AccountInfoBean> accountInfoBean = new ArrayList<AccountInfoBean>();
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray messageObj = json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                Type listType = new TypeToken<ArrayList<AccountInfoBean>>(){}.getType();
                Gson gson = new Gson();
                accountInfoBean = gson.fromJson(String.valueOf(messageObj), listType);
                if(accountInfoBean==null){
                    accountInfoBean = new ArrayList<AccountInfoBean>();
                }
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return accountInfoBean;
}
/**
 *
 * @param valueOf
 * @return
 */
public static ArrayList<FestivalBean> parseFestivalBean(String valueOf) {
    ArrayList<FestivalBean> festivalBean = new ArrayList<FestivalBean>();
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray messageObj = json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                Type listType = new TypeToken<ArrayList<FestivalBean>>(){}.getType();  
                Gson gson = new Gson(); 
                festivalBean = gson.fromJson(String.valueOf(messageObj), listType);
                if(festivalBean==null){
                    festivalBean = new ArrayList<FestivalBean>();
                }
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return festivalBean;
}
/**
 * 
 * @param valueOf
 * @return
 */
public static ArrayList<PhoneRechargeInfoBean> parsePhoneRechargeInfoBean(String valueOf) {
    ArrayList<PhoneRechargeInfoBean> phoneRechargeInfoBean = new ArrayList<PhoneRechargeInfoBean>();
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray messageObj = json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                Type listType = new TypeToken<ArrayList<PhoneRechargeInfoBean>>(){}.getType();  
                Gson gson = new Gson(); 
                phoneRechargeInfoBean = gson.fromJson(String.valueOf(messageObj), listType);
                
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return phoneRechargeInfoBean;
}

public static MobileInfo parseMobileInfo(String valueOf) {
    MobileInfo mobileInfo = null;
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONObject messageObj = json.optJSONObject(TaiheAPI.CLIENTACCESSOBJECT);
                Gson gson = new Gson();
                mobileInfo = gson.fromJson(String.valueOf(messageObj),MobileInfo.class);
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return mobileInfo;
}


/**
 * 
 * @param valueOf
 * @return
 */
public static ArrayList<String> parseFacevalue(String valueOf) {
    ArrayList<String> str = new ArrayList<String>();
    try {
        if (!TextUtils.isEmpty(valueOf)) {
            
            JSONObject json = new JSONObject(valueOf);
            if (json.has(TaiheAPI.CLIENTACCESSOBJECT)) {
                JSONArray messageObj = json.optJSONArray(TaiheAPI.CLIENTACCESSOBJECT);
                Type listType = new TypeToken<ArrayList<String>>(){}.getType();  
                Gson gson = new Gson(); 
                str = gson.fromJson(String.valueOf(messageObj), listType);
            }
        }
        
    } catch (Exception e) {
        e.printStackTrace();
    }
    return str;
}

@end
