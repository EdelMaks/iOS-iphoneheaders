/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTOperatorNode.h>

@interface TSTPrefixOperatorNode : TSTOperatorNode
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(PrefixOperatorNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const PrefixOperatorNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS267)arg2 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(bool)arg2 ;
@end
