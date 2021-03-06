/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <StoreKitUI/SKUIMenuViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUIPopupMenuDelegate;
@class UIButton, UILabel, NSString, NSArray, SKUIMenuViewController, UIPopoverController;

@interface SKUIPopupMenuHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {

	<SKUIPopupMenuDelegate>* _delegate;
	UIButton* _menuButton;
	UILabel* _menuLabel;
	NSString* _menuLabelTitle;
	NSArray* _menuItemTitles;
	SKUIMenuViewController* _menuViewController;
	UIPopoverController* _menuPopoverController;
	int _selectedMenuItemIndex;
	UILabel* _titleLabel;

}

@property (assign,nonatomic,__weak) <SKUIPopupMenuDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * menuItemTitles;                                 //@synthesize menuItemTitles=_menuItemTitles - In the implementation block
@property (nonatomic,copy) NSString * menuLabelTitle;                                //@synthesize menuLabelTitle=_menuLabelTitle - In the implementation block
@property (assign,nonatomic) int selectedMenuItemIndex;                              //@synthesize selectedMenuItemIndex=_selectedMenuItemIndex - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(id)title;
-(id)_titleLabel;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)setMenuLabelTitle:(id)arg1 ;
-(void)setMenuItemTitles:(id)arg1 ;
-(void)setSelectedMenuItemIndex:(int)arg1 ;
-(void)_reloadMenuButton;
-(void)_menuButtonAction:(id)arg1 ;
-(id)menuItemTitles;
-(id)menuLabelTitle;
-(int)selectedMenuItemIndex;
-(void).cxx_destruct;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
@end

