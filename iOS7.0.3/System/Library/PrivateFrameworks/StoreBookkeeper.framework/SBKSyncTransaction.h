/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKTransaction.h>

@protocol SBKSyncTransactionProcessing;
@class NSString, NSArray, NSURL;

@interface SBKSyncTransaction : SBKTransaction {

	NSString* _syncAnchor;
	NSString* _domain;
	NSArray* _keysToUpdate;
	NSArray* _keysToDelete;
	int _conflictDetectionType;
	<SBKSyncTransactionProcessing>* _transactionProcessor;
	int _type;
	NSURL* _syncRequestURL;

}

@property (readonly) int type;                                                         //@synthesize type=_type - In the implementation block
@property (readonly) int conflictDetectionType;                                        //@synthesize conflictDetectionType=_conflictDetectionType - In the implementation block
@property (readonly) NSURL * syncRequestURL;                                           //@synthesize syncRequestURL=_syncRequestURL - In the implementation block
@property (readonly) NSString * domain;                                                //@synthesize domain=_domain - In the implementation block
@property (readonly) NSString * syncAnchor;                                            //@synthesize syncAnchor=_syncAnchor - In the implementation block
@property (readonly) NSArray * keysToUpdate;                                           //@synthesize keysToUpdate=_keysToUpdate - In the implementation block
@property (readonly) NSArray * keysToDelete;                                           //@synthesize keysToDelete=_keysToDelete - In the implementation block
@property (__weak) <SBKSyncTransactionProcessing> * transactionProcessor;              //@synthesize transactionProcessor=_transactionProcessor - In the implementation block
-(id)description;
-(int)type;
-(id)domain;
-(id)syncAnchor;
-(id)requestURL;
-(id)clampsKey;
-(id)newRequest;
-(void)processDataInResponse:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(id)keysToUpdate;
-(id)keysToDelete;
-(int)conflictDetectionType;
-(id)conflictDetectionOrdinalForKey:(id)arg1 ;
-(id)keyValuePairForUpdatedKey:(id)arg1 ;
-(id)syncRequestURL;
-(id)initWithSyncBagContext:(id)arg1 syncAnchor:(id)arg2 keysToUpdate:(id)arg3 keysToDelete:(id)arg4 conflictDetectionType:(int)arg5 ;
-(void)setTransactionProcessor:(id)arg1 ;
-(id)initWithSyncRequestURL:(id)arg1 domain:(id)arg2 syncAnchor:(id)arg3 keysToUpdate:(id)arg4 keysToDelete:(id)arg5 conflictDetectionType:(int)arg6 ;
-(id)transactionProcessor;
-(void)_validateTransactionProcessor:(id)arg1 ;
-(void).cxx_destruct;
@end

