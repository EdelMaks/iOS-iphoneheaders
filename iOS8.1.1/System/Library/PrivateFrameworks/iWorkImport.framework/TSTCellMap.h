/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSTCellMap <NSObject>
@property (assign,nonatomic) BOOL appliesToHidden; 
@required
-(void)addCell:(id)arg1 andCellID:(SCD_Struct_TS272)arg2;
-(SCD_Struct_TS272*)cellIDAtIndex:(unsigned long long)arg1;
-(void)popLastCell;
-(BOOL)mayModifyFormulasInCells;
-(BOOL)mayModifyValuesReferencedByFormulas;
-(void)setMayModifyValuesReferencedByFormulas:(BOOL)arg1;
-(BOOL)appliesToHidden;
-(void)setAppliesToHidden:(BOOL)arg1;
-(unsigned long long)count;
-(id)cellAtIndex:(unsigned long long)arg1;

@end

