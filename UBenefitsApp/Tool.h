//
//  Tool.h
//  TestApp
//
//  Created by hatech on 15/1/8.
//  Copyright (c) 2015年 hatech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tool : NSObject
+ (void)ToastNotification:(NSString *)text andView:(UIView *)view andLoading:(BOOL)isLoading andIsBottom:(BOOL)isBottom;
@end
