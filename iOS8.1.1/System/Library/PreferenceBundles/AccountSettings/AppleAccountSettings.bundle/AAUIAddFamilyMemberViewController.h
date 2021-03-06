/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <AppleAccountSettings/RemoteUIControllerDelegate.h>
#import <AppleAccountSettings/AAUIPickInviteeDelegate.h>

@class ACAccount, ACAccountStore, SSAccount, AAGrandSlamSigner, NSOperationQueue, RemoteUIController, NSMutableURLRequest, UIActivityIndicatorView, UIBarButtonItem, UINavigationItem, NSData, NSString;

@interface AAUIAddFamilyMemberViewController : UINavigationController <RemoteUIControllerDelegate, AAUIPickInviteeDelegate> {

	ACAccount* _appleAccount;
	ACAccountStore* _accountStore;
	SSAccount* _iTunesAccount;
	AAGrandSlamSigner* _grandSlamSigner;
	NSOperationQueue* _networkingQueue;
	RemoteUIController* _remoteUIController;
	NSMutableURLRequest* _startRemoteUIRequest;
	BOOL _isShowingSpinner;
	UIActivityIndicatorView* _spinnerView;
	UIBarButtonItem* _originalRightBarButtonItem;
	UINavigationItem* _navigationItemShowingSpinner;
	NSData* _pushToken;

}

@property (assign,nonatomic,__weak) id<AAUIAddFamilyMemberDelegate><UINavigationControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)hideActivitySpinnerInNavigationBar;
-(void)showActivitySpinnerInNavigationBar;
-(id)_itunesAccount;
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)pickInviteeViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(id)_pushToken;
@end

