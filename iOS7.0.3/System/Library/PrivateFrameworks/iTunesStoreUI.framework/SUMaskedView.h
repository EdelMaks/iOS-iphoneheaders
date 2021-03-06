/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class SUMaskProvider;

@interface SUMaskedView : UIView {

	SUMaskProvider* _maskProvider;

}

@property (nonatomic,retain) SUMaskProvider * maskProvider;              //@synthesize maskProvider=_maskProvider - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setMaskProvider:(id)arg1 ;
-(id)maskProvider;
-(CGPathRef)copyMaskPath;
-(void)_reloadMask;
@end

