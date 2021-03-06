/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class VideosAVController, NSObject, NSMutableDictionary;

@interface VideosNowPlayingObserver : NSObject {

	VideosAVController* _player;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_queue>* _statusBarQueue;
	BOOL _waitingForItemArtwork;
	NSMutableDictionary* _mediaItemCoalescedUpdateDateAccessedTimers;

}
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)_rateDidChangeNotification:(id)arg1 ;
-(void)_timeDidJumpNotification:(id)arg1 ;
-(void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)dealloc;
-(void)_contentsDidChangeNotification:(id)arg1 ;
-(void)_crossedTimeMarkerNotification:(id)arg1 ;
-(void)_repeatTypeDidChangeNotification:(id)arg1 ;
-(void)_avItemTitlesDidChangeNotification:(id)arg1 ;
-(void)_mediaArtworkDidLoadNotification:(id)arg1 ;
-(void)_postNowPlayingInfo;
-(void)_coalescedUpdateLastUsedDateForCurrentItem;
-(void).cxx_destruct;
@end

