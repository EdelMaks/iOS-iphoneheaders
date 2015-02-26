/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSMutableArray, NSMapTable, SiriGuideModel, NSString;

@interface SiriGuideViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _standalone;
	NSMutableArray* _filteredDomainIndices;
	NSMapTable* _iconsByDomain;
	SiriGuideModel* _guideModel;

}

@property (nonatomic,readonly) SiriGuideModel * guideModel;              //@synthesize guideModel=_guideModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_filterDomains;
-(SiriGuideModel *)guideModel;
-(double)_heightOfRow;
-(id)initWithShowHelpCommand:(id)arg1 ;
-(id)_iconImageForDomain:(id)arg1 ;
-(long long)_numberOfHelpDomains;
-(double)desiredHeightForWidth:(double)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)snippet;
-(long long)_pinAnimationType;
-(Class)transparentHeaderViewClass;
@end
