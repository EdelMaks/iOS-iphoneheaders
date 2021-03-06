/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MusicUI/MusicSearchTableViewDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MusicSearchViewControllerDelegate;
@class SKUICircleProgressIndicator, NSMapTable, UIButton, UILabel, NSMutableArray, UITraitCollection, NSArray, NSOperationQueue, UIView, UITapGestureRecognizer, NSString, UITableView;

@interface MusicSearchViewController : UIViewController <MusicSearchTableViewDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {

	SKUICircleProgressIndicator* _activityIndicatorView;
	BOOL _canShowContinueSearch;
	NSMapTable* _calculatedHeightByTableViewRelatedClass;
	UIButton* _continueSearchButton;
	BOOL _isSearchInProgress;
	UILabel* _loadingLabel;
	NSMutableArray* _nonEmptySearchDataSources;
	UILabel* _noResultsLabel;
	UITraitCollection* _previousTraitCollection;
	NSArray* _searchDataSources;
	NSOperationQueue* _searchOperationQueue;
	UIView* _tableViewBackgroundView;
	UIView* _tableViewDimmingView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<MusicSearchViewControllerDelegate> _delegate;
	NSString* _searchTerm;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) id<MusicSearchViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * searchTerm;                                            //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)searchTerm;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MusicSearchViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MusicSearchViewControllerDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UITableView *)tableView;
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(Class)_resultsTableViewClass;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(void)_reloadData;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)musicSearchTableView:(id)arg1 traitCollectionDidChange:(id)arg2 ;
-(void)_musicDefaultsDidChangeNotification:(id)arg1 ;
-(void)_storeRestrictionsDidChangeNotification:(id)arg1 ;
-(void)_continueSearchAction:(id)arg1 ;
-(void)_tapGestureRecognizerAction:(id)arg1 ;
-(BOOL)_isSearchInProgress;
-(void)_invalidateCalculatedHeights;
-(void)_updateResultsForSearchTerm:(id)arg1 ;
-(id)_newSearchDataSources;
-(void)_searchDataSourceDidInvalidateNotification:(id)arg1 ;
-(Class)_searchCellConfigurationClassForSearchDataSource:(id)arg1 ;
-(void)_performDefaultActionForSearchDataSource:(id)arg1 entity:(id)arg2 ;
-(double)_heightForCellConfigurationClass:(Class)arg1 inTableView:(id)arg2 ;
-(id)_searchSectionTitleForSearchDataSource:(id)arg1 ;
-(void)_updateVisibleHeadersState;
@end

