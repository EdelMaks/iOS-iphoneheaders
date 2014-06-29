/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GuidedAccess/GuidedAccess-Structs.h>
@class NSBundle, NSMutableDictionary, UIColor, UIFont, NSDictionary, UIImage;

@interface GAXStyleProvider : NSObject {

	NSBundle* _bundle;
	NSMutableDictionary* _cachedStyleProperties;

}

@property (nonatomic,readonly) double defaultAnimationDuration; 
@property (nonatomic,readonly) double fastAnimationDuration; 
@property (nonatomic,readonly) double applicationViewRoundedCornerRadius; 
@property (nonatomic,readonly) UIColor * defaultButtonTitleColor; 
@property (nonatomic,readonly) UIColor * defaultLabelTextColor; 
@property (nonatomic,readonly) UIColor * defaultLabelBackgroundColor; 
@property (nonatomic,readonly) UIFont * workspaceNavigationBarTitleFont; 
@property (nonatomic,readonly) double workspaceNavigationBarDismissButtonMinimumWidth; 
@property (nonatomic,readonly) bool workspaceNavigationBarNeedsMiniMetricsInitialized; 
@property (nonatomic,readonly) NSDictionary * workspaceNavigationBarButtonTextAttributes; 
@property (nonatomic,readonly) UIFont * workspaceInstructionsLabelFont; 
@property (nonatomic,readonly) UIEdgeInsets workspaceInstructionsLabelEdgeInsets; 
@property (nonatomic,readonly) bool workspaceInstructionsLabelShouldBeDisplayed; 
@property (nonatomic,readonly) bool workspaceInstructionsLabelShouldUseCompactTextInPortraitOrientation; 
@property (nonatomic,readonly) bool workspaceInstructionsLabelShouldUseCompactTextInLandscapeOrientation; 
@property (nonatomic,readonly) UIColor * applicationScreenshotShadowColor; 
@property (nonatomic,readonly) double interestAreaViewSnapAnimationDuration; 
@property (nonatomic,readonly) UIColor * interestAreaViewBackgroundColor; 
@property (nonatomic,readonly) UIImage * interestAreaViewBackgroundHatchingTexture; 
@property (nonatomic,readonly) double interestAreaViewBackgroundHatchingTextureAlpha; 
@property (nonatomic,readonly) double interestAreaViewBackgroundStripePatternAlpha; 
@property (nonatomic,readonly) UIColor * interestAreaViewFingerPathStrokeColor; 
@property (nonatomic,readonly) double interestAreaViewFingerPathLineWidth; 
@property (nonatomic,readonly) UIImage * interestAreaViewCloseButtonImage; 
@property (nonatomic,readonly) UIImage * interestAreaViewResizingKnobButtonImage; 
@property (nonatomic,readonly) CGSize minimumSizeForInterestAreaPath; 
@property (nonatomic,readonly) double marginOfErrorForDecidingToMergeInterestAreaPaths; 
@property (nonatomic,readonly) double featureViewControllerHeight; 
@property (nonatomic,readonly) double featureViewControllerMiniHeight; 
@property (nonatomic,readonly) UIFont * featureViewControllerInstructionsFont; 
@property (nonatomic,readonly) UIColor * featureViewControllerInstructionsColor; 
@property (nonatomic,readonly) double featureViewControllerInstructionsHorizontalOffset; 
@property (nonatomic,readonly) double featureViewControllerInstructionsMiniHorizontalOffset; 
@property (nonatomic,readonly) double featureViewControllerLandscapeGutterWidth; 
@property (nonatomic,readonly) double featureViewControllerMinimimGutterWidth; 
@property (nonatomic,readonly) double featureViewControllerMinimumHorizontalSpacing; 
@property (nonatomic,readonly) UIFont * featureViewControllerOptionsButtonFont; 
@property (nonatomic,readonly) UIOffset featureViewControllerOptionsButtonMiniOffset; 
@property (nonatomic,readonly) UIOffset featureViewControllerOptionsButtonOffset; 
@property (nonatomic,readonly) double featureViewControllerOptionsButtonTitleHorizontalPadding; 
@property (nonatomic,readonly) UIFont * featureViewControllerOptionsCellTextFont; 
@property (nonatomic,readonly) double featureViewControllerPortraitGutterWidth; 
@property (nonatomic,readonly) double featureViewControllerVerticalOffset; 
@property (nonatomic,readonly) UIFont * featureViewDetailTextFont; 
@property (nonatomic,readonly) UIEdgeInsets featureViewFrameEdgeInsets; 
@property (nonatomic,readonly) double featureViewIconAlpha; 
@property (nonatomic,readonly) UIColor * featureViewIconColor; 
@property (nonatomic,readonly) CGSize featureViewMaximumIconSize; 
@property (nonatomic,readonly) double featureViewMinimumHeight; 
@property (nonatomic,readonly) UIFont * featureViewOptionsButtonFont; 
@property (nonatomic,readonly) double featureViewOptionsButtonHeight; 
@property (nonatomic,readonly) UIColor * featureViewOptionsButtonLineColor; 
@property (nonatomic,readonly) double featureViewOptionsButtonLineWidth; 
@property (nonatomic,readonly) UIOffset featureViewOptionsButtonOffset; 
@property (nonatomic,readonly) double featureViewOptionsButtonTitleHorizontalPadding; 
@property (nonatomic,readonly) UIColor * featureViewTextColor; 
@property (nonatomic,readonly) UIFont * featureViewTextFont; 
@property (nonatomic,readonly) double featureViewTextHorizontalPadding; 
@property (nonatomic,readonly) UIOffset featureViewToggleOffset; 
@property (nonatomic,readonly) UIImage * appFeatureViewDefineIcon; 
@property (nonatomic,readonly) CGSize appFeatureViewIconSize; 
@property (nonatomic,readonly) UIImage * hardwareFeatureViewHomeIcon; 
@property (nonatomic,readonly) UIImage * hardwareFeatureViewLockIcon; 
@property (nonatomic,readonly) UIImage * hardwareFeatureViewVolumeIcon; 
@property (nonatomic,readonly) UIOffset optionsFeatureViewTextOffset; 
@property (nonatomic,readonly) UIImage * systemFeatureViewMotionIcon; 
@property (nonatomic,readonly) UIOffset systemFeatureViewMotionTextOffset; 
@property (nonatomic,readonly) UIImage * systemFeatureViewTouchIcon; 
@property (nonatomic,readonly) UIOffset systemFeatureViewTouchTextOffset; 
@property (nonatomic,readonly) UIColor * optionsDoneButtonBackgroundColor; 
@property (nonatomic,readonly) UIColor * optionsDoneButtonBackgroundHighlightedColor; 
@property (nonatomic,readonly) UIFont * optionsDoneButtonFont; 
@property (nonatomic,readonly) double optionsDoneButtonHeight; 
@property (nonatomic,readonly) UIColor * optionsViewBackgroundDimmingColor; 
@property (nonatomic,readonly) double optionsViewFeaturesContentViewGradientHeight; 
@property (nonatomic,readonly) double optionsViewSeparatorHeight; 
@property (nonatomic,readonly) double optionsViewSeparatorHorizontalPadding; 
@property (nonatomic,readonly) double optionsViewSeparatorVerticalPadding; 
@property (nonatomic,retain) NSBundle * bundle;                                                                        //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedStyleProperties;                                              //@synthesize cachedStyleProperties=_cachedStyleProperties - In the implementation block
+(id)allocWithZone:(NSZone)arg1 ;
-(id)featureViewIconColor;
-(double)applicationViewRoundedCornerRadius;
-(id)interestAreaViewBackgroundColor;
-(id)interestAreaViewBackgroundHatchingTexture;
-(double)interestAreaViewBackgroundHatchingTextureAlpha;
-(id)defaultLabelBackgroundColor;
-(id)appFeatureViewDefineIcon;
-(double)featureViewOptionsButtonLineWidth;
-(id)featureViewOptionsButtonLineColor;
-(double)interestAreaViewBackgroundStripePatternAlpha;
-(id)_regularLabelFontWithSize:(double)arg1 ;
-(id)_mediumLabelFontWithSize:(double)arg1 ;
-(id)_cachedIconWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
-(void)setCachedStyleProperties:(id)arg1 ;
-(double)featureViewOptionsButtonHeight;
-(id)_boldLabelFontWithSize:(double)arg1 ;
-(id)_lightLabelFontWithSize:(double)arg1 ;
-(id)cachedStyleProperties;
-(id)interestAreaViewResizingKnobButtonImage;
-(id)interestAreaViewCloseButtonImage;
-(double)interestAreaViewFingerPathLineWidth;
-(id)interestAreaViewFingerPathStrokeColor;
-(double)interestAreaViewSnapAnimationDuration;
-(double)marginOfErrorForDecidingToMergeInterestAreaPaths;
-(CGSize)minimumSizeForInterestAreaPath;
-(bool)workspaceNavigationBarNeedsMiniMetricsInitialized;
-(bool)workspaceInstructionsLabelShouldBeDisplayed;
-(id)workspaceInstructionsLabelFont;
-(UIEdgeInsets)applicationScreenshotScaledFrameEdgeInsetsForInterfaceOrientation:(long long)arg1 ;
-(UIEdgeInsets)workspaceInstructionsLabelEdgeInsets;
-(id)workspaceNavigationBarTitleFont;
-(id)workspaceNavigationBarButtonTextAttributes;
-(double)workspaceNavigationBarDismissButtonMinimumWidth;
-(id)applicationScreenshotShadowColor;
-(CGSize)appFeatureViewIconSize;
-(UIOffset)optionsFeatureViewTextOffset;
-(id)hardwareFeatureViewHomeIcon;
-(double)featureViewControllerVerticalOffset;
-(double)featureViewControllerLandscapeGutterWidth;
-(double)featureViewControllerPortraitGutterWidth;
-(double)featureViewControllerMinimimGutterWidth;
-(double)featureViewControllerMinimumHorizontalSpacing;
-(double)featureViewControllerInstructionsMiniHorizontalOffset;
-(double)featureViewControllerInstructionsHorizontalOffset;
-(UIOffset)featureViewControllerOptionsButtonMiniOffset;
-(UIOffset)featureViewControllerOptionsButtonOffset;
-(double)featureViewControllerMiniHeight;
-(double)featureViewControllerHeight;
-(id)featureViewControllerInstructionsFont;
-(id)featureViewControllerInstructionsColor;
-(id)featureViewControllerOptionsButtonFont;
-(double)featureViewControllerOptionsButtonTitleHorizontalPadding;
-(id)optionsViewBackgroundDimmingColor;
-(UIEdgeInsets)featureViewFrameEdgeInsets;
-(double)optionsViewSeparatorVerticalPadding;
-(double)featureViewMinimumHeight;
-(double)optionsViewSeparatorHeight;
-(double)optionsViewSeparatorHorizontalPadding;
-(double)optionsDoneButtonHeight;
-(double)optionsViewFeaturesContentViewGradientHeight;
-(id)optionsDoneButtonBackgroundColor;
-(id)optionsDoneButtonFont;
-(id)optionsDoneButtonBackgroundHighlightedColor;
-(id)featureViewControllerOptionsCellTextFont;
-(id)featureViewOptionsButtonFont;
-(id)featureViewTextFont;
-(UIOffset)featureViewOptionsButtonOffset;
-(double)featureViewOptionsButtonTitleHorizontalPadding;
-(UIOffset)featureViewToggleOffset;
-(CGSize)featureViewMaximumIconSize;
-(double)featureViewIconAlpha;
-(id)featureViewTextColor;
-(id)featureViewDetailTextFont;
-(double)featureViewTextHorizontalPadding;
-(double)fastAnimationDuration;
-(id)defaultButtonTitleColor;
-(bool)workspaceInstructionsLabelShouldUseCompactTextInPortraitOrientation;
-(bool)workspaceInstructionsLabelShouldUseCompactTextInLandscapeOrientation;
-(id)hardwareFeatureViewLockIcon;
-(id)hardwareFeatureViewVolumeIcon;
-(id)systemFeatureViewMotionIcon;
-(UIOffset)systemFeatureViewMotionTextOffset;
-(id)systemFeatureViewTouchIcon;
-(UIOffset)systemFeatureViewTouchTextOffset;
-(double)defaultAnimationDuration;
-(id)defaultLabelTextColor;
-(void)dealloc;
-(id)init;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(id)bundle;
-(void)setBundle:(id)arg1 ;
-(id)_cachedStyleObjectForPropertyWithSelector:(SEL)arg1 ;
-(void)_setCachedStyleObject:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
-(id)_cachedImageWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
@end
