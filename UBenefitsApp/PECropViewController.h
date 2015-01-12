//
//  PECropViewController.h
//  PhotoCropEditor
//      实现效果很棒的图片截取功能。图片一开始导入时，截取的范围是整个图片，这时候图片是缩小的。然后，随着手指拖动截取框的范围，图片会进行局部的放大，从而能够使得可以很方便截取到局部细节。
//  Created by kishikawa katsumi on 2013/05/19.
//  Copyright (c) 2013 kishikawa katsumi. All rights reserved.

//

#import <UIKit/UIKit.h>

@interface PECropViewController : UIViewController

@property (nonatomic, weak) id delegate;
@property (nonatomic) UIImage *image;

@property (nonatomic) BOOL keepingCropAspectRatio;
@property (nonatomic) CGFloat cropAspectRatio;

@property (nonatomic) CGRect cropRect;

@end

@protocol PECropViewControllerDelegate <NSObject>

- (void)cropViewController:(PECropViewController *)controller didFinishCroppingImage:(UIImage *)croppedImage;
- (void)cropViewControllerDidCancel:(PECropViewController *)controller;

@end
