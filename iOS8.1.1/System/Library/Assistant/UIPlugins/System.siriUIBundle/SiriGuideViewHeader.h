/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <System/SiriUIReusableView.h>

@class SiriUISnippetViewController, UILabel, NSString;

@interface SiriGuideViewHeader : UICollectionReusableView <SiriUIReusableView> {

	UILabel* _headerLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController; 
+(double)defaultHeight;
+(id)reuseIdentifier;
+(id)elementKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

