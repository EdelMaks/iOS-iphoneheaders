/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCMemoPlaybackViewController.h>
#import <VoiceMemos/RCAVPreviewControllerObserver.h>

@class NSTimer, UIButton, UIProgressView, RCSavedRecording;

@interface RCPlayMemoViewController : RCMemoPlaybackViewController <RCAVPreviewControllerObserver> {

	NSTimer* _playbackTimer;
	double _defaultVisibleDuration;
	UIButton* _beginTrimButton;
	UIButton* _cancelTrimButton;
	UIButton* _performTrimButton;
	bool _showTrimProgress;
	UIProgressView* _trimProgressView;
	bool _trimming;
	bool _trimmingEnabled;
	RCSavedRecording* _savedRecording;
	double _nextStartTime;
	/*^block*/ id _endTrimReloadDataSourceBlock;

}

@property (nonatomic,retain) RCSavedRecording * savedRecording;                          //@synthesize savedRecording=_savedRecording - In the implementation block
@property (assign,nonatomic) double nextStartTime;                                       //@synthesize nextStartTime=_nextStartTime - In the implementation block
@property (nonatomic,copy) id endTrimReloadDataSourceBlock;                              //@synthesize endTrimReloadDataSourceBlock=_endTrimReloadDataSourceBlock - In the implementation block
@property (assign,getter=isTrimming,nonatomic) bool trimming;                            //@synthesize trimming=_trimming - In the implementation block
@property (assign,getter=isTrimmingEnabled,nonatomic) bool trimmingEnabled;              //@synthesize trimmingEnabled=_trimmingEnabled - In the implementation block
-(void)commitEditing;
-(void)setCurrentTime:(double)arg1 ;
-(void)dealloc;
-(void)setDuration:(double)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)dismiss;
-(void).cxx_destruct;
-(id)previewController;
-(void)setTrimming:(bool)arg1 ;
-(bool)isTrimming;
-(void)updateNavigationItem;
-(void)previewController:(id)arg1 playbackDidStopPlayingWithError:(id)arg2 ;
-(void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2 ;
-(void)previewController:(id)arg1 playbackDidBeginWithRate:(float)arg2 ;
-(void)previewController:(id)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2 ;
-(void)setSavedRecording:(id)arg1 ;
-(id)savedRecording;
-(void)setScreenUpdatesDisabled:(bool)arg1 ;
-(void)_updateInterfaceForAVPlaybackState;
-(void)setPlaying:(bool)arg1 ;
-(void)_resumePlayback;
-(void)_pausePlayback;
-(SCD_Struct_RC0)_selectedTimeRange;
-(double)nextStartTime;
-(void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2 ;
-(void)setNextStartTime:(double)arg1 ;
-(long long)defaultControlsConfiguration;
-(id)recording;
-(void)setTrimmingEnabled:(bool)arg1 ;
-(void)_performTrim;
-(void)_cancelTrim;
-(void)_beginTrimmingAction;
-(void)_setPlaying:(bool)arg1 updatePlayer:(bool)arg2 ;
-(void)_updateTrimModeButtons;
-(void)_beginTrimming;
-(void)_endTrimming;
-(bool)_canTrimAsset;
-(/*^block*/ id)endTrimReloadDataSourceBlock;
-(void)setEndTrimReloadDataSourceBlock:(/*^block*/ id)arg1 ;
-(bool)_isSelectionTrimmable;
-(void)_deleteSelectedTimeRangeAsCopy:(bool)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_updateTrimProgress:(float)arg1 ;
-(id)initWithSavedRecording:(id)arg1 ;
-(void)updateTrimViews;
-(bool)isTrimmingEnabled;
@end

