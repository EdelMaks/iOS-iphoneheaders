/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class TSDMultiPaneController, TSCECalculationEngine, NSString, TSTReferenceColorHelper;

@interface TSTReferenceNode : TSTExpressionNode {

	SCD_Struct_TS269* mRangeReference;
	unsigned char mStickyBits;
	CFUUIDRef mHostTableID;
	TSDMultiPaneController* mMenuPopoverController;
	BOOL mRangeWithFunction;
	TSCECalculationEngine* mCalculationEngine;
	int mRangeContext;
	NSString* mRefString;
	NSString* mFormulaPlainText;
	TSTReferenceColorHelper* mReferenceColorHelper;
	BOOL mBlankForKeyboardInsertion;

}

@property (assign,nonatomic,@dynamic) SCD_Struct_TS274* rangeReference; 
@property (assign,nonatomic,@dynamic) SCD_Struct_TS267 rangeCoordinate; 
@property (assign,setter=setTableID:,nonatomic) CFUUIDRef tableID; 
@property (assign,setter=setHostTableID:,nonatomic) CFUUIDRef hostTableID; 
@property (assign,nonatomic) unsigned char stickyBits; 
@property (assign,nonatomic) int rangeContext; 
@property (getter=isNonSpanningRange,nonatomic,readonly) BOOL nonSpanningRange; 
@property (getter=isRange,nonatomic,readonly) BOOL range; 
@property (getter=isLocalReference,nonatomic,readonly) BOOL localReference; 
@property (assign,getter=isRangeWithFunction,nonatomic) BOOL rangeWithFunction; 
@property (getter=isSimpleRowOrColumnReference,nonatomic,readonly) BOOL simpleRowOrColumnReference; 
@property (getter=isResizable,nonatomic,readonly) BOOL resizable; 
@property (nonatomic,retain) TSTReferenceColorHelper * referenceColorHelper; 
@property (assign,getter=isBlankForKeyboardInsertion,nonatomic) BOOL blankForKeyboardInsertion; 
@property (getter=isSingleASTNode,nonatomic,readonly) BOOL singleASTNode; 
@property (nonatomic,readonly) TSCECalculationEngine * calculationEngine; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(SCD_Struct_TS274*)rangeReference;
-(int)rangeContext;
-(CFUUIDRef)tableID;
-(void)saveToArchive:(ReferenceNodeArchive*)arg1 archiver:(id)arg2 ;
-(void)setStickyBits:(unsigned char)arg1 ;
-(unsigned char)stickyBits;
-(id)calculationEngine;
-(id)initFromArchive:(const ReferenceNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)isLocalReference;
-(void)setHostTableID:(CFUUIDRef)arg1 ;
-(void)setTableID:(CFUUIDRef)arg1 ;
-(void)setReferenceColorHelper:(id)arg1 ;
-(id)formulaPlainText;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS266)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)exportString;
-(id)initWithReferenceStart:(id)arg1 referenceEnd:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(void)setRangeWithFunction:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 cellRange:(SCD_Struct_TS267)arg3 stickyBits:(unsigned char)arg4 hostTableID:(CFUUIDRef)arg5 tableID:(CFUUIDRef)arg6 referenceColorHelper:(id)arg7 firstIndex:(unsigned)arg8 lastIndex:(unsigned)arg9 ;
-(BOOL)isRange;
-(BOOL)isSingleASTNode;
-(CFUUIDRef)hostTableID;
-(SCD_Struct_TS267)rangeCoordinate;
-(id)referenceColorHelper;
-(void)p_invalidate;
-(void)setRangeCoordinate:(SCD_Struct_TS267)arg1 ;
-(BOOL)isRangeWithFunction;
-(void)p_resetMenu;
-(BOOL)isValidReference;
-(void)p_buildASTNodeArray:(TSCEASTNodeArray*)arg1 forRangeComponent:(SCD_Struct_TS266)arg2 stickyBits:(unsigned char)arg3 hostCell:(SCD_Struct_TS266)arg4 ;
-(void)setRangeReference:(SCD_Struct_TS274*)arg1 ;
-(BOOL)isNonSpanningRange;
-(BOOL)isResizable;
-(BOOL)isSimpleRowOrColumnReference;
-(BOOL)isBlankForKeyboardInsertion;
-(void)setBlankForKeyboardInsertion:(BOOL)arg1 ;
-(id)asTableSelection;
-(void)setRangeContext:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)string;
-(id).cxx_construct;
-(int)tokenType;
@end
