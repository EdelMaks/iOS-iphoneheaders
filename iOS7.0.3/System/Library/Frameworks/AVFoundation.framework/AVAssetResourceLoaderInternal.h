/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVWeakReference, NSObject, NSMutableDictionary;

@interface AVAssetResourceLoaderInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReference* weakReferenceToAsset;
	NSObject<OS_dispatch_queue>* stateQueue;
	AVWeakReference* weakReferenceToDelegate;
	NSObject<OS_dispatch_queue>* delegateQueue;
	NSMutableDictionary* pendingRequests;
	NSObject<OS_dispatch_queue>* contentInformationCachingQueue;
	NSMutableDictionary* contentInformationCache;

}
@end
