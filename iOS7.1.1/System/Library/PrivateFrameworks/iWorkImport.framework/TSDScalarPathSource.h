/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPathSource.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSDSmartPathSource.h>

@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {

	int mType;
	double mScalar;
	CGSize mNaturalSize;

}

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) double scalar; 
@property (nonatomic,readonly) double maxScalar; 
@property (assign,nonatomic) CGSize naturalSize; 
@property (readonly) unsigned long long numberOfControlKnobs; 
+(id)roundedRectangleWithScalar:(double)arg1 naturalSize:(CGSize)arg2 ;
+(id)regularPolygonWithScalar:(double)arg1 naturalSize:(CGSize)arg2 ;
+(id)pathSourceWithType:(int)arg1 scalar:(double)arg2 naturalSize:(CGSize)arg3 ;
+(id)rectangleWithNaturalSize:(CGSize)arg1 ;
+(id)chevronWithScalar:(double)arg1 naturalSize:(CGSize)arg2 ;
-(void)saveToArchive:(PathSourceArchive*)arg1 ;
-(id)initWithArchive:(const PathSourceArchive*)arg1 ;
-(double)scalar;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)bezierPathWithoutFlips;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(id)valueForSetSelector:(SEL)arg1 ;
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)getFeedbackStringForKnob:(unsigned long long)arg1 ;
-(CGPathRef)newFeedbackPathForKnob:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(CGSize)scaleFactorForInscribedRectangle;
-(id)initWithType:(int)arg1 scalar:(double)arg2 naturalSize:(CGSize)arg3 ;
-(void)setScalar:(double)arg1 ;
-(CGPoint)p_getControlKnobPointForRoundedRect;
-(CGPoint)p_getControlKnobPointForRegularPolygon;
-(CGPoint)p_getControlKnobPointForChevron;
-(void)p_setControlKnobPointForRoundedRect:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForRegularPolygon:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForChevron:(CGPoint)arg1 ;
-(void)setScalarValue:(id)arg1 ;
-(CGPathRef)p_newRoundedRectPath;
-(CGPathRef)p_newRegularPolygonPath;
-(CGPathRef)p_newChevronPath;
-(double)maxScalar;
-(void)setNaturalSize:(CGSize)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(CGSize)naturalSize;
-(bool)isRectangular;
-(bool)isCircular;
@end
