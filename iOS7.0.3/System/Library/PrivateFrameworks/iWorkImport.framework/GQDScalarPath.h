/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDPath.h>

@interface GQDScalarPath : GQDPath {

	int mType;
	double mScalar;
	CGSize mSize;

}
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(CGPathRef)createBezierPath;
-(double)scalar;
-(BOOL)isRect;
-(CGSize)size;
-(int)type;
-(id).cxx_construct;
-(BOOL)isRectangular;
@end
