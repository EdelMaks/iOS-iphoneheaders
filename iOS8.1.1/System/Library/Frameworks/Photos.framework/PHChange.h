/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSSet, NSDictionary, NSArray, NSMutableDictionary, NSObject, NSMapTable;

@interface PHChange : NSObject {

	NSSet* _insertedObjectIDs;
	NSSet* _changedObjectIDs;
	NSSet* _deletedObjectIDs;
	NSDictionary* _changedAttributesByOID;
	NSDictionary* _changedRelationshipsByOID;
	NSArray* _changedObjectIDsArray;
	NSMutableDictionary* _changeDetailsForObjects;
	NSMutableDictionary* _collectionChangeDetailsForObjects;
	NSObject*<OS_dispatch_queue> _changeDetailIsolation;
	NSMapTable* _changeHandlingMap;
	BOOL _unknownMergeEvent;

}
+(void)pl_simulateChangeWithAssetContainerList:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)handlerQueue;
-(id)insertedObjectIDs;
-(id)updatedObjectIDs;
-(id)deletedObjectIDs;
-(void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(BOOL)arg2 ;
-(void)preloadChangeDetailsForFetchResults:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)changeDetailsForObject:(id)arg1 ;
-(id)changeDetailsForFetchResult:(id)arg1 ;
-(BOOL)contentChangedForPHAssetOID:(id)arg1 ;
-(id)init;
-(id)description;
@end

