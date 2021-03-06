/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DGLContext, TSCH3DResourceCache, TSCH3DGLSharegroup, NSMutableSet, NSCountedSet, TSCH3DDocumentDataCache;

@interface TSCH3DSession : NSObject {

	bool mInteractiveCanvas;
	unsigned long long mFailures;
	TSCH3DGLContext* mContext;
	TSCH3DResourceCache* mCache;
	TSCH3DGLSharegroup* mSharegroup;
	NSMutableSet* mActiveResourceSet;
	NSMutableSet* mAllResourceSet;
	NSCountedSet* mScopeProtectedResourceSet;
	int mVirtualScreen;
	TSCH3DDocumentDataCache* mDataCache;

}

@property (nonatomic,readonly) TSCH3DGLContext * context; 
@property (nonatomic,readonly) TSCH3DGLContext * sharegroupContext; 
@property (assign,nonatomic) int performance; 
@property (nonatomic,readonly) bool hasFailed; 
@property (nonatomic,readonly) bool isOneShot; 
@property (nonatomic,readonly) bool mustRunOnMainThread; 
@property (assign,nonatomic) int virtualScreen; 
@property (nonatomic,readonly) TSCH3DDocumentDataCache * dataCache; 
-(void)setPerformance:(int)arg1 ;
-(bool)isOneShot;
-(bool)mustRunOnMainThread;
-(void)flushMemoryForResources:(id)arg1 ;
-(void)setIfIsMoreDemandingPerformance:(int)arg1 ;
-(int)performance;
-(void)garbageCollectAllUnretainedResources;
-(SessionLoadResourceResult)loadResource:(id)arg1 reload:(bool)arg2 withLoader:(id)arg3 config:(void*)arg4 ;
-(void)addActiveResource:(id)arg1 ;
-(void)beginFrameWithSharegroupDelegate:(id)arg1 ;
-(void)endFrameWithSharegroupDelegate:(id)arg1 ;
-(id)handleOfResource:(id)arg1 loader:(id)arg2 ;
-(id)shaderForObjectState:(const ObjectState*)arg1 version:(id)arg2 initializeProgramBlock:(/*^block*/ id)arg3 ;
-(void)unprotectResource:(id)arg1 clearOnFailProtection:(bool)arg2 ;
-(void)protectResource:(id)arg1 unprotectOnFail:(bool)arg2 ;
-(bool)hasFailed;
-(id)dataCache;
-(void)flushResourcesIfNecessary;
-(int)virtualScreen;
-(bool)isProtectedResource:(id)arg1 ;
-(bool)hasEnoughFreeMemoryOfBytes:(unsigned long long)arg1 ;
-(void)flushResources:(id)arg1 ;
-(void)setFailed;
-(id)initWithSharegroupToken:(id)arg1 dataCache:(id)arg2 ;
-(id)sharegroupContext;
-(void)resetFailures;
-(id)p_contextOrNil;
-(void)p_setContext:(id)arg1 ;
-(void)trackResourcesInBlock:(/*^block*/ id)arg1 ;
-(void)resetTrackingToActiveResources;
-(void)flushTrackedResources;
-(void)forceFlushResources:(id)arg1 ;
-(void)setVirtualScreen:(int)arg1 ;
-(void)p_lock;
-(void)p_unlock;
-(void)dealloc;
-(id)init;
-(id)context;
@end

