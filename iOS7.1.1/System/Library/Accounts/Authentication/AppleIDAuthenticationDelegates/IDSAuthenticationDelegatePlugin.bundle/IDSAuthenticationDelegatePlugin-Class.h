/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Accounts/Authentication/AppleIDAuthenticationDelegates/IDSAuthenticationDelegatePlugin.bundle/IDSAuthenticationDelegatePlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccountAuthenticationDelegate/AAAuthenticationDelegateProtocol.h>

@interface IDSAuthenticationDelegatePlugin : NSObject <AAAuthenticationDelegateProtocol>
-(void)didReceiveAuthenticationResponseParameters:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_storeAccountForServiceType:(id)arg1 accountStore:(id)arg2 parameters:(id)arg3 group:(id)arg4 completion:(/*^block*/ id)arg5 ;
@end
