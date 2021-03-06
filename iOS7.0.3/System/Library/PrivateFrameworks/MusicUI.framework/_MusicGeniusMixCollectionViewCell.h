/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, NSMutableArray, UIImage, UIButton, NSString;

@interface _MusicGeniusMixCollectionViewCell : UICollectionViewCell {

	UILabel* _artistsLabel;
	UILabel* _basedOnLabel;
	NSMutableArray* _coverViews;
	UILabel* _titleLabel;
	BOOL _offline;
	BOOL _playing;
	UIImage* _combinedArtworkImage;
	UIButton* _playButton;

}

@property (nonatomic,retain) UIImage * combinedArtworkImage;              //@synthesize combinedArtworkImage=_combinedArtworkImage - In the implementation block
@property (nonatomic,copy) NSString * artistsText; 
@property (nonatomic,readonly) UIButton * playButton;                     //@synthesize playButton=_playButton - In the implementation block
@property (assign,getter=isOffline,nonatomic) BOOL offline;               //@synthesize offline=_offline - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;               //@synthesize playing=_playing - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(id)playButton;
-(BOOL)isPlaying;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(BOOL)isOffline;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setCombinedArtworkImage:(id)arg1 ;
-(void)setOffline:(BOOL)arg1 ;
-(void)setArtistsText:(id)arg1 ;
-(void)setPlaying:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_pressedPlayButtonImage;
-(void)_updateCoverViewsAlpha;
-(id)artistsText;
-(void)_updatePlayButtonAlpha;
-(id)combinedArtworkImage;
-(void).cxx_destruct;
@end

