/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView;

@interface UIPrinterSearchingView : UIView {

	UILabel* _searchingLabel;
	UIActivityIndicatorView* _searchingIndicator;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)searchTimeout;
-(id)initInView:(id)arg1 ;
-(void)setSearching:(bool)arg1 ;
@end
