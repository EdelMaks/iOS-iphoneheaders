/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UIButton, ABPersonTableTinyActionCell, NSArray;

@interface ABPersonTableTinyActionCellContentView : UIView {

	NSMutableArray* _actions;
	NSMutableArray* _buttons;
	UIButton* _highlightedButton;
	ABPersonTableTinyActionCell* _cell;

}

@property (assign,nonatomic) ABPersonTableTinyActionCell * cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                             //@synthesize actions=_actions - In the implementation block
-(void)unhighlight;
-(void)refreshActions;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)cell;
-(void)setCell:(id)arg1 ;
-(id)actions;
@end
