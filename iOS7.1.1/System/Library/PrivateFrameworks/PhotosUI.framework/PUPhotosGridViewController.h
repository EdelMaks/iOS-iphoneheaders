/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <PhotoLibraryServices/PLAssetContainerListChangeObserver.h>
#import <PhotoLibrary/PLAssetContainerObserver.h>
#import <PhotosUI/PUCollectionViewReorderDelegate.h>
#import <PhotosUI/PUSessionInfoObserver.h>
#import <PhotoLibrary/PLDeletePhotosActionControllerDelegate.h>
#import <UIKit/_UISettingsKeyObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <PhotosUI/PLNavigableAssetContainerViewController.h>
#import <PhotoLibrary/PLDismissableViewController.h>
#import <PhotosUI/PUStackedAlbumControllerTransition.h>

@protocol PLAssetContainer, PLAssetContainerList, PUGridLayoutProtocol;
@class NSMutableArray, NSIndexPath, UIView, UIBarButtonItem, UINavigationButton, UILongPressGestureRecognizer, PUPhotosGridViewControllerSpec, PUSessionInfo, UICollectionViewLayout, PUPhotoSelectionManager, PUPhotoPinchGestureRecognizer, _UIContentUnavailableView, UIActionSheet, PLDeletePhotosActionController, PUAlbumPickerViewController, PUPhotosSinglePickerViewController, PUActivityViewController, PUAlbumListTransitionContext, PUPhotoBrowserController, PUPopoverController, PUPreheatManager;

@interface PUPhotosGridViewController : UICollectionViewController <UIPopoverControllerDelegate, PLAssetContainerListChangeObserver, PLAssetContainerObserver, PUCollectionViewReorderDelegate, PUSessionInfoObserver, PLDeletePhotosActionControllerDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, PLNavigableAssetContainerViewController, PLDismissableViewController, PUStackedAlbumControllerTransition> {

	NSMutableArray* _pendingCollectionListChangeNotifications;
	NSMutableArray* _pendingSingleCollectionChangeNotifications;
	NSIndexPath* _copyPasteIndexPath;
	bool _isCopyPasteIndexPathExact;
	bool _contentViewInSyncWithModel;
	bool _didScrollToInitialPosition;
	UIView* _alternateContentView;
	double _lastUpdateLayoutMetricsCollectionViewWidth;
	<PLAssetContainer>* _lastAccessedCollection;
	long long _lastAccessedCollectionIndex;
	UIBarButtonItem* _selectSessionDoneBarButtonItem;
	UIBarButtonItem* _cancelButtonItem;
	UINavigationButton* _selectionButton;
	UIBarButtonItem* _shareToolbarButton;
	UIBarButtonItem* _addToolbarButton;
	UIBarButtonItem* _removeToolbarButton;
	UIBarButtonItem* _slideshowButtonSpacer;
	UIBarButtonItem* _slideshowButton;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	/*^block*/ id _onViewDidLayoutSubviewsBlock;
	bool _deletesDuplicatesWhenNecessary;
	bool _initiallyScrolledToBottom;
	bool _alwaysHideTabBar;
	bool __hasEditSessionReorderedItems;
	PUPhotosGridViewControllerSpec* _gridSpec;
	<PLAssetContainerList>* _photoCollections;
	PUSessionInfo* _sessionInfo;
	unsigned long long _allowedActions;
	UICollectionViewLayout<PUGridLayoutProtocol>* _mainGridLayout;
	PUPhotoSelectionManager* _photoSelectionManager;
	/*^block*/ id _onViewDidAppearCompletion;
	PUPhotoPinchGestureRecognizer* _photoOrStackPinchGestureRecognizer;
	_UIContentUnavailableView* __emptyPlaceholderView;
	unsigned long long __previousCollectionsCount;
	UIActionSheet* __removeActionSheet;
	PLDeletePhotosActionController* __deleteActionController;
	PUAlbumPickerViewController* __albumPickerViewController;
	PUPhotosSinglePickerViewController* __sharingPhotosPickerViewController;
	PUActivityViewController* __activityViewController;
	PUAlbumListTransitionContext* _albumListTransitionContext;
	UICollectionViewLayout* __albumListTransitionLayout;
	UIBarButtonItem* _customDoneButtonItem;
	PUPhotoBrowserController* __pushedPhotoBrowserController;
	PUPopoverController* __puPopoverController;
	PUPreheatManager* __defaultPreheatManager;
	CGPoint __previousPreheatContentOffset;
	CGRect __previousPreheatRect;

}

@property (nonatomic,retain) PUPhotosGridViewControllerSpec * gridSpec;                                                                                          //@synthesize gridSpec=_gridSpec - In the implementation block
@property (nonatomic,retain) <PLAssetContainerList> * photoCollections;                                                                                          //@synthesize photoCollections=_photoCollections - In the implementation block
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                                                                        //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (assign,nonatomic) unsigned long long allowedActions;                                                                                                  //@synthesize allowedActions=_allowedActions - In the implementation block
@property (nonatomic,retain) UICollectionViewLayout<PUGridLayoutProtocol> * mainGridLayout;                                                                      //@synthesize mainGridLayout=_mainGridLayout - In the implementation block
@property (assign,nonatomic) bool deletesDuplicatesWhenNecessary;                                                                                                //@synthesize deletesDuplicatesWhenNecessary=_deletesDuplicatesWhenNecessary - In the implementation block
@property (assign,nonatomic) bool initiallyScrolledToBottom;                                                                                                     //@synthesize initiallyScrolledToBottom=_initiallyScrolledToBottom - In the implementation block
@property (assign,nonatomic) bool alwaysHideTabBar;                                                                                                              //@synthesize alwaysHideTabBar=_alwaysHideTabBar - In the implementation block
@property (setter=_setPhotoSelectionManager:,nonatomic,retain) PUPhotoSelectionManager * photoSelectionManager;                                                  //@synthesize photoSelectionManager=_photoSelectionManager - In the implementation block
@property (nonatomic,copy) id onViewDidAppearCompletion;                                                                                                         //@synthesize onViewDidAppearCompletion=_onViewDidAppearCompletion - In the implementation block
@property (setter=_setPhotoOrStackPinchGestureRecognizer:,nonatomic,retain) PUPhotoPinchGestureRecognizer * photoOrStackPinchGestureRecognizer;                  //@synthesize photoOrStackPinchGestureRecognizer=_photoOrStackPinchGestureRecognizer - In the implementation block
@property (setter=_setEmptyPlaceholderView:,nonatomic,retain) _UIContentUnavailableView * _emptyPlaceholderView;                                                 //@synthesize _emptyPlaceholderView=__emptyPlaceholderView - In the implementation block
@property (assign,setter=_setPreviousCollectionsCount:,nonatomic) unsigned long long _previousCollectionsCount;                                                  //@synthesize _previousCollectionsCount=__previousCollectionsCount - In the implementation block
@property (assign,setter=_setHasEditSessionReorderedItems:,nonatomic) bool _hasEditSessionReorderedItems;                                                        //@synthesize _hasEditSessionReorderedItems=__hasEditSessionReorderedItems - In the implementation block
@property (setter=_setRemoveActionSheet:,nonatomic,retain) UIActionSheet * _removeActionSheet;                                                                   //@synthesize _removeActionSheet=__removeActionSheet - In the implementation block
@property (setter=_setDeleteActionController:,nonatomic,retain) PLDeletePhotosActionController * _deleteActionController;                                        //@synthesize _deleteActionController=__deleteActionController - In the implementation block
@property (setter=_setAlbumPickerViewController:,nonatomic,retain) PUAlbumPickerViewController * _albumPickerViewController;                                     //@synthesize _albumPickerViewController=__albumPickerViewController - In the implementation block
@property (setter=_setSharingPhotosPickerViewController:,nonatomic,retain) PUPhotosSinglePickerViewController * _sharingPhotosPickerViewController;              //@synthesize _sharingPhotosPickerViewController=__sharingPhotosPickerViewController - In the implementation block
@property (setter=_setActivityViewController:,nonatomic,retain) PUActivityViewController * _activityViewController;                                              //@synthesize _activityViewController=__activityViewController - In the implementation block
@property (nonatomic,retain) PUAlbumListTransitionContext * albumListTransitionContext;                                                                          //@synthesize albumListTransitionContext=_albumListTransitionContext - In the implementation block
@property (setter=setAlbumListTransitionLayout:,nonatomic,retain) UICollectionViewLayout * _albumListTransitionLayout;                                           //@synthesize _albumListTransitionLayout=__albumListTransitionLayout - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * customDoneButtonItem;                                                                                             //@synthesize customDoneButtonItem=_customDoneButtonItem - In the implementation block
@property (setter=_setPushedPhotoBrowserController:,nonatomic,retain) PUPhotoBrowserController * _pushedPhotoBrowserController;                                  //@synthesize _pushedPhotoBrowserController=__pushedPhotoBrowserController - In the implementation block
@property (setter=_puSetPopoverController:,nonatomic,retain) PUPopoverController * _puPopoverController;                                                         //@synthesize _puPopoverController=__puPopoverController - In the implementation block
@property (setter=_setDefaultPreheatManager:,nonatomic,retain) PUPreheatManager * _defaultPreheatManager;                                                        //@synthesize _defaultPreheatManager=__defaultPreheatManager - In the implementation block
@property (assign,setter=_setPreviousPreheatContentOffset:,nonatomic) CGPoint _previousPreheatContentOffset;                                                     //@synthesize _previousPreheatContentOffset=__previousPreheatContentOffset - In the implementation block
@property (assign,setter=_setPreviousPreheatRect:,nonatomic) CGRect _previousPreheatRect;                                                                        //@synthesize _previousPreheatRect=__previousPreheatRect - In the implementation block
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(unsigned long long)supportedInterfaceOrientations;
-(bool)isEmpty;
-(bool)canBecomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(id)contentScrollView;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)installGestureRecognizers;
-(void)uninstallGestureRecognizers;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void).cxx_destruct;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(CGPoint)arg2 contentSize:(CGSize)arg3 ;
-(void)assetContainerDidChange:(id)arg1 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)gridSpec;
-(id)initWithSpec:(id)arg1 ;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(bool)arg4 ;
-(id)photoCollections;
-(void)setPhotoCollections:(id)arg1 ;
-(bool)shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2 ;
-(void)processPendingModelChangeNotifications;
-(void)updateInterfaceForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2 ;
-(void)setSelected:(bool)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(bool)arg4 ;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(bool)canDisplayEditButton;
-(bool)canNavigateToPhotoInteractively:(bool)arg1 ;
-(void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(CGPoint)contentOffsetForPreheating;
-(CGSize)contentSizeForPreheating;
-(id)preheatManager;
-(id)sessionInfo;
-(id)longPressGestureRecognizer;
-(id)photoOrStackPinchGestureRecognizer;
-(id)itemIndexPathAtPoint:(CGPoint)arg1 outClosestMatch:(id*)arg2 ;
-(void)handleLongPressGesture:(id)arg1 ;
-(id)photoCollectionAtIndex:(unsigned long long)arg1 ;
-(void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2 ;
-(bool)isContentViewInSyncWithModel;
-(void)setContentViewInSyncWithModel:(bool)arg1 ;
-(bool)zoomTransition:(id)arg1 getFrame:(CGRect*)arg2 contentMode:(long long*)arg3 forPhotoToken:(id)arg4 operation:(long long)arg5 ;
-(id)assetIndexPathForPhotoToken:(id)arg1 ;
-(void)updateVisibleSectionHeadersAtIndexes:(id)arg1 ;
-(id)newGridLayout;
-(void)updateLayoutMetrics;
-(bool)canBeginStackCollapseTransition;
-(bool)wantsGlobalFooter;
-(void)configureGlobalFooterView:(id)arg1 ;
-(bool)allowSlideshowButton;
-(id)bestReferenceItemIndexPath;
-(void)setMainGridLayout:(id)arg1 ;
-(void)setAllowedActions:(unsigned long long)arg1 ;
-(void)_didFinishPostingNotifications:(id)arg1 ;
-(void)_updatePhotoSelectionManager;
-(void)updateInterfaceForModelReloadAnimated:(bool)arg1 ;
-(long long)cellFillMode;
-(unsigned long long)_indexForPhotoCollection:(id)arg1 ;
-(id)indexPathForAsset:(id)arg1 inCollection:(id)arg2 ;
-(void)_setPreviousCollectionsCount:(unsigned long long)arg1 ;
-(id)photoSelectionManager;
-(unsigned long long)allowedActions;
-(bool)_allowsActions:(unsigned long long)arg1 ;
-(bool)_canAllContainersPerformEditOperation:(int)arg1 ;
-(id)_assetsAllowingEditOperation:(int)arg1 fromAssets:(id)arg2 ;
-(bool)_canShareAsset:(id)arg1 ;
-(bool)_isAddPlaceholderAtIndexPath:(id)arg1 ;
-(bool)_canRemoveContent;
-(bool)_canAddContent;
-(bool)_canShareContent;
-(bool)canDeleteContent;
-(bool)isAnyAssetSelected;
-(void)_shareButtonPressed:(id)arg1 ;
-(id)_shareableAssetsFromAssets:(id)arg1 ;
-(void)_removeButtonPressed:(id)arg1 ;
-(id)_assetsAllowingDelete:(bool)arg1 orRemove:(bool)arg2 fromAssets:(id)arg3 ;
-(id)_barButtonSpacerWithWidth:(double)arg1 ;
-(bool)wantsAddContentInToolbar;
-(bool)canAddToOtherAlbumContent;
-(void)_addButtonPressed:(id)arg1 ;
-(void)_updateSubviewsOrderingAndVisibility;
-(void)_setPhotoSelectionManager:(id)arg1 ;
-(bool)alwaysHideTabBar;
-(id)_newEditActionItemsWithWideSpacing:(bool)arg1 ;
-(bool)wantsAddPlaceholderAtEndOfSection:(long long)arg1 ;
-(id)_defaultPreheatManager;
-(void)setLongPressGestureRecognizer:(id)arg1 ;
-(void)_handlePhotoOrStackPinchGestureRecognizer:(id)arg1 ;
-(void)_setPhotoOrStackPinchGestureRecognizer:(id)arg1 ;
-(void)_updateLayoutMetricsIfNeeded;
-(void)resetPreheating;
-(void)updatePeripheralInterfaceAnimated:(bool)arg1 ;
-(void)_setPushedPhotoBrowserController:(id)arg1 ;
-(/*^block*/ id)onViewDidAppearCompletion;
-(void)setOnViewDidAppearCompletion:(/*^block*/ id)arg1 ;
-(void)_updateGlobalFooterVisibility;
-(void)_setHasEditSessionReorderedItems:(bool)arg1 ;
-(void)_configureAddPlaceholderCell:(id)arg1 animated:(bool)arg2 ;
-(id)_deleteActionController;
-(void)_updateCollectionViewMultipleSelection;
-(bool)initiallyScrolledToBottom;
-(id)mainGridLayout;
-(void)preheatAssets;
-(bool)shouldShowToolbar;
-(bool)shouldShowTabBar;
-(void)_setPreviousPreheatContentOffset:(CGPoint)arg1 ;
-(void)_setPreviousPreheatRect:(CGRect)arg1 ;
-(CGPoint)_previousPreheatContentOffset;
-(CGRect)_previousPreheatRect;
-(id)_assetsAtIndexPaths:(id)arg1 ;
-(id)gridLayout;
-(bool)_canPasteboardCopyAssetAtIndexPath:(id)arg1 ;
-(bool)_hasAtLeastOneContainer;
-(id)assetAtIndexPath:(id)arg1 ;
-(bool)_areAllAssetsSelected;
-(void)_setActivityViewController:(id)arg1 ;
-(void)_puSetPopoverController:(id)arg1 ;
-(void)_sender:(id)arg1 shareAssets:(id)arg2 aggregateKey:(CFStringRef)arg3 completion:(/*^block*/ id)arg4 ;
-(void)sender:(id)arg1 shareSelectedAssetsWithAggregateKey:(CFStringRef)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_setSharingPhotosPickerViewController:(id)arg1 ;
-(id)_puPopoverController;
-(void)_getFirstAsset:(id*)arg1 collection:(id*)arg2 ;
-(void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(bool)arg3 ;
-(void)_startSlideshowWithSettings:(id)arg1 ;
-(id)sessionInfoForTransferredAssets:(id)arg1 ;
-(void)_setAlbumPickerViewController:(id)arg1 ;
-(void)handleAddToAction;
-(void)handleAddFromAction;
-(bool)deletesDuplicatesWhenNecessary;
-(void)_setDeleteActionController:(id)arg1 ;
-(void)_setRemoveActionSheet:(id)arg1 ;
-(void)_removeSelectedAssetsWithCompletion:(/*^block*/ id)arg1 ;
-(void)updateNavigationBarAnimated:(bool)arg1 ;
-(id)_pushedPhotoBrowserController;
-(bool)prepareForDismissingForced:(bool)arg1 ;
-(void)_updateEmptyPlaceholderAnimated:(bool)arg1 ;
-(void)updateTitle;
-(void)_updateNavigationBannerAnimated:(bool)arg1 ;
-(void)_updateToolbarContentsAnimated:(bool)arg1 ;
-(void)_updateSelectionForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)localizedSelectionTitle;
-(id)customDoneButtonItem;
-(id)_selectSessionDoneBarButtonItem;
-(bool)_hasEditSessionReorderedItems;
-(id)_cancelButtonItem;
-(void)_slideshowButtonPressed:(id)arg1 ;
-(id)newToolbarItems;
-(id)_pickerBannerView;
-(id)_selectionButton;
-(id)_emptyPlaceholderView;
-(void)_handleSelectSessionDoneButton:(id)arg1 ;
-(void)_handleCancelButton:(id)arg1 ;
-(void)_handleSelectionButton:(id)arg1 ;
-(void)_setEmptyPlaceholderView:(id)arg1 ;
-(void)_getInsertedCollectionIndexes:(id*)arg1 deletedIndexes:(id*)arg2 changedIndexes:(id*)arg3 forCollectionListChangeNotifications:(id)arg4 ;
-(unsigned long long)_previousCollectionsCount;
-(id)_avalancheStackImageForAsset:(id)arg1 partialStack:(bool)arg2 ;
-(void)_updatePhotoDecorationForCell:(id)arg1 animated:(bool)arg2 ;
-(void)didSelectAddPlaceholderInSection:(long long)arg1 ;
-(id)albumListTransitionContext;
-(void)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1 ;
-(void)_beginInteractiveStackCollapse:(id)arg1 ;
-(id)indexPathForAsset:(id)arg1 hintCollection:(id)arg2 hintIndexPath:(id)arg3 ;
-(id)_albumListTransitionLayout;
-(void)_navigateToPhotoAtIndexPath:(id)arg1 animated:(bool)arg2 interactive:(bool)arg3 ;
-(void)setDeletesDuplicatesWhenNecessary:(bool)arg1 ;
-(id)_activityViewController;
-(id)_removeActionSheet;
-(id)_albumPickerViewController;
-(id)_sharingPhotosPickerViewController;
-(id)pu_debugRows;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(bool)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)sessionInfoPhotoSelectionDidChange:(id)arg1 ;
-(void)navigateToRevealPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(bool)arg3 ;
-(void)setAlbumListTransitionContext:(id)arg1 ;
-(void)setAlbumListTransitionLayout:(id)arg1 animated:(bool)arg2 ;
-(void)handleTransitionFade:(bool)arg1 animate:(bool)arg2 ;
-(void)setSessionInfo:(id)arg1 ;
-(void)setAlternateContentView:(id)arg1 ;
-(id)alternateContentView;
-(id)localizedTitleForAssets:(id)arg1 ;
-(bool)pu_wantsToolbarVisible;
-(bool)pu_wantsTabBarVisible;
-(id)indexPathsForPreheatingInRect:(CGRect)arg1 ;
-(void)sender:(id)arg1 shareAssetsInContainer:(id)arg2 withCompletion:(/*^block*/ id)arg3 ;
-(void)setCustomDoneButtonItem:(id)arg1 ;
-(void)updateVisibleSupplementaryViewsOfKind:(id)arg1 animated:(bool)arg2 ;
-(void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(bool)arg2 ;
-(id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1 ;
-(bool)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1 ;
-(id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3 ;
-(void)zoomTransition:(id)arg1 setVisibility:(bool)arg2 forPhotoToken:(id)arg3 ;
-(void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4 ;
-(void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4 ;
-(bool)pu_handleSecondTabTap;
-(void)activityViewController:(id)arg1 displayVideoRemakerProgressView:(id)arg2 ;
-(void)setGridSpec:(id)arg1 ;
-(void)setInitiallyScrolledToBottom:(bool)arg1 ;
-(void)setAlwaysHideTabBar:(bool)arg1 ;
-(void)setAlbumListTransitionLayout:(id)arg1 ;
-(void)_setDefaultPreheatManager:(id)arg1 ;
@end
