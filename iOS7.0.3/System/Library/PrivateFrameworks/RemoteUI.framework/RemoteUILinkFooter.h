/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <RemoteUI/RemoteUITableFooter.h>

@class UIButton;

@interface RemoteUILinkFooter : UIView <RemoteUITableFooter> {

	UIButton* _linkButton;
	id _delegate;

}

@property (nonatomic,readonly) UIButton * linkButton;              //@synthesize linkButton=_linkButton - In the implementation block
-(float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithAttributes:(id)arg1 ;
-(void)_linkPressed;
-(id)linkButton;
@end

