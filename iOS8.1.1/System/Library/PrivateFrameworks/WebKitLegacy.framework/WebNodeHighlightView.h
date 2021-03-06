/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebCore/WAKView.h>

@class WebNodeHighlight, NSMutableArray;

@interface WebNodeHighlightView : WAKView {

	WebNodeHighlight* _webNodeHighlight;
	NSMutableArray* _layers;

}
-(void)_removeAllLayers;
-(void)dealloc;
-(BOOL)isFlipped;
-(void)layoutSublayers:(id)arg1 ;
-(id)initWithWebNodeHighlight:(id)arg1 ;
-(void)detachFromWebNodeHighlight;
-(void)_attach:(id)arg1 numLayers:(unsigned long long)arg2 ;
-(void)_layoutForNodeHighlight:(Highlight*)arg1 parent:(id)arg2 ;
-(void)_layoutForRectsHighlight:(Highlight*)arg1 parent:(id)arg2 ;
-(id)webNodeHighlight;
@end

