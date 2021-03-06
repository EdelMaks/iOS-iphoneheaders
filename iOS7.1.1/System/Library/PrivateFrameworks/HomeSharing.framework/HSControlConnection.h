/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <CoreFoundation/NSStreamDelegate.h>

@protocol HSControlConnectionDelegate;
@class NSOutputStream;

@interface HSControlConnection : NSObject <NSStreamDelegate> {

	unsigned _key;
	NSOutputStream* _outputStream;
	double _timestamp;
	unsigned _protocolVersion;
	<HSControlConnectionDelegate>* _delegate;

}

@property (assign,nonatomic) <HSControlConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned protocolVersion;                              //@synthesize protocolVersion=_protocolVersion - In the implementation block
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(unsigned)protocolVersion;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)close;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(id)initWithHost:(id)arg1 port:(unsigned)arg2 key:(unsigned)arg3 ;
-(id)_newDataForControlEventMessage:(SCD_Struct_HS6)arg1 ;
-(id)_newDataForControlExtendedMessage:(SCD_Struct_HS6)arg1 withData:(id)arg2 ;
-(void)_sendTouchEvent:(long long)arg1 locations:(const unsigned*)arg2 count:(unsigned long long)arg3 velocity:(SCD_Struct_HS7)arg4 ;
-(id)_newDataForControlTouchEventMessage_v1:(SCD_Struct_HS8*)arg1 ;
-(id)_newDataForControlTouchEventMessage_v1_1:(SCD_Struct_HS9*)arg1 ;
-(void)sendEvent:(long long)arg1 value:(unsigned)arg2 ;
-(void)sendShowItemDetailWithDictionary:(id)arg1 ;
-(void)sendTouchesBegan:(const unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)sendTouchesEnded:(const unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)sendTouchesMoved:(const unsigned*)arg1 count:(unsigned long long)arg2 velocity:(SCD_Struct_HS7)arg3 ;
-(void)open;
@end

