/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ClientConnection, EKEventPredicate;

@interface CADSearchOperation : NSOperation {

	ClientConnection* _connection;
	EKEventPredicate* _predicate;
	int _entityType;
	unsigned _clientPort;
	unsigned long long _clientData;

}
+(id)operationWithConnection:(id)arg1 entityType:(int)arg2 predicate:(id)arg3 clientPort:(unsigned)arg4 clientData:(unsigned long long)arg5 ;
-(id)initWithConnection:(id)arg1 entityType:(int)arg2 predicate:(id)arg3 clientPort:(unsigned)arg4 clientData:(unsigned long long)arg5 ;
-(void)dealloc;
-(void)main;
@end
