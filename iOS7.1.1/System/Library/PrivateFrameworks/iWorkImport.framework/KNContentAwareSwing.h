/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNContentAwareMagicMoveSuperset.h>
#import <iWorkImport/KNContentAwareTransitionAnimator.h>
#import <iWorkImport/KNContentAwareFrameAnimator.h>

@class KNMotionBlurAnimationPluginWrapper;

@interface KNContentAwareSwing : KNContentAwareMagicMoveSuperset <KNContentAwareTransitionAnimator, KNContentAwareFrameAnimator> {

	KNMotionBlurAnimationPluginWrapper* _motionBlurWrapper;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(int)rendererTypeForCapabilities:(id)arg1 ;
+(bool)isCharacterAwareEffect;
+(bool)requiresBullets;
+(bool)requiresMagicMoveTextures;
+(bool)requiresPerspectiveTransform;
+(id)defaultAttributes;
+(id)animationName;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(id)animationsWithContext:(id)arg1 ;
-(void)dealloc;
@end
