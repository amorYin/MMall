/*
     File: IconDownloader.h 
 Abstract: Helper object for managing the downloading of a particular app's icon.
 As a delegate "NSURLConnectionDelegate" is downloads the app icon in the background if it does not
 yet exist and works in conjunction with the RootViewController to manage which apps need their icon.
 
 A simple BOOL tracks whether or not a download is already in progress to avoid redundant requests.
  
  Version: 1.2 
  
 Disclaimer: IMPORTANT:  This Apple software is supplied to you by Apple 
 Inc. ("Apple") in consideration of your agreement to the following 
 terms, and your use, installation, modification or redistribution of 
 this Apple software constitutes acceptance of these terms.  If you do 
 not agree with these terms, please do not use, install, modify or 
 redistribute this Apple software. 
  
 In consideration of your agreement to abide by the following terms, and 
 subject to these terms, Apple grants you a personal, non-exclusive 
 license, under Apple's copyrights in this original Apple software (the 
 "Apple Software"), to use, reproduce, modify and redistribute the Apple 
 Software, with or without modifications, in source and/or binary forms; 
 provided that if you redistribute the Apple Software in its entirety and 
 without modifications, you must retain this notice and the following 
 text and disclaimers in all such redistributions of the Apple Software. 
 Neither the name, trademarks, service marks or logos of Apple Inc. may 
 be used to endorse or promote products derived from the Apple Software 
 without specific prior written permission from Apple.  Except as 
 expressly stated in this notice, no other rights or licenses, express or 
 implied, are granted by Apple herein, including but not limited to any 
 patent rights that may be infringed by your derivative works or by other 
 works in which the Apple Software may be incorporated. 
  
 The Apple Software is provided by Apple on an "AS IS" basis.  APPLE 
 MAKES NO WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION 
 THE IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS 
 FOR A PARTICULAR PURPOSE, REGARDING THE APPLE SOFTWARE OR ITS USE AND 
 OPERATION ALONE OR IN COMBINATION WITH YOUR PRODUCTS. 
  
 IN NO EVENT SHALL APPLE BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL 
 OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
 SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
 INTERRUPTION) ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION, 
 MODIFICATION AND/OR DISTRIBUTION OF THE APPLE SOFTWARE, HOWEVER CAUSED 
 AND WHETHER UNDER THEORY OF CONTRACT, TORT (INCLUDING NEGLIGENCE), 
 STRICT LIABILITY OR OTHERWISE, EVEN IF APPLE HAS BEEN ADVISED OF THE 
 POSSIBILITY OF SUCH DAMAGE. 
  
 Copyright (C) 2010 Apple Inc. All Rights Reserved. 
 一个tableView 列表，左边暂时没有图
 - (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
 {
 static NSString *CellIdentifier = @"myCell";
 
 UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
 if (cell == nil)
 {
 cell = [[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle
 reuseIdentifier:CellIdentifier] autorelease];
 cell.selectionStyle = UITableViewCellSelectionStyleNone;
 }
 
 
 // 设置cell一些数据
 AppRecord *appRecord = [self.entries objectAtIndex:indexPath.row];
 
 cell.textLabel.text = appRecord.appName;
 cell.detailTextLabel.text = appRecord.artist;
 
 // 如果不存在图片
 if (!appRecord.appIcon)
 {
 if (self.tableView.dragging == NO && self.tableView.decelerating == NO)//不在拖动中和减速时，开始下载图片
 {
 [self startIconDownload:appRecord forIndexPath:indexPath];
 }
 //设置图片为空白图片（等待下载）
 cell.imageView.image = [UIImage imageNamed:@"Placeholder.png"];
 }
 //如果有图片
 else
 {
 cell.imageView.image = appRecord.appIcon;
 }
 
 
 return cell;
 }
 
 关键就是[self startIconDownload:appRecord forIndexPath:indexPath];
 - (void)startIconDownload:(AppRecord *)appRecord forIndexPath:(NSIndexPath *)indexPath
 {
 IconDownloader *iconDownloader = [imageDownloadsInProgress objectForKey:indexPath];
 if (iconDownloader == nil) //已经在下载中的不用重复下载了，没有在下载中就往下走
 {
 iconDownloader = [[IconDownloader alloc] init];
 iconDownloader.appRecord = appRecord;
 iconDownloader.indexPathInTableView = indexPath;
 iconDownloader.delegate = self;
 [imageDownloadsInProgress setObject:iconDownloader forKey:indexPath];
 [iconDownloader startDownload];
 [iconDownloader release];
 }
 }
 
 IconDownloader 是一个下载图片封装类
 关键方法：iconDownloader.delegate = self;
 [iconDownloader startDownload];
 
 一个是委托，将来告诉self下载完成更新图片
 一个是自己方法开始联网下载图片
 
 委托调用方法，重设图片
 - (void)appImageDidLoad:(NSIndexPath *)indexPath
 {
 IconDownloader *iconDownloader = [imageDownloadsInProgress objectForKey:indexPath];
 if (iconDownloader != nil)
 {
 UITableViewCell *cell = [self.tableView cellForRowAtIndexPath:iconDownloader.indexPathInTableView];
 
 cell.imageView.image = iconDownloader.appRecord.appIcon;
 }
 }
 
 类IconDownloader 中的方法
 - (void)startDownload
 {
 self.activeDownload = [NSMutableData data];
 
 NSURLConnection *conn = [[NSURLConnection alloc] initWithRequest:
 [NSURLRequest requestWithURL:
 [NSURL URLWithString:appRecord.imageURLString]] delegate:self];
 self.imageConnection = conn;
 [conn release];
 }
 
 最后 NSURLConnection的委托需要自己实现了。
 */

#import "ImgRecord.h"

@protocol IconDownloaderDelegate;

@interface IconDownloader : NSObject

@property (nonatomic, retain) ImgRecord * imgRecord;
@property (nonatomic, copy) NSString * index;
@property (nonatomic, assign) id<IconDownloaderDelegate> delegate;
@property (nonatomic, retain) NSMutableData * activeDownload;
@property (nonatomic, retain) NSURLConnection * imageConnection;
@property BOOL isFree;

- (void)startDownload;
- (void)cancelDownload;

@end

@protocol IconDownloaderDelegate 

- (void)appImageDidLoad:(NSString *)index;

@end