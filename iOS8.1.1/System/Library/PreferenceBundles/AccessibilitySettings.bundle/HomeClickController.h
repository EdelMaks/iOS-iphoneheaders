/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSTimer;

@interface HomeClickController : PSListController {

	long long _flashCount;
	NSTimer* _flashTimer;
	NSTimer* _vibrationTimer;
	long long _selectedRow;

}

@property (assign,nonatomic) long long flashCount;                  //@synthesize flashCount=_flashCount - In the implementation block
@property (nonatomic,retain) NSTimer * flashTimer;                  //@synthesize flashTimer=_flashTimer - In the implementation block
@property (nonatomic,retain) NSTimer * vibrationTimer;              //@synthesize vibrationTimer=_vibrationTimer - In the implementation block
@property (assign,nonatomic) long long selectedRow;                 //@synthesize selectedRow=_selectedRow - In the implementation block
-(long long)flashCount;
-(void)setSelectedRow:(long long)arg1 ;
-(void)setFlashCount:(long long)arg1 ;
-(NSTimer *)vibrationTimer;
-(NSTimer *)flashTimer;
-(void)setFlashTimer:(NSTimer *)arg1 ;
-(void)setVibrationTimer:(NSTimer *)arg1 ;
-(float)_homeClickSpeedFromSpecifierKey:(id)arg1 ;
-(void)_vibrateSelectedRow;
-(void)_flashSelectedRow;
-(CFDictionaryRef)_vibrationPattern;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(long long)selectedRow;
@end

