//
//  HomeViewController.m
//  TestApp
//
//  Created by hatech on 15/1/7.
//  Copyright (c) 2015年 hatech. All rights reserved.
//

#import "HomeViewController.h"

@interface HomeViewController ()

@end

@implementation HomeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    //顶部栏
    _topSearchBar.tintColor= [UIColor whiteColor];
    // Get the instance of the UITextField of the search bar
    UITextField *searchField = [_topSearchBar valueForKey:@"_searchField"];
    
    // Change search bar text color
    searchField.textColor = [UIColor whiteColor];
    
    // Change the search bar placeholder text color
    [searchField setValue:[UIColor whiteColor] forKeyPath:@"_placeholderLabel.textColor"];
    UIImage *image = [UIImage imageNamed: @"ico_search.png"];
    UIImageView *iView = [[UIImageView alloc] initWithImage:image];
    searchField.leftView = iView;
    //MAIN VIEW
//    mainUiArray= [[NSBundle mainBundle]loadNibNamed:@"HomeView" owner:self options:nil];
//    [_mainView addSubview:[mainUiArray objectAtIndex:0]];
    _mainView.delegate=self;
    CGSize newSize = CGSizeMake(320, 2850);
    [_mainView setContentSize:newSize];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
