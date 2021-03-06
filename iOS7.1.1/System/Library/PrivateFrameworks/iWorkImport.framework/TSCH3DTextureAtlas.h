/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface TSCH3DTextureAtlas : NSObject {

	NSMutableDictionary* mCachedLabels;
	NSMutableArray* mTextures;
	float mSamples;

}

@property (nonatomic,readonly) float samples; 
+(id)atlasWithSamples:(float)arg1 ;
+(id)atlas;
-(id)initWithSamples:(float)arg1 ;
-(tvec3<int>)p_addLabel:(id)arg1 ;
-(tvec2<int>)textureSizeAtIndex:(long long)arg1 ;
-(tvec3<int>)positionForLabel:(id)arg1 ;
-(void)dealloc;
-(float)samples;
-(id)textureAtIndex:(long long)arg1 ;
@end

