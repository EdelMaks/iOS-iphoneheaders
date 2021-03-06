/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DBaseImageTextureTiling.h>

@interface TSCH3DImageTextureTiling : TSCH3DBaseImageTextureTiling {

	int mMode;
	int mWrap;
	int mFace;
	int mXposition;
	int mYposition;
	int mScontinuity;
	int mTcontinuity;
	bool mReveal;

}

@property (assign,nonatomic) int mode; 
@property (assign,nonatomic) int wrap; 
@property (assign,nonatomic) int face; 
@property (assign,nonatomic) int xposition; 
@property (assign,nonatomic) int yposition; 
@property (assign,nonatomic) int scontinuity; 
@property (assign,nonatomic) int tcontinuity; 
@property (assign,nonatomic) bool reveal; 
+(id)instanceWithArchive:(const Chart3DImageTextureTilingArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DImageTextureTilingArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DImageTextureTilingArchive*)arg1 unarchiver:(id)arg2 ;
-(void)restoreDefault;
-(void)copyFromBaseImageTextureTiling:(id)arg1 ;
-(int)xposition;
-(void)setXposition:(int)arg1 ;
-(int)yposition;
-(void)setYposition:(int)arg1 ;
-(int)scontinuity;
-(void)setScontinuity:(int)arg1 ;
-(int)tcontinuity;
-(void)setTcontinuity:(int)arg1 ;
-(bool)reveal;
-(void)setReveal:(bool)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(int)face;
-(void)setFace:(int)arg1 ;
-(int)wrap;
-(void)setWrap:(int)arg1 ;
@end

