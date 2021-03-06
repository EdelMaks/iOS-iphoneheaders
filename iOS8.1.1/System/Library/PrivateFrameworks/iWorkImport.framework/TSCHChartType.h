/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMixing.h>

@class TSCHChartFeature;

@interface TSCHChartType : NSObject <TSDMixing> {

	TSCHChartFeature* mFeature;

}
+(id)pieChart3D;
+(id)lineChart3D;
+(id)areaChart3D;
+(id)stackedAreaChart3D;
+(id)scatterChart;
+(id)multiDataScatterChart;
+(id)bubbleChart;
+(id)multiDataBubbleChart;
+(id)pieChart;
+(id)barChart;
+(id)barChart3D;
+(id)columnChart;
+(id)columnChart3D;
+(id)lineChart;
+(id)areaChart;
+(id)stackedBarChart;
+(id)stackedBarChart3D;
+(id)stackedColumnChart;
+(id)stackedColumnChart3D;
+(id)stackedAreaChart;
+(id)mixedChart;
+(id)twoYAxisChart;
+(id)chartTypePlaceholderForDefault3DScaleProperty;
+(id)multiDataColumnChart;
+(id)multiDataBarChart;
+(id)allChartTypes;
+(id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1 chartType:(id)arg2 barShape:(int)arg3 ;
+(double)sageDepthFactorForExportingChartInfo:(id)arg1 ;
-(id)g_genericToSpecificPropertyMapPie;
-(id)g_genericToSpecificPropertyMapScatter;
-(id)g_genericToSpecificPropertyMapBar;
-(id)g_genericToSpecificPropertyMapColumn;
-(id)g_genericToSpecificPropertyMapLine;
-(id)g_genericToSpecificPropertyMapArea;
-(id)g_genericToSpecificPropertyMapStackedColumn;
-(id)g_genericToSpecificPropertyMapStackedBar;
-(id)g_genericToSpecificPropertyMapStackedArea;
-(id)g_genericToSpecificPropertyMapBubble;
-(id)g_genericToSpecificPropertyMapMixed;
-(id)g_genericToSpecificPropertyMapTwoAxis;
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(BOOL)layoutFrameShouldEncloseInfoGeometry;
-(CGSize)mungeBodySize:(CGSize)arg1 ;
-(id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2 ;
-(double)valueAxisTitleRotation;
-(double)categoryAxisTitleRotation;
-(id)linearTimeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 ;
-(id)cascadeTimeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 ;
-(id)timeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 deliveryStyle:(unsigned long long)arg4 ;
-(BOOL)supportsSeriesLabels;
-(id)otherDimensionChartType;
-(Class)repClass;
-(BOOL)drawValueLabelsForZero;
-(id)supportedAxisScales;
-(BOOL)isMultiData;
-(unsigned long long)maxCellsToCheckForGridValueType;
-(BOOL)supportsCategoryAxisPlotToEdgesOption;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)valueAxisIDs;
-(unsigned long long)styleIndexForAxisID:(id)arg1 ;
-(Class)valueAxisClassForID:(id)arg1 scale:(int)arg2 ;
-(id)categoryAxisIDs;
-(id)defaultSeriesType:(unsigned long long)arg1 ;
-(BOOL)supportsMultipleSeriesTypes;
-(BOOL)requiresYAxisOrdinal;
-(id)defaultDataFileName;
-(id)genericToSpecificPropertyMap;
-(BOOL)supportsSeriesFill;
-(BOOL)supportsSeriesStroke;
-(BOOL)supportsShadowOffset;
-(BOOL)supportsValueLabels;
-(id)userInterfaceName;
-(int)stackingSignRule;
-(Class)presetImagerClass;
-(id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(CGSize)arg3 imageScale:(double)arg4 swatchFrame:(CGRect)arg5 documentRoot:(id)arg6 shouldCache:(BOOL*)arg7 ;
-(UIEdgeInsets)swatchImageEdgeInsetsForSize:(CGSize)arg1 ;
-(id)supportedSeriesTypes;
-(BOOL)supportsBorderFrame;
-(BOOL)supportsEditingForAxisID:(id)arg1 ;
-(BOOL)reverseSingleColumnLegendOrder;
-(BOOL)supportsGroupedShadows;
-(BOOL)supportsEditing;
-(BOOL)supportsBackgroundFill;
-(BOOL)supportsReverseChunking;
-(BOOL)supportsTrendLines;
-(BOOL)supportsErrorBars;
-(BOOL)supportsElementSeriesNames;
-(BOOL)supportsLabelExplosion;
-(BOOL)supportsPercentNumberFormatting;
-(BOOL)supportsSymbolOverhang;
-(BOOL)supportsElementChunking;
-(BOOL)supportsCategoryAxisMinorTickmarks;
-(BOOL)supportsCategoryAxisSeriesNames;
-(BOOL)supportsConnectingLines;
-(BOOL)supportsMoreThanOneLiveCategory;
-(BOOL)supportsCategoryLabelsInChartRangeEditor;
-(BOOL)supportsSharedAndSeparateX;
-(BOOL)supportsBubbleOptions;
-(void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2 ;
-(BOOL)supportsShowLabelsInFrontOption;
-(id)animationFiltersWithDefaultFilters:(id)arg1 ;
-(Class)chartLayoutItemClass;
-(Class)chartLayoutClass;
-(Class)sageGeometeryHelperClass;
-(BOOL)explosionAffectsChartBodyBounds;
-(BOOL)supportsMinorGridlines;
-(BOOL)supportsAxisLine;
-(BOOL)supportsIndividualShadowRendering;
-(id)animationDeliveryStylesForFilter:(id)arg1 ;
-(id)initWithFeatureClass:(Class)arg1 ;
-(unsigned long long)presentationDimension;
-(BOOL)supportsCategoryAxisLabels;
-(int)chartBodyBoundsDefinition;
-(CGSize)minimumChartBodySize;
-(BOOL)approximatesTitleAccommodationUsingLegendSize;
-(BOOL)requiresSeparateLabelsRenderPass;
-(BOOL)supportsSeriesShadow;
-(BOOL)supportsErrorBarsScatterX;
-(BOOL)supportsMultipleValueScales;
-(BOOL)supportsValueAxisLabelsPosition;
-(BOOL)supportsAxisLabelsOrientation;
-(BOOL)supportsTickmarks;
-(id)allCDESectionLabels;
-(BOOL)supportsIncrementalResize;
-(id)p_debugDescription;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHorizontal;
-(BOOL)isPie;
-(Class)layoutClass;
@end

