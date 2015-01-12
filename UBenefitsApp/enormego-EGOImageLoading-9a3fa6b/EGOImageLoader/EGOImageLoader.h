//
//  EGOImageLoader.h
//  EGOImageLoading
//  图片异步加载库
//  Created by Shaun Harrison on 9/15/09.
//  Copyright (c) 2009-2010 enormego
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//
/*
 使用起来也很简单，我们这个Demo来实现一个自定义Cell的UITableView列表并异步加载每个Cell的图片显示，单击每个Cell进入子页面并显示单独的图片。
 首先我们需要实现一个继承UITableViewCell的自定义cell，头文件如下，声明一个EGOImageView用于显示图片，一个UILabel用于显示该图片的URL：
 [cpp] view plaincopy
 #import <UIKit/UIKit.h>
 #import "EGOImageView.h"
 
 @interface ImageCell : UITableViewCell
 {
 @private
 EGOImageView *egoImageView;
 UILabel *label;
 }
 //在- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath 中调用为图片组件加载图片显示
 -(void)setImageWithURL:(NSString *)imageURL;
 @end
 
 在.m文件中我们初始化这两个组件并实现setImageWithURL：方法：
 [cpp] view plaincopy
 #import "ImageCell.h"
 
 @implementation ImageCell
 
 - (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
 {
 self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
 if (self) {
 egoImageView = [[EGOImageView alloc] initWithPlaceholderImage:[UIImage imageNamed:@"placeholder.png"]];
 egoImageView.frame = CGRectMake(5, 5, 65, 65);
 [self.contentView addSubview:egoImageView];
 label = [[UILabel alloc] initWithFrame:CGRectMake(78, 20, 220, 30)];
 label.textColor = [UIColor blackColor];
 [self.contentView addSubview:label];
 }
 return self;
 }
 
 -(void)setImageWithURL:(NSString *)imageURL
 {
 [egoImageView setImageURL:[NSURL URLWithString:imageURL]];
 label.text = imageURL;
 }
 
 其中EGOImageView初始化方法中的palaceholder是还没加载完或加载失败时显示的占位图。到这里自定义的UITableViewCell就实现完了，接着到UITableViewController中实现页面展示和功能（关键代码）：
 [cpp] view plaincopy
 - (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
 {
 static NSString *CellIdentifier = @"Cell";
 ImageCell *cell = (ImageCell *)[tableView dequeueReusableCellWithIdentifier:CellIdentifier];
 if (cell == nil) {
 cell = [[ImageCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier];
 }
 
 //imgURLs为存储图片URL地址的NSArray数组
 [cell setImageWithURL:[imgURLs objectAtIndex:indexPath.row]];
 
 cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
 
 return cell;
 }
 
 我们可以看到，调用自定义的ImageCell中的setImageWithURL：方法即完成了对图片的异步加载，是不是很简单，另外，使用EGOCaceh也可以实现对缓存的释放：
 [cpp] view plaincopy
 //清理缓存
 -(void)clearCacheButton
 {
 [[EGOCache currentCache] clearCache];
 [self.tableView reloadData];
 }
 */
#import <Foundation/Foundation.h>

#ifndef __EGOIL_USE_BLOCKS
#define __EGOIL_USE_BLOCKS 0
#endif

#ifndef __EGOIL_USE_NOTIF
#define __EGOIL_USE_NOTIF 1
#endif

@protocol EGOImageLoaderObserver;
@interface EGOImageLoader : NSObject/*<NSURLConnectionDelegate>*/ {
@private
	NSDictionary* _currentConnections;
	NSMutableDictionary* currentConnections;
	#if __EGOIL_USE_BLOCKS
	dispatch_queue_t _operationQueue;
	#endif

	NSLock* connectionsLock;
}

+ (EGOImageLoader*)sharedImageLoader;

- (BOOL)isLoadingImageURL:(NSURL*)aURL;

#if __EGOIL_USE_NOTIF
- (void)loadImageForURL:(NSURL*)aURL observer:(id<EGOImageLoaderObserver>)observer;
- (UIImage*)imageForURL:(NSURL*)aURL shouldLoadWithObserver:(id<EGOImageLoaderObserver>)observer;

- (void)removeObserver:(id<EGOImageLoaderObserver>)observer;
- (void)removeObserver:(id<EGOImageLoaderObserver>)observer forURL:(NSURL*)aURL;
#endif

#if __EGOIL_USE_BLOCKS
- (void)loadImageForURL:(NSURL*)aURL completion:(void (^)(UIImage* image, NSURL* imageURL, NSError* error))completion;
- (void)loadImageForURL:(NSURL*)aURL style:(NSString*)style styler:(UIImage* (^)(UIImage* image))styler completion:(void (^)(UIImage* image, NSURL* imageURL, NSError* error))completion;
#endif

- (BOOL)hasLoadedImageURL:(NSURL*)aURL;
- (void)cancelLoadForURL:(NSURL*)aURL;

- (void)clearCacheForURL:(NSURL*)aURL;
- (void)clearCacheForURL:(NSURL*)aURL style:(NSString*)style;

@property(nonatomic,retain) NSDictionary* currentConnections;
@end

@protocol EGOImageLoaderObserver<NSObject>
@optional
- (void)imageLoaderDidLoad:(NSNotification*)notification; // Object will be EGOImageLoader, userInfo will contain imageURL and image
- (void)imageLoaderDidFailToLoad:(NSNotification*)notification; // Object will be EGOImageLoader, userInfo will contain error
@end
