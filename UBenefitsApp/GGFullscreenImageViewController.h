//
//  GGFullscreenImageViewController.h
//  oschina
//GGFullScreenImageViewController 可轻松实现将一个 UIImageView 放大到全屏状态下显示
//  Created by Xiaosong Fang on 13-12-18.
//
//
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, GGOrientation) {
    GGOrientationPortrait = 0,
    GGOrientationLandscapeLeft = 1,
    GGOrientationPortraitUpsideDown = 2,
    GGOrientationLandscapeRight = 3
};

@interface GGFullscreenImageViewController : UIViewController

@property (nonatomic, retain) UIImageView *liftedImageView;
@property (nonatomic, assign) UIInterfaceOrientationMask supportedOrientations;

@end
