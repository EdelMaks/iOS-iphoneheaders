/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMapTileModel.h>
#import <VectorKit/VKMapLayer.h>

@class NSMutableArray, NSString;

@interface VKRasterOverlayMapModel : VKMapTileModel <VKMapLayer> {

	NSMutableArray* _sortedTiles;
	unsigned long long _level;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _gglRenderState;
	unique_ptr<ggl::Mesh, std::__1::default_delete<ggl::Mesh> >* _unitMesh;
	unique_ptr<ggl::ClearItem, std::__1::default_delete<ggl::ClearItem> >* _clearItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(BOOL)shouldLayoutWithoutStyleManager;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(unsigned long long)mapLayerPosition;
-(id)initWithLevel:(unsigned long long)arg1 ;
@end
