/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>
#import <MediaPlayer/MPVolumeControllerDelegate.h>

@class UIView, NSTimer, UISlider, MPVolumeController;

@interface MPUMediaControlsVolumeView : UIView <MPVolumeControllerDelegate> {

	UIView* _warningView;
	bool _warningIndicatorBlinking;
	NSTimer* _warningBlinkTimer;
	NSTimer* _volumeCommitTimer;
	double _timeStoppedTracking;
	long long _style;
	UISlider* _slider;
	MPVolumeController* _volumeController;

}

@property (nonatomic,readonly) long long style;                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UISlider * slider;                                  //@synthesize slider=_slider - In the implementation block
@property (nonatomic,readonly) MPVolumeController * volumeController;              //@synthesize volumeController=_volumeController - In the implementation block
-(void)_layoutVolumeWarningView;
-(void)_beginBlinkingWarningView;
-(void)_blinkWarningView;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(bool)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void).cxx_destruct;
-(id)_createVolumeSliderView;
-(void)_volumeSliderBeganChanging:(id)arg1 ;
-(void)_volumeSliderValueChanged:(id)arg1 ;
-(void)_volumeSliderStoppedChanging:(id)arg1 ;
-(void)updateSystemVolumeLevel;
-(void)_stopBlinkingWarningView;
-(void)_stopVolumeCommitTimer;
-(bool)_shouldStartBlinkingVolumeWarningIndicator;
-(void)_beginVolumeCommitTimer;
-(bool)_volumeSliderDynamicsEnabled;
-(void)_removeVolumeSliderInertia;
-(void)_commitCurrentVolumeValue;
-(id)_warningTrackImage;
-(id)slider;
-(id)volumeController;
@end

