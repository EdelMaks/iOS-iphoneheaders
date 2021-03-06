/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, ACAccount;

@interface ACDAuthenticationDialogRequest : NSObject {

	bool _confirmationRequired;
	NSURL* _url;
	ACAccount* _account;
	/*^block*/ id _completion;

}

@property (nonatomic,copy) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) bool confirmationRequired;              //@synthesize confirmationRequired=_confirmationRequired - In the implementation block
@property (nonatomic,retain) ACAccount * account;                    //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) id completion;                            //@synthesize completion=_completion - In the implementation block
-(/*^block*/ id)completion;
-(void)setCompletion:(/*^block*/ id)arg1 ;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(void).cxx_destruct;
-(bool)confirmationRequired;
-(void)setConfirmationRequired:(bool)arg1 ;
-(id)account;
-(void)setAccount:(id)arg1 ;
@end

