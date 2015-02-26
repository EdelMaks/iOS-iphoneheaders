/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@protocol FBWindowContextAppearance;
@class SBLockScreenViewControllerBase, UIView;

@interface SBUIAnimationPhoneToLockScreenBase : SBUIMainScreenAnimationController {

	SBLockScreenViewControllerBase* _lockScreenViewController;
	UIView*<FBWindowContextAppearance> _contextHostView;
	BOOL _needsScreenDim;

}

@property (setter=_setContextHostView:,getter=_contextHostView,nonatomic,retain) UIView * contextHostView;              //@synthesize contextHostView=_contextHostView - In the implementation block
-(void)_prepareAnimation;
-(id)_lockScreenViewController;
-(id)_contextHostView;
-(void)_noteAnimationDidFinish;
-(id)_getTransitionWindow;
-(BOOL)_shouldHideContextHostViewStatusBar;
-(void)_cleanupAnimation;
-(id)initWithLockScreenController:(id)arg1 deactivatingApp:(id)arg2 ;
-(void)_setContextHostView:(id)arg1 ;
-(void)dealloc;
-(void)_setHidden:(BOOL)arg1 ;
@end
