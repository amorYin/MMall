//
//  HomeViewController.h
//  TestApp
//
//  Created by hatech on 15/1/7.
//  Copyright (c) 2015年 hatech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeViewController : UIViewController<UIScrollViewDelegate>{
    NSArray *mainUiArray;
}
@property (weak, nonatomic) IBOutlet UISearchBar *topSearchBar;
@property (weak, nonatomic) IBOutlet UIScrollView *mainView;

@end
