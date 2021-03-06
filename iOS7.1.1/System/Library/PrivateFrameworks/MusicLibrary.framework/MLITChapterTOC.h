/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/MLChapterTOC.h>

@interface MLITChapterTOC : MLChapterTOC {

	unsigned _totalTimeInMS;
	ChapterDataRef _chapterDataRef;
	unsigned* _picCookieIndexMap;
	unsigned* _urlCookieIndexMap;
	unsigned* _nameCookieIndexMap;

}
+(id)imageCacheKeyForTrackWithPID:(long long)arg1 startTimeMS:(unsigned)arg2 ;
+(unsigned*)_chapterDataCookieIndexMapForProperty:(int)arg1 ofChapterTOC:(id)arg2 ;
+(void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)initWithChapterDataRef:(ChapterDataRef)arg1 totalTimeInMS:(unsigned)arg2 ;
-(ChapterDataRef)chapterDataRef;
-(unsigned)countOfGroupsForProperty:(int)arg1 ;
-(unsigned)groupIndexAtTimeLocationInMS:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)countOfChapters;
-(unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)arg1 ;
-(id)imageDataForArtworkFormatID:(unsigned)arg1 size:(CGSize)arg2 artworkChapterIndex:(unsigned)arg3 artworkInstanceInfo:(MLArtworkInstanceInfo*)arg4 ;
-(unsigned)chapterIndexForGroupIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)groupIndexForChapterIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)durationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(id)titlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(id)urlTitlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(id)urlPropertyOfChapterAtIndex:(unsigned)arg1 ;
-(id)imageDataForArtworkFormatID:(unsigned)arg1 chapterIndex:(unsigned)arg2 artworkInstanceInfo:(MLArtworkInstanceInfo*)arg3 ;
-(id)bestImageDataForSize:(CGSize)arg1 chapterIndex:(unsigned)arg2 artworkInstanceInfo:(MLArtworkInstanceInfo*)arg3 ;
-(unsigned*)_cachedCookieIndexMapForProperty:(int)arg1 createIfNecessary:(bool)arg2 ;
-(unsigned)totalTimeInMS;
-(id)urlTitleTrimmingCharacterSet;
-(id)getImageWithArtworkFormatID:(unsigned)arg1 size:(CGSize)arg2 chapterIndex:(unsigned)arg3 artworkInstanceInfo:(MLArtworkInstanceInfo*)arg4 ;
@end

