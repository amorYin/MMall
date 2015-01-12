//
//  TaiheApi.h
//  UBenefitsApp
//
//  Created by 刘会广 on 15/1/11.
//  Copyright (c) 2015年 ubenefits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TaiheApi : NSObject<NSCoding, NSCopying, NSMutableCopying>


//测试
public static final String IMAGE_URL_HEAD = "http://192.168.3.235:8081";
public static final String IMAGE_URL_SAVE = "http://192.168.3.235:8081";

//	//正式
//	public static final String IMAGE_URL_HEAD = "http://image.ubenefits.com.cn";
//	public static final String IMAGE_URL_SAVE = "http://image.ubenefits.com.cn";

public static final String Message = "message";

public static final int Num = 20;

public static final int DEFAULT_PAGE = 1;

public static final String PRODUCTSET = "ProductSet";

public static final String CLIENTACCESSOBJECT = "ClientAccessObject";

public static final String ORDERID = "OrderID";

public static final String REST_PHP = "rest.php";

public static final String REST_COMPANYCONFIG="/NonCheckRestService/Query/Company"; //公司配置信息  get

public static final String REST_LOGIN="/FunctionRestService/Query/Login"; // 登录信息  get

public static final String REST_HOMEHEADINFO="/FunctionRestService/Query/GetHomeHeadInfo"; // 首页分类信息

public static final String REST_POINTNALL="/FunctionRestService/Query/PointMall"; //积分商城首页商品  post

public static final String REST_GETHOTPRODUCTSET="/FunctionRestService/Query/Product/GetHotProductSet"; //获取热销商品集合

public static final String REST_FIRSTLEVELCATALOGSET="/FunctionRestService/Query/Product/GetFirstLevelCatalogSet"; //商品一级分类

public static final String REST_SECONDLEVELCATALOGSET="/FunctionRestService/Query/Product/GetSecondLevelCatalogSet"; //商品二级分类

public static final String REST_PRODUCTSETBYCATALOGID="/FunctionRestService/Query/Product/GetProductSetByCatalogID"; //商品分类id获取商品集合

public static final String REST_PRODUCTINFO="/FunctionRestService/Query/Product/ProductInfo"; //商品id获取商品详情

public static final String REST_SHOPPINGCARTCOUNT="/FunctionRestService/Query/Product/GetProductCountOfShoppingCart"; //购物车 商品数量

public static final String REST_PRODUCTSETOFSHOPPINGCART="/FunctionRestService/Query/Product/GetProductSetOfShoppingCart"; //购物车商品集合

public static final String REST_INSERTSHOPPINGCART="/FunctionRestService/Add/Product/InsertShoppingCart"; //添加购物车信息

public static final String REST_UPDATESHOPPINGCART="/FunctionRestService/Update/Product/UpdateShoppingCart"; //更新购物车信息

public static final String REST_CHECKSTOCK="/FunctionRestService/Query/Product/CheckStock"; //核实购物车商品信息

public static final String REST_GETPROVINCESET="/FunctionRestService/Query/Common/GetProvinceSet"; //获取省地址集合

public static final String REST_GETCITYORCOUNTYSET="/FunctionRestService/Query/Common/GetCityOrCountySet"; //父行政区域id 获取市或区县地址集合

public static final String REST_GETPRODUCTSETOFORDERING="/FunctionRestService/Query/Product/GetProductSetOfOrdering"; //获取待生成订单的商品集合

public static final String REST_GETUSERADDRESSAET="/FunctionRestService/Query/User/GetUserAddressSet"; //获取用户配送地址集合

public static final String REST_GETUSERDEFAULTADDRESS="/FunctionRestService/Query/User/GetUserDefaultAddress"; //获取用户默认配送地址

public static final String REST_SHOPPINGCARTSCHECKOUT="/OrdersRestService/Query/Orders/ShoppingCartsCheckOut"; //获取订单结算信息

public static final String REST_CHECKOUTORDERNOSPLIT="/OrdersRestService/Create/Orders/CheckOutOrderNoSplit"; //提交订单

public static final String REST_PAY="/OrdersRestService/Query/Orders/Pay"; //获取订单支付信息

public static final String REST_SETUSERDEFAULTADDRESS="/FunctionRestService/Update/User/SetUserDefaultAddress"; //设置用户默认收货地址

public static final String REST_DELETEUSERADDRESS="/FunctionRestService/Delete/User/DeleteUserAddress"; //删除地址

public static final String REST_CREATEUSERADDRESS="/FunctionRestService/Create/User/CreateUserAddress"; //保存地址

public static final String REST_UPDATEUSERADDRESS="/FunctionRestService/Update/CompanyUsers/UpdateUserAddress"; //修改收货地址

public static final String REST_GETUSERORDERS="/OrdersRestService/Query/Orders/GetUserOrders"; //我的订单

public static final String REST_CHANGEPASSWORDBYUSERID="/FunctionRestService/Update/User/ChangePasswordByUserId"; //修改登录密码信息

public static final String REST_CHANGEPAYPASSWORDBYUSERID="/FunctionRestService/Update/User/ChangePayPasswordByUserId"; //修改支付密码信息

public static final String REST_CHANGETELEPHONEBYUSERID="/FunctionRestService/Update/User/ChangeTelephoneByUserId"; //修改绑定手机信息

public static final String REST_GETORDER="/OrdersRestService/Query/Orders/GetOrder"; //获取订单详情

public static final String REST_ORDERPAYONLINE="/OrdersRestService/Update/Orders/OrderPayOnline"; //支付订单

public static final String REST_APPLYREFUND="/RefundsRestService/Create/Refunds/ApplyRefund"; //退货退款申请

public static final String REST_GETUSERREFUNDS="/RefundsRestService/Query/Refunds/GetUserRefunds"; //退货退款申请列表

public static final String REST_UPLOADHANDLER="/UploadHandler.ashx?filename=up/CompanyUsers/"; //上传头像

public static final String REST_USERINFO="/FunctionRestService/Query/User/GetMyInformation"; //用户信息

public static final String REST_RECOMMENDERPRODUCTSET="/FunctionRestService/Query/Product/RecommenderProductSet"; //推荐商品

public static final String REST_GETNEWS="/FunctionRestService/Query/User/GetNews"; //我的信息

public static final String REST_UPDATEEXPRESSINFO="/RefundsRestService/Update/Refunds/UpdateExpressInfo"; //提交快递单信息

public static final String REST_CANCELORDER="/OrdersRestService/Update/Orders/CancelOrder"; //取消订单

public static final String REST_CONFIRMGOODS="/OrdersRestService/Update/Orders/ConfirmGoods"; //确认收货

public static final String REST_GETUSERRECEIVEPAYMENTLOG="/FunctionRestService/Query/User/GetUserReceivePaymentLog"; //我的账户

public static final String REST_INITUSERPASSWORD="/FunctionRestService/Update/User/InitUserPassword"; //初始化登录密码、支付密码、手机号

public static final String REST_SELECTPRODUCTLIST="/FunctionRestService/Query/Product/SelectProductList"; //商品搜索

public static final String REST_MODIFYUSERINFO="/CompanyUserRestService/Update//ModifyUserInfo"; //修改个人信息

public static final String REST_EDITICONURL="/CompanyUserRestService/Update/EditIconUrl"; //修改用户头像信息

public static final String REST_GETINITPHONEVERIFCODE="/CompanyUserRestService/Get/User/GetInitphoneVerifCode"; //获取手机验证码

public static final String REST_GETCOMPANYFESTIVALSET="/FunctionRestService/Query/User/GetCompanyFestivalSet"; //获取用户公司N选N列表

public static final String REST_CHECKUSERISEXIST="/CompanyUserRestService/Get/CheckUserIsExist"; //积分互赠时验证获赠用户是否存在

public static final String REST_POISTTOUSER="/CompanyUserRestService/Update/PoistToUser"; //积分互赠

public static final String REST_GETMOBILEPRODUCTINFO="/OrdersRestService/Query/GetMobileProductInfo"; //获取用户手机号归属地信息

public static final String REST_MOBILECHARGEDENOMINATION="/OrdersRestService/Query/MobileChargeDenomination"; //获取手机充值面额列表

public static final String REST_CHARGEFEE="/OrdersRestService/Update/ChargeFee"; //手机充值

public static final String REST_GETUSERMOBILEORDERS="/OrdersRestService/Query/GetUserMobileOrders"; //获取用户手机充值订单信息







@end
