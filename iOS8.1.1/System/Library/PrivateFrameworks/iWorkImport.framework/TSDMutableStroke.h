/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStroke.h>

@class TSUColor, TSDStrokePattern;

@interface TSDMutableStroke : TSDStroke

@property (assign,nonatomic) BOOL dontClearBackground; 
@property (nonatomic,retain) TSUColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double actualWidth; 
@property (assign,nonatomic) int cap; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,retain) TSDStrokePattern * pattern; 
+(id)emptyStroke;
+(id)stroke;
-(void)setDontClearBackground:(BOOL)arg1 ;
-(void)setPropertiesFromStroke:(id)arg1 ;
-(void)setPatternPropertiesFromStroke:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
