/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UIView.h>

@class SCATModernMenuBackgroundView;

@interface SCATModernMenuView : UIView {

	SCATModernMenuBackgroundView* _backgroundView;

}

@property (nonatomic,retain) SCATModernMenuBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 includeTip:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(id)backgroundView;
@end

