/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKAnnotationContainerView.h>

@interface MKNewAnnotationContainerView : MKAnnotationContainerView {

	BOOL _suppress;

}
-(void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2 ;
-(void)_updateAnnotationViewPerspective;
-(void)suppressUpdates;
-(void)stopSuppressingUpdates;
-(void)_updateAnnotationView:(id)arg1 ;
-(void)_updateAnnotationViewPositions;
-(void)_updateAddedAnnotationRotation:(id)arg1 ;
@end

