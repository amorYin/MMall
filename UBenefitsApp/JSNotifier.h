/*
 Copyright 2012 Jonah Siegle
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 JSNotifier 是一个 iOS 简单的通知信息提醒组件，可在界面顶部和底部显示提醒信息，支持不同风格的提醒，如操作成功、失败和警告信息。
 */

#import <Foundation/Foundation.h>

#import <QuartzCore/QuartzCore.h>


@interface JSNotifier : UIView{
    
    @protected
    UILabel *_txtLabel;
}


- (id)initWithTitle:(NSString *)title;

- (void)setAccessoryView:(UIView *)view animated:(BOOL)animated;

- (void)setTitle:(id)title animated:(BOOL)animated;

- (void)show;
- (void)showFor:(float)time;

- (void)hide;
- (void)hideIn:(float)seconds;

@property (nonatomic, strong) UIView *accessoryView;
@property (nonatomic, strong) NSString *title;

@end

