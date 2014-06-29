/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSKRenderingExporter <TSKExporter>
@required
-(CGRect*)boundsRect;
-(CGRect*)unscaledClipRect;
-(bool)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(bool)arg4;
-(bool)incrementPage;
-(bool)preparePage:(unsigned long long)arg1;
-(double)progressForCurrentPage;
-(bool)setInfosToCurrentPage;
-(bool)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4;
-(id)imager;
-(void)setPaginate:(bool)arg1;
-(bool)paginate;
-(bool)hasMoreThanOnePageToPrint;
-(unsigned long long)pageCount;
-(void)teardown;
-(void)setup;
@end
