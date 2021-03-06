/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKPolylineGroupOverlayObserver.h>
#import <VectorKit/VKPolylineObserver.h>

@protocol VKRouteMatchedAnnotationPresentation, VKGlobeLineContainerDelegate;
@class NSMutableArray, VKGlobeViewWrapper, VKPolylineOverlay, NSMutableSet;

@interface VKGlobeLineContainer : NSObject <VKPolylineGroupOverlayObserver, VKPolylineObserver> {

	bool _trafficEnabled;
	<VKRouteMatchedAnnotationPresentation>* _routeLineSplitAnnotation;
	<VKGlobeLineContainerDelegate>* _delegate;
	NSMutableArray* _overlays;
	VKGlobeViewWrapper* _wrapper;
	map<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData>, std::__1::less<VKPolylineOverlay *>, vk_allocator<std::__1::pair<VKPolylineOverlay *const, std::__1::weak_ptr<altitude::RouteLineData> > > >* _polylinesToRoutes;
	VKPolylineOverlay* _selectedPolyline;
	NSMutableSet* _persistentOverlays;
	VKGlobeRouteSplit* _routeSplit;
	VKGlobeRouteStyle* _routeStyle;

}

@property (nonatomic,retain) <VKRouteMatchedAnnotationPresentation> * routeLineSplitAnnotation; 
@property (assign,nonatomic) <VKGlobeLineContainerDelegate> * delegate;                                      //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)update;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)setStylesheet:(id)arg1 ;
-(void)setTrafficEnabled:(bool)arg1 ;
-(id)persistentOverlays;
-(void)removePersistentOverlay:(id)arg1 ;
-(void)addPersistentOverlay:(id)arg1 ;
-(id)overlays;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(id)routeLineSplitAnnotation;
-(void)setRouteLineSplitAnnotation:(id)arg1 ;
-(void)setNeedsLayoutForPolyline:(id)arg1 ;
-(void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2 ;
-(id)initWithGlobeViewWrapper:(id)arg1 stylesheet:(id)arg2 ;
-(void)addLine:(id)arg1 ;
-(void)removeLine:(id)arg1 ;
-(void)setSelected:(id)arg1 selected:(bool)arg2 ;
-(void)_recreateLinesIfNeeded;
-(void)_updateRouteSplit;
-(void)clearLineSelection;
@end

