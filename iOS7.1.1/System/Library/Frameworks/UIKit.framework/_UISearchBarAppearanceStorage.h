/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSValue, UIImage;

@interface _UISearchBarAppearanceStorage : NSObject {

	NSMutableDictionary* searchFieldBackgroundImages;
	NSValue* searchFieldPositionAdjustment;
	NSMutableDictionary* iconImages;
	UIImage* separatorImage;
	UIImage* scopeBarBackgroundImage;

}

@property (nonatomic,retain) NSValue * searchFieldPositionAdjustment; 
@property (nonatomic,retain) UIImage * separatorImage; 
@property (nonatomic,retain) UIImage * scopeBarBackgroundImage; 
-(void)dealloc;
-(void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)searchFieldBackgroundImageForState:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forIcon:(long long)arg2 state:(unsigned long long)arg3 ;
-(id)imageForIcon:(long long)arg1 state:(unsigned long long)arg2 ;
-(id)searchFieldPositionAdjustment;
-(void)setSearchFieldPositionAdjustment:(id)arg1 ;
-(id)separatorImage;
-(void)setSeparatorImage:(id)arg1 ;
-(id)scopeBarBackgroundImage;
-(void)setScopeBarBackgroundImage:(id)arg1 ;
@end

