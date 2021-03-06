/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IMTimingCollection : NSObject {

	NSMutableDictionary* _timings;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)startTimingForKey:(id)arg1 ;
-(void)stopTimingForKey:(id)arg1 ;
-(BOOL)hasKey:(id)arg1 ;
-(double)totalTimeForKey:(id)arg1 ;
-(void)removeTimingForKey:(id)arg1 ;
@end

