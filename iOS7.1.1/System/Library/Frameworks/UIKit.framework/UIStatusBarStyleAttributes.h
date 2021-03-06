/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIStatusBarStyleRequest, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarStyleAttributes : NSObject {

	UIStatusBarStyleRequest* _request;
	UIStatusBarForegroundStyleAttributes* _foregroundStyle;

}
-(void)dealloc;
-(id)init;
-(bool)isTranslucent;
-(double)heightForOrientation:(long long)arg1 ;
-(long long)style;
-(bool)isDoubleHeight;
-(id)foregroundStyle;
-(long long)legibilityStyle;
-(id)newForegroundStyleWithHeight:(double)arg1 ;
-(double)foregroundAlpha;
-(id)initWithRequest:(id)arg1 ;
-(int)cornerStyle;
-(id)backgroundImageName;
-(bool)areTopCornersRounded;
-(id)backgroundColorWithTintColor:(id)arg1 ;
-(long long)idiom;
-(bool)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2 ;
-(double)heightForMetrics:(long long)arg1 ;
-(bool)isTransparent;
-(bool)shouldUseVisualAltitude;
-(double)glowAnimationDuration;
-(bool)usesVerticalLayout;
-(bool)supportsRasterization;
-(long long)tapButtonType;
@end

