/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <AirPlayReceiver/MPAssetKeyDelegate.h>

@class NSLock, MediaControlServer, CALayer, MPDocument, MRMarimbaLayer, NSDictionary, NSMutableDictionary, NSData, NSString;

@interface AirPlayLocalSlideshow : NSObject <MPAssetKeyDelegate> {

	NSLock* _lock;
	MediaControlServer* _server;
	unsigned _serverSessionID;
	CALayer* _presentationLayer;
	MPDocument* _marimbaDocument;
	MRMarimbaLayer* _marimbaLayer;
	unsigned char _sessionUUID[16];
	NSDictionary* _settings;
	int _state;
	NSMutableDictionary* _assets;
	unsigned _nextAssetIndex;
	BOOL _hasMoreAssets;
	BOOL _endPending;
	int _outstandingCount;
	double _startTime;
	double _lastRequestTime;
	double _lastRemoveTime;
	NSData* _firstImageData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)slideshowFeaturesWithLanguage:(id)arg1 ;
-(void)dealloc;
-(void)_playbackStart;
-(void)_playbackStop;
-(id)_assetForAssetKey:(id)arg1 ;
-(void)_playbackConsumedAssetKey:(id)arg1 ;
-(id)_copyImageForAssetKey:(id)arg1 decode:(BOOL)arg2 ;
-(void)_playbackEnded:(id)arg1 ;
-(void)_playbackSlideChanged:(id)arg1 ;
-(void)_playbackUserPlayPause:(id)arg1 ;
-(void)_playbackUserStop:(id)arg1 ;
-(void)_playbackUserNext:(id)arg1 ;
-(void)_playbackUserPrevious:(id)arg1 ;
-(void)_postProgressEvent:(id)arg1 ;
-(void)_playbackRunStateMachine;
-(unsigned)_bufferedAssetCount;
-(void)_playbackPrefetchDone;
-(void)_playbackPrefetch;
-(void)_playbackProducedAssetData:(id)arg1 withAssetInfo:(id)arg2 ;
-(void)_pruneAssets;
-(id)_oldestAsset;
-(id)absolutePathForAssetKey:(id)arg1 ;
-(id)absolutePathForAssetKey:(id)arg1 andSize:(CGSize)arg2 ;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(CGSize)resolutionForAssetKey:(id)arg1 ;
-(id)imageDataForAssetKey:(id)arg1 andSize:(CGSize)arg2 ;
-(id)initWithServer:(id)arg1 ;
-(void)setPresentationLayer:(id)arg1 ;
-(void)setServerSessionID:(unsigned)arg1 ;
-(id)slideshowInfo;
-(id)startSlideshowWithInfo:(id)arg1 error:(id*)arg2 ;
-(id)stopSlideshowWithInfo:(id)arg1 error:(id*)arg2 ;
@end
