/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VUSocialUpload/VUSocialUpload-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol FlickrComposeOptionViewDelegate;
@interface FlickrAudienceController : UITableViewController {

	int _audience;
	id<FlickrComposeOptionViewDelegate> _delegate;

}

@property (assign,nonatomic) int audience;                                                     //@synthesize audience=_audience - In the implementation block
@property (assign,nonatomic,__weak) id<FlickrComposeOptionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)titleForAudience:(int)arg1 ;
-(void)setDelegate:(id<FlickrComposeOptionViewDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FlickrComposeOptionViewDelegate>)delegate;
-(CGSize)preferredContentSize;
-(void)loadView;
-(int)audience;
-(void)setAudience:(int)arg1 ;
@end

