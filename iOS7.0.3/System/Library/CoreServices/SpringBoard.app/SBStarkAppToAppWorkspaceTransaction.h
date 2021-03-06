/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkToAppWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerDelegate.h>

@class SBApplication, SBUIAnimationController, BKSApplicationActivationAssertion;

@interface SBStarkAppToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerDelegate> {

	SBApplication* _fromApp;
	SBUIAnimationController* _animationController;
	BKSApplicationActivationAssertion* _suspendingAppAssertion;
	BOOL _animatedActivation;
	BOOL _animatedDeactivation;

}

@property (nonatomic,readonly) SBApplication * fromApp;              //@synthesize fromApp=_fromApp - In the implementation block
-(id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 from:(id)arg4 to:(id)arg5 ;
-(void)_doCommit;
-(id)fromApp;
-(int)_setupMilestonesFrom:(id)arg1 to:(id)arg2 ;
-(id)_newAnimationFromAppToApp;
-(id)_newAnimationFromAppToLauncher;
-(id)_newAnimationFromLauncherToApp;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_transactionComplete;
-(BOOL)selfApplicationDidBecomeReceiver:(id)arg1 fromApplication:(id)arg2 ;
-(BOOL)_canBeInterrupted;
-(void)_interruptWithReason:(int)arg1 ;
-(BOOL)selfApplicationWillBecomeReceiver:(id)arg1 fromApplication:(id)arg2 ;
-(BOOL)selfApplicationDidFinishLaunching:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)selfApplicationActivated:(id)arg1 ;
-(BOOL)selfApplicationLaunchDidFail:(id)arg1 ;
-(BOOL)selfApplicationExited:(id)arg1 ;
-(BOOL)selfAlertDidDeactivate:(id)arg1 ;
-(id)_setupAnimationFrom:(id)arg1 to:(id)arg2 ;
-(void)_handleAppDidNotChange;
-(void)_endAnimation;
-(void)_beginAnimation;
-(BOOL)selfStarkAlertDidDeactivate:(id)arg1 ;
-(void)_commit;
-(void)dealloc;
-(id)debugDescription;
-(id)_animation;
@end

