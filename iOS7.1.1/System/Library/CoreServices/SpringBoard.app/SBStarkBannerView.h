/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:02 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBStarkBannerItemObserver.h>
#import <SpringBoard/SBDateLabelDelegate.h>
#import <SpringBoard/SBUIBannerView.h>

@protocol SBBulletinDateLabel;
@class SBUIBannerContext, SBStarkBannerItem, UIImageView, UILabel, SBStarkBannerViewButton;

@interface SBStarkBannerView : UIView <SBStarkBannerItemObserver, SBDateLabelDelegate, SBUIBannerView> {

	SBUIBannerContext* _context;
	SBStarkBannerItem* _bannerItem;
	UIImageView* _categoryImageView;
	UILabel* _titleLabel;
	float _titleAscender;
	UILabel* _subTitleLabel;
	float _subTitleAscender;
	SBStarkBannerViewButton* _okButton;
	SBStarkBannerViewButton* _actionButton;
	UIEdgeInsets _contentInsets;
	UILabel<SBBulletinDateLabel>* _relevanceDateLabel;
	unsigned _interactionAffordances;

}
-(void)dateLabelDidChange:(id)arg1 ;
-(id)bannerContext;
-(void)starkBannerItemDidReloadDisplayProperties:(id)arg1 ;
-(id)_defaultRelevanceDateFont;
-(void)_setRelevanceDate:(id)arg1 ;
-(BOOL)_hasSubtitle;
-(BOOL)_shouldShowOKButton;
-(void)_layoutForButton:(id)arg1 contentFrame:(CGRect)arg2 ;
-(BOOL)_hasKnob;
-(UIEdgeInsets)_categoryImageInsets;
-(UIEdgeInsets)_contentInsetsForActionType:(int)arg1 ;
-(id)_titleFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(id)initWithContext:(id)arg1 ;
-(void)_selectControl;
@end
