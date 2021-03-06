/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUIService/GameCenterUIService-Structs.h>
#import <GameCenterUI/GKHeaderWithUnderlineView.h>

@class GKGame, GKLabel, UIImageView;

@interface GKChallengeHeaderCell : GKHeaderWithUnderlineView {

	BOOL _allSectionItemsVisible;
	GKGame* _game;
	GKLabel* _gameNameLabel;
	unsigned _itemCount;
	UIImageView* _gameIconView;
	int _sectionIndex;

}

@property (nonatomic,retain) GKGame * game;                            //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKLabel * gameNameLabel;                  //@synthesize gameNameLabel=_gameNameLabel - In the implementation block
@property (assign,nonatomic) BOOL allSectionItemsVisible;              //@synthesize allSectionItemsVisible=_allSectionItemsVisible - In the implementation block
@property (assign,nonatomic) unsigned itemCount;                       //@synthesize itemCount=_itemCount - In the implementation block
@property (nonatomic,retain) UIImageView * gameIconView;               //@synthesize gameIconView=_gameIconView - In the implementation block
@property (assign,nonatomic) int sectionIndex;                         //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(id)gameIconView;
-(void)updateCountWithDataSource:(id)arg1 ;
-(id)gameNameLabel;
-(void)setGameNameLabel:(id)arg1 ;
-(void)setGameIconView:(id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(BOOL)allSectionItemsVisible;
-(void)setItemCount:(unsigned)arg1 ;
-(void)setAllSectionItemsVisible:(BOOL)arg1 ;
-(unsigned)itemCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)applyLayoutAttributes:(id)arg1 ;
-(int)sectionIndex;
-(void)setSectionIndex:(int)arg1 ;
@end

