/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIButton.h>

@class _UIBackdropView, UIScrollView, SBFGlintyStringView;

@interface TPButton : UIButton {

	int _color;
	_UIBackdropView* _backdropView;
	bool _blursBackground;
	bool _roundsCorners;
	bool _usesOverlayBlendingForContents;
	UIScrollView* _shineLabelScrollView;
	SBFGlintyStringView* _shineLabelView;

}

@property (assign,nonatomic) bool blursBackground;                             //@synthesize blursBackground=_blursBackground - In the implementation block
@property (assign,nonatomic) bool roundsCorners;                               //@synthesize roundsCorners=_roundsCorners - In the implementation block
@property (assign,nonatomic) bool usesOverlayBlendingForContents;              //@synthesize usesOverlayBlendingForContents=_usesOverlayBlendingForContents - In the implementation block
@property (retain) UIScrollView * shineLabelScrollView;                        //@synthesize shineLabelScrollView=_shineLabelScrollView - In the implementation block
@property (retain) SBFGlintyStringView * shineLabelView;                       //@synthesize shineLabelView=_shineLabelView - In the implementation block
+(double)defaultHeight;
+(id)declineButtonImage;
+(id)declineVideoButtonImage;
+(double)defaultHeightForColor:(int)arg1 ;
+(id)defaultStandardFont;
+(double)defaultWidthForSideButton;
+(double)defaultWidthForCenterButton;
+(double)maxWidthForCenterButton;
+(id)answerButtonImage;
+(id)acceptVideoButtonImage;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(bool)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(bool)arg1 ;
-(void)setSelected:(bool)arg1 ;
-(bool)blursBackground;
-(void)setBlursBackground:(bool)arg1 ;
-(int)buttonColor;
-(void)_animationWillBegin;
-(void)_animationDidEnd;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(CGRect)arg4 ;
-(void)setPlusSeparatedTitle:(id)arg1 ;
-(void)setRoundsCorners:(bool)arg1 ;
-(void)setButtonColor:(int)arg1 ;
-(id)shineLabelView;
-(void)setShineLabelScrollView:(id)arg1 ;
-(id)shineLabelScrollView;
-(void)setShineLabelView:(id)arg1 ;
-(void)setUsesSlidingShineLabelWithText:(id)arg1 ;
-(void)setShineLabelShouldAnimate:(bool)arg1 ;
-(void)setUsesOverlayBlendingForContents:(bool)arg1 ;
-(void)setMinimumTitleFontSize:(double)arg1 ;
-(void)setMinimumTitleFontSize:(double)arg1 maximumTitleFontSize:(double)arg2 ;
-(void)setTitleImagePadding:(double)arg1 ;
-(void)setIconVerticalOffset:(double)arg1 ;
-(void)setTitleVerticalOffset:(double)arg1 ;
-(void)setDisabledButtonColor:(int)arg1 ;
-(bool)roundsCorners;
-(bool)usesOverlayBlendingForContents;
@end
