/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLShuffledAlbum.h>

@class NSPredicate;

@interface PLFilteredShuffledAlbum : PLShuffledAlbum {

	int _filter;
	NSPredicate* _filterPredicate;

}

@property (nonatomic,readonly) int filter;                                 //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) NSPredicate * filterPredicate;              //@synthesize filterPredicate=_filterPredicate - In the implementation block
+(NSObject*)_shuffledAlbumWithAlbum:(NSObject*)arg1 filter:(int)arg2 startingAsset:(id)arg3 ;
-(void)createShuffledIndexesMaps;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithBackingAlbum:(NSObject*)arg1 filter:(int)arg2 startingAsset:(id)arg3 ;
-(NSObject*)unshuffledAlbum;
-(id)filterPredicate;
-(int)filter;
@end

