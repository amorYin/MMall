//
//  RTLabel.h
//  RTLabelProject
//
/**
 * Copyright (c) 2010 Muh Hon Cheng
 * Created by honcheng on 1/6/11.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining 
 * a copy of this software and associated documentation files (the 
 * "Software"), to deal in the Software without restriction, including 
 * without limitation the rights to use, copy, modify, merge, publish, 
 * distribute, sublicense, and/or sell copies of the Software, and to 
 * permit persons to whom the Software is furnished to do so, subject 
 * to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be 
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT 
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR 
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT 
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE 
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR 
 * IN CONNECTION WITH THE SOFTWARE OR 
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * RTLabel 基于UILabel类的拓展,能够支持Html标记的富文本显示，它是基于Core Text,因此也支持Core Text上的一些东西。
 
 特点
 粗体和斜体
 颜色和大小
 下划线
 缩进
 字距
 行距
 超链接
 
 用法
 1）将RTLabel.h 和 RTLabel.m 拖拽道你的工程中，导入Core Text.framework。添加头文件
 [cpp] view plaincopy
 #import "RTLabel.h"
 
 2)创建一个RTLabel
 [cpp] view plaincopy
 NSString *sample_text = @"<b>bold</b>,<i>italic</i> and <u>underlined</u> text, and <font face='HelveticaNeue-CondensedBold' size=20 color='#CCFF00'>text with custom font and color</font>";
 
 RTLabel *label = [[RTLabel alloc] initWithFrame:...];
 [self addSubview:label];
 [label setText:sample_text];
 
 3)支持以下标签
 [html] view plaincopy
 <b>Bold</b>
 <i>Italic</i>
 <bi>Bold & Italic</bi>
 <u>underline</u>, <u color=red>underline with color</u>
 <a href='http://..'>link</a>
 <uu>double underline</uu> , <uu color='#ccff00'>double underline with color</uu>
 <font face='HelveticaNeue-CondensedBold' size=20 color='#CCFF00'>custom font</font>
 <font face='HelveticaNeue-CondensedBold' size=20 color='#CCFF00' stroke=1>custom font with strokes</font>
 <font face='HelveticaNeue-CondensedBold' size=20 color='#CCFF00' kern=35>custom font with kerning</font>
 <p align=justify>alignment</p>
 <p indent=20>indentation</p>
 * @author 		Muh Hon Cheng <honcheng@gmail.com>
 * @copyright	2011	Muh Hon Cheng
 * @version
 * 
 */

#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>

typedef enum
{
	RTTextAlignmentRight = kCTRightTextAlignment,
	RTTextAlignmentLeft = kCTLeftTextAlignment,
	RTTextAlignmentCenter = kCTCenterTextAlignment,
	RTTextAlignmentJustify = kCTJustifiedTextAlignment
} RTTextAlignment;

typedef enum
{
	RTTextLineBreakModeWordWrapping = kCTLineBreakByWordWrapping,
	RTTextLineBreakModeCharWrapping = kCTLineBreakByCharWrapping,
	RTTextLineBreakModeClip = kCTLineBreakByClipping,
}RTTextLineBreakMode;

@protocol RTLabelDelegate <NSObject>

- (void)rtLabel:(id)rtLabel didSelectLinkWithURL:(NSURL*)url;

@end

@interface RTLabel : UIView {
	NSString *_text;
	UIFont *font;
	UIColor *textColor;
	RTTextAlignment _textAlignment;
	RTTextLineBreakMode _lineBreakMode;
	NSString *_plainText;
	NSMutableArray *_textComponents;
	CGSize _optimumSize;
	CGFloat _lineSpacing;
	int currentSelectedButtonComponentIndex;
	NSDictionary *linkAttributes;
    NSDictionary *selectedLinkAttributes;
	id<RTLabelDelegate> delegate;
	CTFrameRef frame;
    CFRange visibleRange;
    NSString *paragraphReplacement;
}

@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) NSDictionary *linkAttributes;
@property (nonatomic, retain) NSDictionary *selectedLinkAttributes;
@property (nonatomic, assign) id<RTLabelDelegate> delegate;
@property (nonatomic, copy) NSString *paragraphReplacement;

- (NSString*)text;
- (void)setText:(NSString*)text;

- (void)setTextAlignment:(RTTextAlignment)textAlignment;
- (void)setLineBreakMode:(RTTextLineBreakMode)lineBreakMode;

- (CGSize)optimumSize;
- (void)setLineSpacing:(CGFloat)lineSpacing;
- (NSString*)visibleText;

@end
