/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSACPTextStyleReplacementStrategy.h>

@class TSTTableStylePreset;

@interface TSACPTableTextStyleReplacementStrategy : TSACPTextStyleReplacementStrategy {

	TSTTableStylePreset* mRootPreset;

}

@property (nonatomic,readonly) TSTTableStylePreset * rootPreset; 
-(id)initWithChangePropagationVisitor:(id)arg1 storage:(id)arg2 rootTableStylePreset:(id)arg3 forLockedObject:(BOOL)arg4 ;
-(void)populateStyleReplacements:(id)arg1 forParagraphStyle:(id)arg2 listStyle:(id)arg3 parIndex:(unsigned)arg4 ;
-(id)rootPreset;
-(void)dealloc;
@end

