/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKPlayerOwnedListCacheObject.h>

@interface GKFriendListCacheObject : GKPlayerOwnedListCacheObject

@property (assign,nonatomic,@dynamic) BOOL common; 
+(Class)entryClass;
+(id)cacheFriendList:(id)arg1 withTimeToLive:(double)arg2 forProfile:(id)arg3 managedObjectContext:(id)arg4 commonFriends:(BOOL)arg5 ;
+(id)entityName;
-(void)populateFriendNamesFromServerRepresentationDictionary:(id)arg1 ;
-(id)internalRepresentation;
-(id)playerIDs;
@end
