/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@protocol OS_dispatch_queue;
@class HSHomeSharingLibrary, NSMutableDictionary, NSMutableSet, NSObject;

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3 {

	HSHomeSharingLibrary* _homeSharingLibrary;
	NSMutableDictionary* _tokenDataForDSIDs;
	NSMutableSet* _loadedContainerPIDs;
	NSMutableDictionary* _blocksForLoadingContainerPIDs;
	NSObject<OS_dispatch_queue>* _containerFillQueue;
	bool _updateInProgress;

}

@property (nonatomic,readonly) HSHomeSharingLibrary * homeSharingLibrary;              //@synthesize homeSharingLibrary=_homeSharingLibrary - In the implementation block
@property (nonatomic,readonly) bool isSupportedSharingVersion; 
+(void)beginScanningForLibraries;
+(void)endScanningForLibraries;
+(id)homeSharingGroupID;
+(void)_determineHomeSharingGroupIDWithCompletionHandler:(/*^block*/ id)arg1 ;
+(bool)isScanningForLibraries;
+(bool)isConnecting;
-(void)connectWithAuthenticationData:(id)arg1 completionBlock:(/*^block*/ id)arg2 progressHandler:(/*^block*/ id)arg3 ;
-(bool)hasGeniusMixes;
-(bool)requiresAuthentication;
-(id)itemResultSetForQueryCriteria:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(/*^block*/ id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(/*^block*/ id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(/*^block*/ id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(/*^block*/ id)arg2 ;
-(id)protectedContentSupportStorageURL;
-(id)errorResolverForMediaItem:(id)arg1 ;
-(bool)hasArtworkImageForItemWithIdentifier:(long long)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(bool)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkFormat:(long long)arg2 artworkCacheID:(id)arg3 ;
-(bool)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkSize:(CGSize)arg2 artworkCacheID:(id)arg3 ;
-(void)loadArtworkImageForFormat:(long long)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)loadBestArtworkImageDataForSize:(CGSize)arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3 ;
-(id)initWithHomeSharingLibrary:(id)arg1 ;
-(id)homeSharingLibrary;
-(void)_homeSharingGroupIDDidChangeNotification:(id)arg1 ;
-(void)_homeSharingLibraryDidUpdateRevisionNumber:(id)arg1 ;
-(void)_homeSharingLibraryDidBecomeUnavailable:(id)arg1 ;
-(bool)isSupportedSharingVersion;
-(void)_fetchTokensForAuthorizedDSIDs;
-(void)_fillContainerForQueryCriteria:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(id)_cachedImagePathHomeSharingID:(unsigned)arg1 pixelSize:(CGSize)arg2 ;
-(id)_tokenDataForMediaItem:(id)arg1 ;
-(void)setTokenData:(id)arg1 forAuthorizedDSID:(unsigned long long)arg2 ;
-(void)setRentalPlaybackStartDateForItemID:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)name;
-(void).cxx_destruct;
-(id)uniqueIdentifier;
-(void)disconnect;
@end

