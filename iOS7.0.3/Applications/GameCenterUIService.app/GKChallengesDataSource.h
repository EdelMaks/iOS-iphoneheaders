/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKCollectionViewDataSource.h>

@class GKGame, GKPlayer, NSMutableOrderedSet, NSMutableDictionary;

@interface GKChallengesDataSource : GKCollectionViewDataSource {

	GKGame* _game;
	GKPlayer* _player;
	NSMutableOrderedSet* _games;
	NSMutableDictionary* _bundleIDsToChallenges;

}

@property (nonatomic,retain) GKGame * game;                                            //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * games;                              //@synthesize games=_games - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bundleIDsToChallenges;              //@synthesize bundleIDsToChallenges=_bundleIDsToChallenges - In the implementation block
+(id)challengesDataSourceForPlayer:(id)arg1 inGame:(id)arg2 ;
+(id)challengesDataSourceForPlayer:(id)arg1 ;
-(id)games;
-(void)setGames:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 game:(id)arg2 ;
-(void)setBundleIDsToChallenges:(id)arg1 ;
-(void)_evaluateGame:(id)arg1 withOldOrder:(id)arg2 newOrder:(id)arg3 oldLookup:(id)arg4 newLookup:(id)arg5 ;
-(void)_evaluateChallenge:(id)arg1 withOldChallenges:(id)arg2 newChallenges:(id)arg3 oldSection:(unsigned)arg4 newSection:(unsigned)arg5 ;
-(id)gameForSection:(unsigned)arg1 ;
-(id)itemsForLookup:(id)arg1 order:(id)arg2 ;
-(id)bundleIDsToChallenges;
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(id)indexPathsForItem:(id)arg1 ;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

