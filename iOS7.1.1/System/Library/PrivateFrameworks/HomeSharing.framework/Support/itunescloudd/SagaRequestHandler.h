/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:25 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class SagaLibrary, NSObject, NSMutableArray, SagaUpdateLibraryOperation, SSAuthenticateRequest;

@interface SagaRequestHandler : NSObject {

	SagaLibrary* _library;
	NSObject<OS_dispatch_queue>* _geniusDownloadQueue;
	NSObject<OS_dispatch_queue>* _uploadItemPropertiesQueue;
	NSObject<OS_xpc_object>* _configuration;
	NSMutableArray* _updateLibraryCompletionHandlers;
	SagaUpdateLibraryOperation* _updateLibraryOperation;
	SSAuthenticateRequest* _authenticateRequest;
	/*^block*/ id _authenticationDidFinishBlock;
	BOOL _loadingBulkArtwork;

}

@property (nonatomic,retain) NSObject<OS_xpc_object> * configuration; 
@property (assign,nonatomic) BOOL loadingBulkArtwork;                              //@synthesize loadingBulkArtwork=_loadingBulkArtwork - In the implementation block
+(id)handler;
-(void)sendAsynchronousRequest:(id)arg1 priority:(int)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)handleMessage:(unsigned long long)arg1 withDictionary:(id)arg2 forClientConnection:(id)arg3 ;
-(void)addOperation:(id)arg1 priority:(int)arg2 ;
-(void)addBackgroundOperation:(id)arg1 priority:(int)arg2 ;
-(float)updateProgress;
-(void)processPendingGeniusData;
-(void)updateLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(BOOL)isUpdateInProgressWithIsInitialImport:(BOOL*)arg1 ;
-(void)loadBulkArtwork;
-(void)handleAccountsDidChange:(BOOL)arg1 ;
-(void)cancelPendingChanges;
-(void)unregisterForStoreDownloadNotifications;
-(void)deauthenticateDeletingDB:(BOOL)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)uploadItemPropertiesWithMinimumTimeInterval:(double)arg1 ;
-(id)latestPlayDataChangesDate;
-(void)setLatestPlayDataChangesDate:(id)arg1 ;
-(void)loadArtworkForSagaID:(unsigned long long)arg1 insertIntoLibrary:(BOOL)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)addGeniusPlaylistWithName:(id)arg1 seedItemIDs:(id)arg2 itemIDs:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(BOOL)aggregatePlayDataProperties:(id)arg1 forSagaID:(unsigned long long)arg2 forceCheck:(BOOL)arg3 ;
-(void)registerForStoreDownloadNotifications;
-(BOOL)_isLoadingBulkArtwork;
-(BOOL)loadingBulkArtwork;
-(void)setLoadingBulkArtwork:(BOOL)arg1 ;
-(void)authenticateWithCompletionHandler:(/*^block*/ id)arg1 ;
-(BOOL)isAuthenticated;
-(void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 ;
-(void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)addPlaylistWithName:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)isExpiredWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2 ;
-(void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)updatePlaylistWithSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)setConfiguration:(id)arg1 ;
-(void).cxx_destruct;
-(id)configuration;
-(void)downloadGeniusDataWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)_library;
-(void)_loadURLBagWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)authenticateRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
@end
