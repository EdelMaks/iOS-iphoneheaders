/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableArray;

@interface WFWhitelistSiteBuffer : NSObject {

	NSMutableSet* siteSet;
	NSMutableArray* siteBuffer;
	unsigned long long maxSize;

}

@property (retain) NSMutableSet * siteSet; 
@property (retain) NSMutableArray * siteBuffer; 
@property (assign) unsigned long long maxSize; 
-(void)trimToSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(unsigned long long)maxSize;
-(void)setMaxSize:(unsigned long long)arg1 ;
-(id)siteBuffer;
-(id)siteSet;
-(void)addURLString:(id)arg1 ;
-(bool)containsURLString:(id)arg1 ;
-(bool)containsMetasitePrefixOfURLString:(id)arg1 ;
-(void)setSiteSet:(id)arg1 ;
-(void)setSiteBuffer:(id)arg1 ;
@end

