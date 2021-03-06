/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol IMConnectionMonitorDelegate;
@class NSString;

@interface IMConnectionMonitor : NSObject {

	NSString* _remoteHost;
	<IMConnectionMonitorDelegate>* _delegate;

}

@property (nonatomic,readonly) BOOL isImmediatelyReachable; 
@property (nonatomic,readonly) BOOL requiresDataConnectionActivation; 
@property (assign,setter=setDataConnectionActive:,nonatomic) BOOL isDataConnectionActive; 
@property (assign,nonatomic) <IMConnectionMonitorDelegate> * delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * remoteHost;                                                  //@synthesize remoteHost=_remoteHost - In the implementation block
+(id)alloc;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)clear;
-(void)_setup;
-(id)initWithRemoteHost:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isImmediatelyReachable;
-(void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(void)goDisconnected;
-(void)setDataConnectionActive:(BOOL)arg1 ;
-(BOOL)isDataConnectionActive;
-(BOOL)requiresDataConnectionActivation;
-(id)remoteHost;
@end

