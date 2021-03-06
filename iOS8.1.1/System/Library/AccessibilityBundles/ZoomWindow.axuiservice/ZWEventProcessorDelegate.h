/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ZWEventProcessorDelegate <NSObject>
@required
-(void)eventProcessor:(id)arg1 didGetFirstTouchAtLocation:(CGPoint)arg2;
-(void)lastFingerWasLiftedWithEventProcessor:(id)arg1;
-(/*function pointer*/void**)currentUIContextForEventProcessor:(id)arg1;
-(void)disableZoomWindowHitTestingWithEventProcessor:(id)arg1;
-(long long)currentInterfaceOrientationForEventProcessor:(id)arg1;
-(void)eventProcessor:(id)arg1 didGet3FingerDragWithDelta:(CGPoint)arg2;

@end

