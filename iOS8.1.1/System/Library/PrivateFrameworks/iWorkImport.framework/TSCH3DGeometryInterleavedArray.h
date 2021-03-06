/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DGeometryVertexFormat, TSCH3Dvec1DataBuffer, TSCH3DDataBufferResource, TSCH3DUShortDataBuffer;

@interface TSCH3DGeometryInterleavedArray : NSObject {

	TSCH3DGeometryVertexFormat* mFormat;
	TSCH3Dvec1DataBuffer* mBuffer;
	TSCH3DDataBufferResource* mResource;
	TSCH3DUShortDataBuffer* mIndices;
	TSCH3DDataBufferResource* mIndicesResource;
	unsigned long long mTotalVertexCount;
	unsigned long long mElementArraysCount;
	BOOL mAllBackfacesPreculled;
	BOOL mDisableHardwareBackfaceCulling;

}

@property (nonatomic,readonly) TSCH3DGeometryVertexFormat * format; 
@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,readonly) unsigned long long elementArraysCount; 
@property (nonatomic,readonly) unsigned long long totalVertexCount; 
@property (nonatomic,readonly) BOOL disableHardwareBackfaceCulling; 
-(void)addElementArrays:(id)arg1 ;
-(unsigned long long)totalVertexCount;
-(void)submitToProcessor:(id)arg1 range:(const range<unsigned int>*)arg2 ;
-(id)indexBuffer;
-(void)p_indexVerticesFromElementArrays:(id)arg1 ;
-(void)p_copyAllVerticesFromElementArrays:(id)arg1 ;
-(unsigned long long)elementArraysCount;
-(BOOL)disableHardwareBackfaceCulling;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)hasData;
-(TSCH3DGeometryVertexFormat *)format;
@end

