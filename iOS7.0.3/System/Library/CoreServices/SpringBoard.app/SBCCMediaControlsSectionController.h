/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBControlCenterSectionViewController.h>
#import <NowPlayingArtLockScreen/MPUSystemMediaControlsDelegate.h>

@class MPUSystemMediaControlsViewController;

@interface SBCCMediaControlsSectionController : SBControlCenterSectionViewController <MPUSystemMediaControlsDelegate> {

	MPUSystemMediaControlsViewController* _systemMediaViewController;

}
-(CGSize)contentSizeForOrientation:(int)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)sectionIdentifier;
-(void)systemMediaControlsViewController:(id)arg1 didReceiveTapOnControlType:(int)arg2 ;
@end

