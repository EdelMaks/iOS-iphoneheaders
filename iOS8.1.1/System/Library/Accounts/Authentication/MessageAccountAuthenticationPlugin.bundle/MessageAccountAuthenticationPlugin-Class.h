/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Accounts/Authentication/MessageAccountAuthenticationPlugin.bundle/MessageAccountAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageAccountAuthenticationPlugin/ACDAccountAuthenticationPlugin.h>

@class NSString;

@interface MessageAccountAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_logWithAccount:(id)arg1 level:(int)arg2 reason:(id)arg3 message:(id)arg4 ;
-(BOOL)_clientIsEntitled:(id)arg1 ;
-(BOOL)_verifyAccount:(id)arg1 error:(id*)arg2 ;
-(id)_passwordPromptTitleWithCredential:(id)arg1 ;
-(id)_passwordPromptMessageWithAccount:(id)arg1 ;
-(id)_promptBundleIdentifierWhitelistWithAccount:(id)arg1 ;
-(void)_showPasswordPromptWithAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isPushSupportedForAccount:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

