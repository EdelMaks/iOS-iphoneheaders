/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNGuidanceSignViewDelegate;
@class MNGuidanceSignView, MNGuidanceSecondarySignView;

@interface MNGuidanceSignContainerView : UIView <UIGestureRecognizerDelegate> {

	<MNGuidanceSignViewDelegate>* _delegate;
	float _maximumWidth;
	MNGuidanceSignView* _primarySignView;
	MNGuidanceSecondarySignView* _secondarySignView;

}

@property (assign,nonatomic,__weak) <MNGuidanceSignViewDelegate> * delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float maximumWidth;                                           //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (nonatomic,retain) MNGuidanceSignView * primarySignView;                         //@synthesize primarySignView=_primarySignView - In the implementation block
@property (nonatomic,retain) MNGuidanceSecondarySignView * secondarySignView;              //@synthesize secondarySignView=_secondarySignView - In the implementation block
-(void)_alignAndCenterSigns;
-(id)secondarySignView;
-(id)primarySignView;
-(void)setPrimarySignView:(id)arg1 ;
-(void)setSecondarySignView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setMaximumWidth:(float)arg1 ;
-(float)maximumWidth;
-(void).cxx_destruct;
-(void)_handleSingleTap:(id)arg1 ;
@end
