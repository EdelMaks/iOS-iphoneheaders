/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>
#import <TelephonyUI/TPStarkPhoneCallContainerDataSource.h>
#import <TelephonyUI/TPStarkPhoneCallContainerDelegate.h>

@protocol TPStarkPhoneCallGalleryViewDelegate;
@class TPStarkPhoneCallContainer, NSString;

@interface TPStarkPhoneCallGalleryView : UIView <TPStarkPhoneCallContainerDataSource, TPStarkPhoneCallContainerDelegate> {

	id<TPStarkPhoneCallGalleryViewDelegate> _delegate;
	TPStarkPhoneCallContainer* _container;

}

@property (assign) id<TPStarkPhoneCallGalleryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) TPStarkPhoneCallContainer * container;                         //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)statusStringForDisplayForCall:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TPStarkPhoneCallGalleryViewDelegate>)arg1 ;
-(id<TPStarkPhoneCallGalleryViewDelegate>)delegate;
-(void)setContainer:(TPStarkPhoneCallContainer *)arg1 ;
-(TPStarkPhoneCallContainer *)container;
-(void)startListeningForCallNotifications;
-(void)stopListeningForCallNotifications;
-(void)phoneCallDataDidChange:(id)arg1 ;
-(id)primaryCalls;
-(id)phoneCallForIndex:(unsigned long long)arg1 isMerged:(BOOL*)arg2 ;
-(id)mergedStringForMergedCalls;
-(unsigned long long)numberOfViewCellsForPhoneCallContainer:(id)arg1 ;
-(id)mergedCalls;
-(id)phoneCallContainer:(id)arg1 titleForViewCellAtIndex:(unsigned long long)arg2 ;
-(id)phoneCallContainer:(id)arg1 subtitleForViewCellAtIndex:(unsigned long long)arg2 ;
-(BOOL)phoneCallContainer:(id)arg1 cellIsDimmedAtIndex:(unsigned long long)arg2 ;
-(void)phoneCallContainer:(id)arg1 phoneCallViewTappedAtIndex:(unsigned long long)arg2 ;
-(void)reloadPhoneCallData;
-(void)addPrimaryPhoneCall:(id)arg1 animated:(BOOL)arg2 ;
-(void)mergePrimaryPhoneCallsAnimated:(BOOL)arg1 ;
-(void)endPhoneCall:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIsShowingCallFailure:(BOOL)arg1 ;
@end
