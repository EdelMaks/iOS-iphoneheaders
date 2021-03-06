/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSPCopying.h>

@class NSMutableArray;

@interface TSTConditionalStyleSet : TSPObject <TSPCopying> {

	NSMutableArray* mConditionalStyleSetRules;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)copyByRemappingFormulaIDsWithMap:(CFDictionaryRef)arg1 calcEngine:(id)arg2 error:(BOOL*)arg3 ;
-(id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(SCD_Struct_TS266)arg3 ;
-(id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2 ;
-(id)initWithContext:(id)arg1 rules:(id)arg2 ;
-(id)initWithConditionalStyleSet:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)ruleCount;
-(id)ruleAtIndex:(unsigned)arg1 ;
-(id)rules;
@end

