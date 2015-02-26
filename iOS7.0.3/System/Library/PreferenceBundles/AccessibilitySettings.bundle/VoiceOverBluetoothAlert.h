/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol VoiceOverBluetoothAlertDelegate;
@class UIAlertView, VoiceOverBluetoothDevice;

@interface VoiceOverBluetoothAlert : NSObject <UIAlertViewDelegate> {

	<VoiceOverBluetoothAlertDelegate>* _delegate;
	UIAlertView* _alert;
	VoiceOverBluetoothDevice* _device;

}
-(id)initWithDevice:(id)arg1 ;
-(void)showAlertWithResult:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)dismiss;
@end
