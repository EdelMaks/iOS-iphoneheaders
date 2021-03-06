/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <MapKit/VKMapViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MapKit/MKAnnotationManagerDelegate.h>
#import <MapKit/MKAnnotationMarkerContainer.h>
#import <MapKit/MKMapGestureControllerDelegate.h>
#import <MapKit/MKMapGestureControllerDelegate.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>
#import <MapKit/MKAnnotationContainerViewDelegate.h>

@protocol MKWorldViewDelegate;
@class UIView, MKBasicMapView, VKMapView, MKMapAnnotationManager, MKNewAnnotationContainerView, MKUserLocation, MKAnnotationView, UILabel, NSTimer, UIGestureRecognizer, UITextView, UIPanGestureRecognizer, UITapGestureRecognizer, UILongPressGestureRecognizer, VKPuckAnimator, UIImageView, MKMapGestureController, NSMutableSet, GEOMapRegion, VKLabelMarker, NSArray;

@interface MKWorldView : UIView <VKMapViewDelegate, UIGestureRecognizerDelegate, MKAnnotationManagerDelegate, MKAnnotationMarkerContainer, MKMapGestureControllerDelegate, MKMapGestureControllerDelegate, GEOResourceManifestTileGroupObserver, MKAnnotationContainerViewDelegate> {

	UIView* _contentView;
	MKBasicMapView* _basicMapView;
	VKMapView* _mapView;
	MKMapAnnotationManager* _annotationManager;
	MKNewAnnotationContainerView* _annotationContainer;
	<MKWorldViewDelegate>* _delegate;
	MKUserLocation* _userLocation;
	MKAnnotationView* _userLocationView;
	int _userTrackingMode;
	UILabel* _debugView;
	NSTimer* _debugTimer;
	UIGestureRecognizer* _debugConsoleGesture;
	UITextView* _vectorKitDebugView;
	UIPanGestureRecognizer* _vectorKitStyleDebugGesture;
	UITapGestureRecognizer* _selectingTapGestureRecognizer;
	UITapGestureRecognizer* _nonselectingTapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	VKPuckAnimator* _userLocationAnimator;
	NSTimer* _defaultLocationTimer;
	/*^block*/ id _annotationRectTest;
	/*^block*/ id _annotationCoordinateTest;
	unsigned _effectsPauseCount;
	int _originalLoopRate;
	int _preGesturingLoopRate;
	UIImageView* _attributionBadgeView;
	CGSize _attributionAnchorOffset;
	MKMapGestureController* _gestureController;
	BOOL _shouldSplitRouteLine;
	MKAnnotationView* _longPressStartAnnotationView;
	NSMutableSet* _rasterOverlays;
	/*^block*/ id _debugConsoleAdditionalInfoProvider;
	/*^block*/ id _selectAnnotationViewAfterRedrawBlock;
	struct {
		unsigned showsUserLocation : 1;
		unsigned ignoreLocationUpdates : 1;
		unsigned debugConsoleEnabled : 1;
		unsigned vectorKitConsoleEnabled : 1;
		unsigned inactive : 1;
		unsigned gesturing : 1;
		unsigned panning : 1;
		unsigned zooming : 1;
		unsigned rotating : 1;
		unsigned animatingRegionChange : 1;
		unsigned didStartPanningDeceleration : 1;
		unsigned regionChangeIsAnimated : 1;
		unsigned canSelectPOIs : 1;
		unsigned canSelectAllLabels : 1;
		unsigned isDraggingAnnotationMarker : 1;
		unsigned userInteractionPausesLocationUpdates : 1;
		unsigned locationPropagationEnabled : 1;
		unsigned locationPulseEnabled : 1;
		unsigned allowsRotation : 1;
		unsigned rotationEnabled : 1;
		unsigned allowsTilt : 1;
		unsigned tiltEnabled : 1;
		unsigned allowsMotionControl : 1;
		unsigned motionControlEnabled : 1;
		unsigned motionPermitted : 1;
		unsigned loading : 1;
		unsigned hasCustomLabelScaleFactor : 1;
		unsigned scrollWasEnabledBeforeProgrammaticPan : 1;
		unsigned hasFinishedInitialRender : 1;
		unsigned hasPendingCameraChange : 1;
		unsigned delegateImplementsDidStartLoading : 1;
		unsigned delegateImplementsDidFinishLoading : 1;
		unsigned delegateImplementsDidFailLoading : 1;
		unsigned delegateImplementsDidBecomeFullyDrawn : 1;
		unsigned delegateImplementsCalloutAccessoryControlTapped : 1;
		unsigned delegateImplementsWillAnimateInAnnotationViews : 1;
		unsigned delegateImplementsDidAnimateInAnnotationViews : 1;
		unsigned delegateImplementsPainterForOverlay : 1;
		unsigned delegateImplementsDidChangeMapType : 1;
		unsigned delegateImplementsWillChangeToMapDisplayStyle : 1;
		unsigned delegateImplementsDidChangeMapDisplayStyle : 1;
		unsigned delegateImplementsDidUpdateUserLocation : 1;
		unsigned delegateImplementsDidFailToLocateUser : 1;
		unsigned delegateImplementsDidChangeUserTrackingModeButton : 1;
		unsigned delegateImplementsDidChangeUserTrackingMode : 1;
		unsigned delegateImplementsRegionWillChangeAnimated : 1;
		unsigned delegateImplementsRegionDidChangeAnimated : 1;
		unsigned delegateImplementsDidChangeVisibleRegion : 1;
		unsigned delegateImplementsShouldSelectLabelMarker : 1;
		unsigned delegateImplementsWillSelectLabelMarker : 1;
		unsigned delegateImplementsDidSelectLabelMarker : 1;
		unsigned delegateImplementsLabelMarkerCalloutAccessoryControlTapped : 1;
		unsigned delegateImplementsDidDeselectLabelMarker : 1;
		unsigned delegateImplementsDidBecomePitched : 1;
		unsigned delegateImplementsCanEnter3DModeDidChange : 1;
		unsigned delegateImplementsAllowsRotationDidChange : 1;
		unsigned delegateImplementsAllowsTiltDidChange : 1;
		unsigned delegateImplementsAllowsMotionControlDidChange : 1;
		unsigned delegateImplementsDidStartUserInteraction : 1;
		unsigned delegateImplementsDidStopUserInteraction : 1;
		unsigned delegateImplementsWillStartRespondingToGesture : 1;
		unsigned delegateImplementsDidStopRespondingToGesture : 1;
		unsigned delegateImplementsShouldDelayTapResponseForAnnotationView : 1;
		unsigned delegateImplementsRectToAvoidForCallout : 1;
		unsigned delegateImplementsCurrentRouteMatch : 1;
		unsigned delegateImplementsCanShowFlyover : 1;
		unsigned delegateImplementsShowingFlyover : 1;
	}  _flags;

}

@property (assign,nonatomic) <MKWorldViewDelegate> * delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldSplitRouteLine;                                                        //@synthesize shouldSplitRouteLine=_shouldSplitRouteLine - In the implementation block
@property (getter=isFullyDrawn,nonatomic,readonly) BOOL fullyDrawn; 
@property (assign,nonatomic) CGSize attributionAnchorOffset;                                                   //@synthesize attributionAnchorOffset=_attributionAnchorOffset - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * nonselectingTapGestureRecognizer;                      //@synthesize nonselectingTapGestureRecognizer=_nonselectingTapGestureRecognizer - In the implementation block
@property (assign,nonatomic) double longPressDuration; 
@property (assign,nonatomic) BOOL allowsPopoverWhenNotInWindow; 
@property (assign,getter=isZoomEnabled,nonatomic) BOOL zoomEnabled; 
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (assign,getter=isRotationEnabled,nonatomic) BOOL rotationEnabled; 
@property (getter=isRotating,nonatomic,readonly) BOOL rotating; 
@property (getter=isZooming,nonatomic,readonly) BOOL zooming; 
@property (assign,getter=isTiltEnabled,nonatomic) BOOL tiltEnabled; 
@property (assign,nonatomic) BOOL panWithMomentum; 
@property (nonatomic,readonly) BOOL allowsRotation; 
@property (nonatomic,readonly) BOOL allowsTilt; 
@property (nonatomic,readonly) BOOL allowsMotionControl; 
@property (assign,nonatomic) BOOL motionPermitted; 
@property (assign,getter=isLocationPropagationEnabled,nonatomic) BOOL locationPropagationEnabled; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets; 
@property (assign,nonatomic) UIEdgeInsets fullyOccludedEdgeInsets; 
@property (assign,nonatomic) SCD_Struct_MK1 centerCoordinate; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) GEOMapRegion * mapRegionOfInterest; 
@property (assign,nonatomic) unsigned mapType; 
@property (assign,nonatomic) int mapDisplayStyle; 
@property (readonly) float zoomLevel; 
@property (getter=isChangingRegion,nonatomic,readonly) BOOL changingRegion; 
@property (nonatomic,readonly) BOOL regionChangeIsUserInitiated; 
@property (nonatomic,readonly) MKUserLocation * userLocation; 
@property (assign,nonatomic) BOOL userInteractionPausesLocationUpdates; 
@property (getter=isGoingToDefaultLocation,nonatomic,readonly) BOOL goingToDefaultLocation; 
@property (assign,nonatomic) BOOL canSelectPOIs; 
@property (nonatomic,readonly) VKLabelMarker * selectedLabelMarker; 
@property (assign,nonatomic) BOOL canSelectAllLabels; 
@property (nonatomic,readonly) NSArray * annotations; 
@property (nonatomic,readonly) NSArray * annotationViews; 
@property (nonatomic,readonly) MKAnnotationView * selectedAnnotationView; 
@property (nonatomic,readonly) BOOL canShowAnimationForPlaceCard; 
@property (assign,nonatomic) int labelScaleFactor; 
@property (nonatomic,readonly) BOOL hasUserLocation; 
@property (assign,nonatomic) BOOL showsUserLocation; 
@property (assign,nonatomic) int userTrackingZoomStyle; 
@property (assign,nonatomic) int userTrackingMode;                                                             //@synthesize userTrackingMode=_userTrackingMode - In the implementation block
@property (assign,nonatomic) BOOL showingTraffic; 
@property (assign,getter=isLoadingEnabled,nonatomic) BOOL loadingEnabled; 
@property (getter=isPitched,nonatomic,readonly) BOOL pitched; 
@property (nonatomic,readonly) BOOL canEnter3DMode; 
@property (getter=isMotionControlActive,nonatomic,readonly) BOOL motionControlActive; 
@property (getter=isShowingFlyover,nonatomic,readonly) BOOL showingFlyover; 
@property (nonatomic,readonly) BOOL canShowFlyover; 
@property (assign,getter=isDebugConsoleEnabled,nonatomic) BOOL debugConsoleEnabled; 
@property (nonatomic,readonly) VKMapView * mapView;                                                            //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,copy) id debugConsoleAdditionalInfoProvider;                                              //@synthesize debugConsoleAdditionalInfoProvider=_debugConsoleAdditionalInfoProvider - In the implementation block
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (assign,getter=isLocationPulseEnabled,nonatomic) BOOL locationPulseEnabled; 
@property (assign,getter=isVectorKitConsoleEnabled,nonatomic) BOOL vectorKitConsoleEnabled; 
@property (assign,getter=isVectorKitStyleDebugEnabled,nonatomic) BOOL vectorKitStyleDebugEnabled; 
@property (assign,nonatomic) BOOL rendersInBackground; 
+(id)mapRegionWithCenterCoordinate:(SCD_Struct_MK1)arg1 zoomScale:(float)arg2 size:(CGSize)arg3 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setLoadingEnabled:(BOOL)arg1 ;
-(void)geoDefaultsDidChange:(id)arg1 ;
-(void)deviceOrientationDidChange:(id)arg1 ;
-(void)goToDefaultLocation;
-(void)_updateAttribution;
-(BOOL)showsUserLocation;
-(void)_updateHeadingOrientation;
-(void)stopEffects;
-(void)startEffects;
-(CGRect)_debugViewFrame;
-(float)_zoomScaleForMapRegion:(id)arg1 ;
-(void)_setUserTrackingMode:(int)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3 ;
-(void)_updateIconsShouldAlignToPixels;
-(void)_addDebugGesture;
-(void)_annotationViewDragStateChanged:(id)arg1 ;
-(BOOL)isCalloutExpanded;
-(id)mapAttributionWithStringAttributes:(id)arg1 ;
-(void)selectAnnotation:(id)arg1 animated:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(BOOL)_iconsShouldAlignToPixels;
-(void)resumeUserLocationUpdates;
-(void)setUserTrackingMode:(int)arg1 ;
-(void)pauseUserLocationUpdates;
-(void)setRotationEnabled:(BOOL)arg1 ;
-(void)setTiltEnabled:(BOOL)arg1 ;
-(void)_updateDebugViewFrameWithEdgeInsets;
-(id)_mapRegionWithCenterCoordinate:(SCD_Struct_MK1)arg1 zoomScale:(float)arg2 ;
-(SCD_Struct_MK1)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2 ;
-(void)goToCenterCoordinate:(SCD_Struct_MK1)arg1 zoomLevel:(float)arg2 animationType:(int)arg3 ;
-(int)userTrackingMode;
-(void)addAnnotation:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)selectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(BOOL)annotationContainerShouldAlignToPixels:(id)arg1 ;
-(BOOL)annotationContainerIsRotated:(id)arg1 ;
-(void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(SCD_Struct_MK1)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(float)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(SCD_Struct_MK1)arg2 maxDistance:(float*)arg3 startPoint:(CGPoint*)arg4 shadowStartPoint:(CGPoint*)arg5 ;
-(void)annotationContainerWillAnimateBubble:(id)arg1 ;
-(void)annotationContainerDidAnimateBubble:(id)arg1 ;
-(void)annotationContainerWillDropPins:(id)arg1 ;
-(void)annotationContainerDidDropPins:(id)arg1 ;
-(CGRect)visibleCenteringRectInView:(id)arg1 ;
-(CGRect)visibleRectInView:(id)arg1 ;
-(CGRect)annotationContainerVisibleRect:(id)arg1 ;
-(void)annotationContainerDidFinishMapsTransitionExpanding:(id)arg1 ;
-(void)gestureControllerWillStartUserInteraction:(id)arg1 ;
-(void)gestureControllerDidStopUserInteraction:(id)arg1 ;
-(void)gestureControllerWillStartPanning:(id)arg1 ;
-(void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)gestureControllerDidStopPanningDecelerating:(id)arg1 ;
-(void)gestureControllerWillStartZooming:(id)arg1 animated:(BOOL)arg2 ;
-(void)gestureControllerDidStopZooming:(id)arg1 direction:(int)arg2 willDecelerate:(BOOL)arg3 ;
-(void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(int)arg2 ;
-(void)gestureControllerWillStartTwoFingerLongPress:(id)arg1 ;
-(void)gestureControllerDidStopTwoFingerLongPress:(id)arg1 ;
-(void)gestureControllerWillStartRotating:(id)arg1 ;
-(void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)gestureControllerDidStopRotatingDecelerating:(id)arg1 ;
-(void)gestureControllerWillStartTilting:(id)arg1 ;
-(void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)gestureControllerDidStopTiltingDecelerating:(id)arg1 ;
-(double)gestureController:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3 ;
-(void)addAnnotationRepresentation:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)removeAnnotationRepresentation:(id)arg1 ;
-(void)showCalloutIfNecessaryForAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(void)deselectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 ;
-(void)moveAnnotationRepresentation:(id)arg1 fromCoordinate:(SCD_Struct_MK1)arg2 animated:(BOOL)arg3 duration:(double)arg4 ;
-(void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2 ;
-(id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2 ;
-(void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2 ;
-(void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2 ;
-(BOOL)isLoadingEnabled;
-(BOOL)isGoingToDefaultLocation;
-(BOOL)canRotateForHeading;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerUpdatedHeading:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 gestureRecognizerHostView:(id)arg2 motionPermitted:(BOOL)arg3 ;
-(void)_updateAllowsRotation;
-(void)_updateAllowsTilt;
-(void)_updateAllowsMotionControl;
-(void)_handleTapToSelect:(id)arg1 ;
-(void)_handleTapToDeselect:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(BOOL)allowsTilt;
-(void)_updateMotionState;
-(BOOL)allowsMotionControl;
-(BOOL)allowsPopoverWhenNotInWindow;
-(void)setAllowsPopoverWhenNotInWindow:(BOOL)arg1 ;
-(void)_updateUserLocationEffects;
-(void)_toggleDebugConsole:(id)arg1 ;
-(BOOL)isChangingRegion;
-(void)_willChangeRegion:(BOOL)arg1 userInitiated:(BOOL)arg2 ;
-(void)_didChangeRegion;
-(void)deselectLabelMarkerAnimated:(BOOL)arg1 ;
-(BOOL)_supportsVKMapType:(int)arg1 ;
-(void)_sizeDidChange;
-(BOOL)isTiltEnabled;
-(BOOL)panWithMomentum;
-(void)setPanWithMomentum:(BOOL)arg1 ;
-(void)_zoomWithAmount:(double)arg1 ;
-(void)setMapRegion:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(id)mapRegionThatFits:(id)arg1 edgePadding:(UIEdgeInsets)arg2 ;
-(void)_goToMapRegion:(id)arg1 animationType:(int)arg2 ;
-(void)addAnnotations:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2 ;
-(void)_startUpdatingUserLocation;
-(void)_stopUpdatingUserLocation;
-(id)_descriptionForLocation:(id)arg1 compact:(BOOL)arg2 ;
-(void)_updateDebugConsole;
-(void)_handleStyleDebugGesture:(id)arg1 ;
-(void)setDebugConsoleEnabled:(BOOL)arg1 ;
-(void)selectLabelMarker:(id)arg1 animated:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(BOOL)hitSomethingAtTouch:(id)arg1 ;
-(double)longPressDuration;
-(void)setLongPressDuration:(double)arg1 ;
-(void)setShouldSplitRouteLine:(BOOL)arg1 ;
-(void)setAttributionAnchorOffset:(CGSize)arg1 ;
-(BOOL)motionPermitted;
-(void)setMotionPermitted:(BOOL)arg1 ;
-(BOOL)isLocationPropagationEnabled;
-(void)setLocationPropagationEnabled:(BOOL)arg1 ;
-(BOOL)isLocationPulseEnabled;
-(void)setLocationPulseEnabled:(BOOL)arg1 ;
-(id)viewportDictionary;
-(void)restoreViewportFromDictionary:(id)arg1 ;
-(UIEdgeInsets)defaultInsetsForPinAnnotations;
-(BOOL)regionChangeIsUserInitiated;
-(void)zoomIn;
-(void)zoomOut;
-(void)setMapRegion:(id)arg1 animationDuration:(double)arg2 pitch:(double)arg3 yaw:(double)arg4 completion:(/*^block*/ id)arg5 ;
-(void)goToCoordinateRegion:(SCD_Struct_MK2)arg1 animationType:(int)arg2 ;
-(void)startMotionControl;
-(void)showAnimationForSearchResult:(id)arg1 withMapRegion:(id)arg2 ;
-(id)snapshotImage;
-(void)prepareScenicAnimationForLocation:(SCD_Struct_MK1)arg1 animationType:(int)arg2 completion:(/*^block*/ id)arg3 ;
-(void)performScenicAnimationForLocation:(SCD_Struct_MK1)arg1 animationType:(int)arg2 ;
-(id)annotationViews;
-(void)addViewsForAnnotations:(id)arg1 ;
-(id)calloutPopoverController;
-(void)dismissExpandedCallout;
-(BOOL)canSelectPOIs;
-(void)setCanSelectPOIs:(BOOL)arg1 ;
-(BOOL)canSelectAllLabels;
-(void)setCanSelectAllLabels:(BOOL)arg1 ;
-(id)selectedAnnotationView;
-(BOOL)showingTraffic;
-(void)setShowingTraffic:(BOOL)arg1 ;
-(BOOL)userInteractionPausesLocationUpdates;
-(void)setUserInteractionPausesLocationUpdates:(BOOL)arg1 ;
-(int)userTrackingZoomStyle;
-(void)setUserTrackingZoomStyle:(int)arg1 ;
-(BOOL)isDebugConsoleEnabled;
-(BOOL)isVectorKitConsoleEnabled;
-(void)setVectorKitConsoleEnabled:(BOOL)arg1 ;
-(BOOL)isVectorKitStyleDebugEnabled;
-(void)setVectorKitStyleDebugEnabled:(BOOL)arg1 ;
-(void)selectLabelMarker:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldSplitRouteLine;
-(id)nonselectingTapGestureRecognizer;
-(CGSize)attributionAnchorOffset;
-(/*^block*/ id)debugConsoleAdditionalInfoProvider;
-(void)setDebugConsoleAdditionalInfoProvider:(/*^block*/ id)arg1 ;
-(int)_interfaceOrientation;
-(void)setUserTrackingMode:(int)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(BOOL)isRotating;
-(UIEdgeInsets)edgeInsets;
-(BOOL)isScrollEnabled;
-(BOOL)isUserInteractionEnabled;
-(BOOL)isZooming;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)isZoomEnabled;
-(float)_zoomScale;
-(BOOL)allowsRotation;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)hasUserLocation;
-(void)addAnnotation:(id)arg1 ;
-(BOOL)isRotationEnabled;
-(void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(CGPoint)convertCoordinate:(SCD_Struct_MK1)arg1 toPointToView:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(float)zoomLevel;
-(id)viewForAnnotation:(id)arg1 ;
-(id)annotations;
-(void)setShowsUserLocation:(BOOL)arg1 ;
-(void)selectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(id)userLocation;
-(id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1 ;
-(SCD_Struct_MK2)mapRectThatFits:(SCD_Struct_MK2)arg1 edgePadding:(UIEdgeInsets)arg2 ;
-(void)removeAnnotations:(id)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(id)mapView;
-(unsigned)mapType;
-(id)visibleTileSets;
-(int)labelScaleFactor;
-(void)setLabelScaleFactor:(int)arg1 ;
-(id)detailedDescription;
-(BOOL)rendersInBackground;
-(void)setRendersInBackground:(BOOL)arg1 ;
-(BOOL)canShowFlyover;
-(BOOL)isShowingFlyover;
-(void)removePersistentOverlay:(id)arg1 ;
-(void)addPersistentOverlay:(id)arg1 ;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(void)setMapType:(unsigned)arg1 ;
-(BOOL)canEnter3DMode;
-(void)mapView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2 ;
-(void)mapView:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2 ;
-(void)mapView:(id)arg1 showingFlyoverDidChange:(BOOL)arg2 ;
-(void)setMapRegion:(id)arg1 animated:(BOOL)arg2 ;
-(id)mapRegion;
-(id)mapRegionOfInterest;
-(void)setCenterCoordinate:(SCD_Struct_MK1)arg1 animated:(BOOL)arg2 ;
-(SCD_Struct_MK1)centerCoordinate;
-(void)setFullyOccludedEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)fullyOccludedEdgeInsets;
-(BOOL)canShowAnimationForSearchResultWithMapRegion:(id)arg1 ;
-(BOOL)canShowAnimationForPlaceCard;
-(void)startPlaceCardAnimationAtCoordinate:(SCD_Struct_MK1)arg1 andDistance:(double)arg2 ;
-(void)stopPlaceCardAnimation;
-(void)enter3DMode;
-(void)exit3DMode;
-(BOOL)isPitched;
-(BOOL)isMotionControlActive;
-(void)stopMotionControl;
-(/*^block*/ id)annotationRectTest;
-(/*^block*/ id)annotationCoordinateTest;
-(BOOL)shouldHideOffscreenSelectedAnnotation;
-(id)selectedLabelMarker;
-(void)setTracePlaybackSpeedMultiplier:(double)arg1 ;
-(void)addRasterOverlay:(id)arg1 ;
-(void)removeRasterOverlay:(id)arg1 ;
-(void)mapViewDidStartLoadingTiles:(id)arg1 ;
-(void)mapViewDidFinishLoadingTiles:(id)arg1 ;
-(void)mapViewDidFailLoadingTiles:(id)arg1 withError:(id)arg2 ;
-(void)mapViewDidChangeVisibleRegion:(id)arg1 ;
-(void)mapViewDidDraw:(id)arg1 ;
-(void)mapViewWillStartRegionAnimation:(id)arg1 ;
-(void)mapViewDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2 ;
-(id)mapView:(id)arg1 presentationForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2 ;
-(id)mapView:(id)arg1 painterForOverlay:(id)arg2 ;
-(void)mapViewDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2 ;
-(void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)mapView:(id)arg1 didFinishChangingMapDisplayStyle:(int)arg2 ;
-(void)mapView:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)mapView:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4 ;
-(void)startPanningAtPoint:(CGPoint)arg1 ;
-(void)updatePanWithTranslation:(CGPoint)arg1 ;
-(void)stopPanningAtPoint:(CGPoint)arg1 ;
-(BOOL)isFullyDrawn;
-(void)puckAnimatorDidStop:(id)arg1 ;
-(void)puckAnimator:(id)arg1 updatedTargetPosition:(SCD_Struct_MK3)arg2 ;
-(int)mapDisplayStyle;
-(void)setMapDisplayStyle:(int)arg1 ;
-(void)setMapRegion:(id)arg1 ;
-(void)setCenterCoordinate:(SCD_Struct_MK1)arg1 ;
-(void)stopScenicAnimation;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)puckAnimator:(id)arg1 runAnimation:(id)arg2 ;
-(void)puckAnimator:(id)arg1 updatedPosition:(SCD_Struct_MK3)arg2 course:(double)arg3 ;
-(double)yaw;
@end

