/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ExternalAccessory/BTDevicePickerDelegate.h>

@protocol EABluetoothAccessoryPickerDelegate;
@class BTDevicePicker;

@interface EABluetoothAccessoryPicker : NSObject <BTDevicePickerDelegate> {

	BTDevicePicker* _picker;
	<EABluetoothAccessoryPickerDelegate>* _delegate;

}

@property (assign,nonatomic) <EABluetoothAccessoryPickerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)wakeSelectedBluetoothAccessories:(id)arg1 ;
-(void)devicePicker:(id)arg1 didDismissWithResult:(int)arg2 device:(id)arg3 ;
-(void)dismissPicker;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)show;
-(id)initWithPredicate:(id)arg1 ;
@end

