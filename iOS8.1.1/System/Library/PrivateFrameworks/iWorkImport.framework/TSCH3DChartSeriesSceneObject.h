/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartElementSceneObject.h>

@interface TSCH3DChartSeriesSceneObject : TSCH3DChartElementSceneObject
+(float)depthLimitFactorForSeriesCount:(long long)arg1 maxLimitingSeries:(long long)arg2 ;
+(Class)propertiesClass;
+(BOOL)shouldCreateMeshSeriesStorage;
+(float)chartSeriesPolygonOffset;
+(id)createBoundsForSeries:(id)arg1 ;
-(float)chartMinZForScene:(id)arg1 ;
-(float)depthForScene:(id)arg1 ;
-(void)sortElements:(vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> >*)arg1 pipeline:(id)arg2 ;
-(BOOL)shouldRenderSeries:(id)arg1 ;
-(void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4 ;
-(void)updateElementEffectsStates:(const RenderElementInfo*)arg1 depthToWidthRatio:(float)arg2 ;
-(void)prerenderElement:(const RenderElementInfo*)arg1 ;
-(void)postrenderElement:(const RenderElementInfo*)arg1 ;
-(BOOL)transparencyDepthMask;
-(void)updateTilingEffect:(TexCoordTilingShaderEffectState*)arg1 properties:(id)arg2 textureTiling:(id)arg3 size:(tvec3<float>*)arg4 ;
-(float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)arg1 ;
@end

