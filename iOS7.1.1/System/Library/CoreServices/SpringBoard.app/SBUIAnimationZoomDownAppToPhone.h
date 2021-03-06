/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:55 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomDownApp.h>

@interface SBUIAnimationZoomDownAppToPhone : SBUIAnimationZoomDownApp {

	BOOL _usingSuperZoomImplementation;
	BOOL _fromPhoneAppToFaceTimeAppDuringCall;

}
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)_animationProgressDependency;
-(BOOL)_animationShouldStart;
-(void)_applicationDependencyStateChanged;
-(void)animateZoomWithCompletion:(/*^block*/ id)arg1 ;
-(id)appStatusBarTransitionInfoWithStartEffectivelyHidden:(BOOL)arg1 endStyleRequest:(id)arg2 endOrientation:(int)arg3 ;
-(void)_cleanupPhonesContextHostView;
-(BOOL)_shouldZoomUsingSuperImplementation;
-(void)dealloc;
-(void)_startAnimation;
@end

