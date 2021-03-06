/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKBCacheableView.h>

@class CALayer, NSString;

@interface UIKBThemedView : UIView <UIKBCacheableView> {

	CALayer* _borders;
	CALayer* _background;
	bool _lightKeyboard;
	bool _active;
	bool _usePersistentCaching;
	int _style;
	UIEdgeInsets _cacheInsets;

}

@property (assign,nonatomic) bool active;                            //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) int style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cacheInsets;               //@synthesize cacheInsets=_cacheInsets - In the implementation block
@property (assign,nonatomic) bool usePersistentCaching;              //@synthesize usePersistentCaching=_usePersistentCaching - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) bool cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) bool keepNonPersistent; 
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(bool)_canDrawContent;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(bool)active;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setActive:(bool)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(id)cacheKey;
-(double)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(bool)cacheDeferable;
-(bool)keepNonPersistent;
-(void)setCacheInsets:(UIEdgeInsets)arg1 ;
-(void)setUsePersistentCaching:(bool)arg1 ;
-(UIEdgeInsets)cacheInsets;
-(void)_popuplateLayer:(id)arg1 withContents:(id)arg2 ;
-(bool)_hasInsets;
-(id)traitsForCurrentStyle;
-(bool)usePersistentCaching;
@end

