/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/Support/assetsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <assetsd/assetsd-Structs.h>
@class NSObject, PLChangeStore;

@interface PLChangeHub : NSObject {

	int _notifyToken;
	BOOL _didInitializeState;
	CFArrayRef _connections;
	NSObject*<OS_dispatch_queue> eventsSerialization;
	NSObject*<OS_dispatch_queue> connectionsIsolation;
	PLChangeStore* changeStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> eventsSerialization; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionsIsolation; 
@property (assign,nonatomic) CFArrayRef connections;                                         //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) PLChangeStore * changeStore; 
+(BOOL)isEmptyEvent:(id)arg1 ;
+(id)cplManager;
+(BOOL)cplManagerIsAvailable;
+(void)processCloudPhotosLibraryStateChange:(BOOL)arg1 ;
+(void)handleCorruptChangeStore:(/*^block*/id)arg1 ;
+(BOOL)fileMarkerDetected;
+(void)_performOnceLibraryIsReadyForCPLManager:(/*^block*/id)arg1 ;
+(BOOL)_isAssetsdReadyForCPLManager;
+(void)_stopWaitingForLibraryToBeReadyForCPLManager;
+(void)pauseCloudPhotos:(BOOL)arg1 ;
+(void)startServer;
+(void)distributeChangeEvent:(id)arg1 transaction:(id)arg2 ;
+(void)_clearChangeStore;
-(void)processRequest:(id)arg1 fromConnection:(id)arg2 ;
-(void)sendPendingEventsForRequest:(id)arg1 toConnection:(id)arg2 ;
-(void)sendLastEventIndexForRequest:(id)arg1 toConnection:(id)arg2 ;
-(void)setConnectionUUIDFromEvent:(id)arg1 connection:(id)arg2 ;
-(void)enumerateConnectionsWithBlock:(/*^block*/id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(void)addConnection:(id)arg1 ;
-(void)startServer;
-(void)appendEvent:(id)arg1 fromConnection:(id)arg2 transaction:(id)arg3 ;
-(unsigned long long)currentEventIndex;
-(unsigned long long)nextEventIndex;
-(void)fetchCurrentEventIndexWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)eventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(PLChangeStore *)changeStore;
-(NSObject*<OS_dispatch_queue>)eventsSerialization;
-(void)setConnectionsIsolation:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEventsSerialization:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setChangeStore:(PLChangeStore *)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionsIsolation;
-(CFArrayRef)connections;
-(id)init;
-(void)setConnections:(CFArrayRef)arg1 ;
@end

