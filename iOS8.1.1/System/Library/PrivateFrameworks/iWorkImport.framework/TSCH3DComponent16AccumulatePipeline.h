/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DFramebufferSplitPipeline.h>
#import <iWorkImport/TSCH3DFramebufferAccumulator.h>

@class TSCH3DFramebufferCopyPipeline, TSCH3DComponent16WidenShaderEffect;

@interface TSCH3DComponent16AccumulatePipeline : TSCH3DFramebufferSplitPipeline <TSCH3DFramebufferAccumulator> {

	TSCH3DFramebufferCopyPipeline* mPipeline;
	TSCH3DComponent16WidenShaderEffect* mWiden;
	BOOL mValid;

}
-(id)initWithProcessor:(id)arg1 session:(id)arg2 ;
-(void)setTexcoords:(id)arg1 ;
-(id)target0FBOResource;
-(id)makeFBOWithSize:(tvec2<int>*)arg1 resource:(id)arg2 ;
-(id)target1FBOResource;
-(void)allocateFramebuffersWithSize:(tvec2<int>*)arg1 ;
-(void)setFactor:(float)arg1 ;
-(void)dealloc;
-(BOOL)run;
-(void)reset;
-(void)setVertices:(id)arg1 ;
@end

