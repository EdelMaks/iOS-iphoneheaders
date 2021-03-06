/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSOperationQueue;

@interface ISOperationQueue : NSObject {

	NSOperationQueue* _queue;

}

@property (assign) bool adjustsMaxConcurrentOperationCount; 
+(id)mainQueue;
-(void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2 ;
-(long long)maxConcurrentOperationCount;
-(void)dealloc;
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(void)cancelAllOperations;
-(void)addOperation:(id)arg1 ;
-(id)operations;
-(long long)operationCount;
-(void)setSuspended:(bool)arg1 ;
-(bool)adjustsMaxConcurrentOperationCount;
-(void)setAdjustsMaxConcurrentOperationCount:(bool)arg1 ;
@end

