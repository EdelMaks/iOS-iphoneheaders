/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartRep.h>
#import <iWorkImport/TSCHChartPieWedgeExplosionTracking.h>

@class TSCHChartPieElementsRenderer, NSArray, NSDictionary, TSCHChartPieWedgeKnobTracker;

@interface TSCHPieChartRep : TSCHChartRep <TSCHChartPieWedgeExplosionTracking> {

	TSCHChartPieElementsRenderer* mPieElementRenderer;
	NSArray* mWedgeKnobs;
	NSDictionary* mSeriesIndexedPieWedgeDraggingLayers;
	bool mHasDrawnSinceWedgeKnobTrackerCreated;

}

@property (readonly) TSCHChartPieWedgeKnobTracker * wedgeExplosionTracker; 
-(void)processChanges:(id)arg1 ;
-(void)renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(void)knobTrackingDidBegin:(id)arg1 ;
-(void)knobTrackingDidEnd:(id)arg1 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)clearRenderers;
-(id)knobForDynamicStyleChangeKey:(id)arg1 ;
-(void)addChartKnobsToArray:(id)arg1 ;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(id)newTrackerForKnob:(id)arg1 ;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(CGPoint)effectivePointForDragPoint:(CGPoint)arg1 startingFrom:(CGPoint)arg2 forSeries:(unsigned long long)arg3 ;
-(float)newExplosionValueForFinalDragPoint:(CGPoint)arg1 startingFrom:(CGPoint)arg2 forSeries:(unsigned long long)arg3 knob:(id)arg4 ;
-(bool)pieWedgeHitByUnscaledPoint:(CGPoint)arg1 seriesIndex:(unsigned long long)arg2 distanceFromCenter:(CGPoint*)arg3 ;
-(void)explosionsDidUpdateForNewSeriesIndexedExplosions:(id)arg1 ;
-(bool)forceRenderBlankBackground;
-(id)subselectionLayer;
-(int)dragTypeAtCanvasPoint:(CGPoint)arg1 ;
-(void)setCurrentKnobTracker:(id)arg1 ;
-(id)pieElementRenderer;
-(id)p_makePieWedgeKnob;
-(double)p_radius;
-(id)wedgeExplosionTracker;
-(CGPoint)p_distanceForExplosionValue:(float)arg1 startExplosionValue:(float)arg2 seriesIndex:(unsigned long long)arg3 ;
-(double)dragTravelAlongBisectorBetweenStartPoint:(CGPoint)arg1 andEndingPoint:(CGPoint)arg2 forSeries:(unsigned long long)arg3 ;
-(void)dealloc;
@end
