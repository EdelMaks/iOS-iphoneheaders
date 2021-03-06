/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUStreamReadChannel.h>

@protocol SFUInputStream, OS_dispatch_queue;
@class SFUDataRepresentation, NSObject, NSString;

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel> {

	SFUDataRepresentation* _representation;
	id<SFUInputStream> _inputStream;
	NSObject*<OS_dispatch_queue> _readQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)close;
-(id)initWithRepresentation:(id)arg1 ;
@end

