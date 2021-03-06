/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WBSAutomaticReadingListItem, ContinuousReadingItem;

@interface ContinuousReadingController : NSObject {

	unsigned _activeDocumentBookmarkID;
	WBSAutomaticReadingListItem* _activeDocumentAutomaticItem;
	ContinuousReadingItem* _currentContinuousItem;
	ContinuousReadingItem* _nextContinuousItem;
	BOOL _unreadReadingListItemsOnly;

}

@property (assign,nonatomic) BOOL unreadReadingListItemsOnly;              //@synthesize unreadReadingListItemsOnly=_unreadReadingListItemsOnly - In the implementation block
-(void)_clearCachedCurrentAndNextItems;
-(void)_updateCachedCurrentAndNextItems;
-(id)_tabDocument;
-(id)_readingListItemAtIndex:(unsigned)arg1 ;
-(id)_nextAutomaticReadingListItem;
-(id)currentReadingListItem;
-(id)nextReadingListItem;
-(BOOL)unreadReadingListItemsOnly;
-(void)setUnreadReadingListItemsOnly:(BOOL)arg1 ;
-(void)dealloc;
@end

