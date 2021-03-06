/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccountUI/AAUIAccountRepairRemoteUIDelegate.h>

@protocol AAUIRemoteUIRepairFlowDelegate;
@class ACAccount, AAUIAccountRepairRemoteUI, NSString;

@interface AAUIRemoteUIRepairFlow : NSObject <AAUIAccountRepairRemoteUIDelegate> {

	ACAccount* _account;
	AAUIAccountRepairRemoteUI* _remoteUI;
	/*^block*/id _completion;
	id<AAUIRemoteUIRepairFlowDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIRemoteUIRepairFlowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AAUIRemoteUIRepairFlowDelegate>)arg1 ;
-(id<AAUIRemoteUIRepairFlowDelegate>)delegate;
-(void)presentFlowFromViewController:(id)arg1 modal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(BOOL)arg3 ;
-(void)accountRepairRemoteUIWillAppear:(id)arg1 ;
-(void)accountRepairRemoteUIWillDismiss:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

