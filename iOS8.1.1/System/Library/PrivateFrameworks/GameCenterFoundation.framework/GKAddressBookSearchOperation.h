/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABSearchOperation.h>
#import <GameCenterFoundation/ABSearchOperationDelegate.h>

@class NSMutableArray, NSString;

@interface GKAddressBookSearchOperation : ABSearchOperation <ABSearchOperationDelegate> {

	NSMutableArray* _matches;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) NSMutableArray * matches;              //@synthesize matches=_matches - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(NSMutableArray *)matches;
@end

