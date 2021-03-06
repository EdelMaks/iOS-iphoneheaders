/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CKTranscriptManagementView : UIView {

	BOOL _suppressMapMovement;
	UIView* _mapView;
	UIView* _attachmentsCollectionView;
	UIView* _nameField;
	double _navigationBarTopInset;
	double _scrollYOffset;

}

@property (nonatomic,retain) UIView * mapView;                                //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) UIView * attachmentsCollectionView;              //@synthesize attachmentsCollectionView=_attachmentsCollectionView - In the implementation block
@property (nonatomic,retain) UIView * nameField;                              //@synthesize nameField=_nameField - In the implementation block
@property (assign,nonatomic) BOOL suppressMapMovement;                        //@synthesize suppressMapMovement=_suppressMapMovement - In the implementation block
@property (assign,nonatomic) double navigationBarTopInset;                    //@synthesize navigationBarTopInset=_navigationBarTopInset - In the implementation block
@property (assign,nonatomic) double scrollYOffset;                            //@synthesize scrollYOffset=_scrollYOffset - In the implementation block
-(void)setMapView:(UIView *)arg1 ;
-(UIView *)mapView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(double)scrollYOffset;
-(UIView *)attachmentsCollectionView;
-(BOOL)suppressMapMovement;
-(UIView *)nameField;
-(double)navigationBarTopInset;
-(void)setAttachmentsCollectionView:(UIView *)arg1 ;
-(void)setNameField:(UIView *)arg1 ;
-(void)setSuppressMapMovement:(BOOL)arg1 ;
-(void)setNavigationBarTopInset:(double)arg1 ;
-(void)setScrollYOffset:(double)arg1 ;
@end

