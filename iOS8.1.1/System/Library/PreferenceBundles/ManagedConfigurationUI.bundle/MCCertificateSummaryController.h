/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSListController.h>

@class NSArray, NSString, NSDate, MCDetailsHeaderCell, MCDetailsDescriptionTableCell, UITableViewCell;

@interface MCCertificateSummaryController : PSListController {

	SecTrustRef _trust;
	NSArray* _properties;
	NSString* _displayName;
	NSString* _organizationName;
	NSString* _purpose;
	NSDate* _expiration;
	MCDetailsHeaderCell* _configHeader;
	MCDetailsDescriptionTableCell* _configMiddle;
	UITableViewCell* _configBottom;
	BOOL _backButtonWasHidden;

}
+(id)_dateFormatter;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)hideActionButton;
-(id)_valueAtPath:(id)arg1 ;
-(void)_setTrust:(SecTrustRef)arg1 ;
-(void)actionButtonPressed:(id)arg1 ;
-(id)specifiers;
@end

