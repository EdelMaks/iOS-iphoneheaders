/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSArray, NSDictionary, NSData, NSDate;

@interface GKTurnBasedExchangeInternal : GKInternalRepresentation {

	NSString* _exchangeID;
	NSArray* _recipientIndexes;
	NSString* _statusString;
	NSDictionary* _localizableMessage;
	NSData* _data;
	NSDate* _sendDate;
	NSDate* _timeoutDate;
	NSDate* _completionDate;
	NSArray* _replies;
	unsigned char _senderIndex;

}

@property (nonatomic,retain) NSString * exchangeID;                          //@synthesize exchangeID=_exchangeID - In the implementation block
@property (assign,nonatomic) unsigned char senderIndex;                      //@synthesize senderIndex=_senderIndex - In the implementation block
@property (nonatomic,retain) NSArray * recipientIndexes;                     //@synthesize recipientIndexes=_recipientIndexes - In the implementation block
@property (nonatomic,retain) NSString * statusString;                        //@synthesize statusString=_statusString - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * sendDate;                              //@synthesize sendDate=_sendDate - In the implementation block
@property (nonatomic,retain) NSDate * timeoutDate;                           //@synthesize timeoutDate=_timeoutDate - In the implementation block
@property (nonatomic,retain) NSDate * completionDate;                        //@synthesize completionDate=_completionDate - In the implementation block
@property (nonatomic,retain) NSArray * replies;                              //@synthesize replies=_replies - In the implementation block
+(id)secureCodedPropertyKeys;
-(id)completionDate;
-(void)setCompletionDate:(id)arg1 ;
-(id)timeoutDate;
-(id)replies;
-(unsigned char)senderIndex;
-(id)recipientIndexes;
-(void)setReplies:(id)arg1 ;
-(id)localizableMessage;
-(void)setLocalizableMessage:(id)arg1 ;
-(id)exchangeID;
-(void)setTimeoutDate:(id)arg1 ;
-(void)setExchangeID:(id)arg1 ;
-(void)setSenderIndex:(unsigned char)arg1 ;
-(void)setRecipientIndexes:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)data;
-(void)setData:(id)arg1 ;
-(id)statusString;
-(void)setSendDate:(id)arg1 ;
-(id)sendDate;
-(void)setStatusString:(id)arg1 ;
@end

