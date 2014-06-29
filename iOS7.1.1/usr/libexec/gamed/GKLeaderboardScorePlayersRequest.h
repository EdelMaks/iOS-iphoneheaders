/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKLeaderboardScoreRequest.h>

@class NSArray;

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest {

	NSArray* _playerIDs;

}

@property (nonatomic,copy) NSArray * playerIDs;              //@synthesize playerIDs=_playerIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)fetchScoresForClient:(id)arg1 context:(id)arg2 serverResponse:(id)arg3 timeToLive:(double)arg4 handler:(/*^block*/ id)arg5 ;
-(void)loadScoresForClient:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(id)resourceIdentifier;
-(id)_scoreForServerRepresentation:(id)arg1 leaderboard:(id)arg2 ;
-(id)serverRequest;
-(id)bagKey;
-(void)setPlayerIDs:(id)arg1 ;
-(id)playerIDs;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
