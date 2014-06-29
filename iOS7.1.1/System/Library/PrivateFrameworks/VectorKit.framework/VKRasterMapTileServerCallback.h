/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VKRasterMapTileRequest;

@interface VKRasterMapTileServerCallback : NSObject {

	VKRasterMapTileRequest* request;
	/*^block*/ id handler;
	double startTimestamp;

}

@property (nonatomic,retain) VKRasterMapTileRequest * request; 
@property (nonatomic,copy) id handler; 
@property (assign,nonatomic) double startTimestamp; 
-(void)setRequest:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)request;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
-(double)startTimestamp;
-(void)setStartTimestamp:(double)arg1 ;
@end
