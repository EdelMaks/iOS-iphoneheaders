/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSISVariableDelegate;
@interface NSISVariable : NSObject {

	<NSISVariableDelegate>* _delegate;
	int _refCount;
	unsigned _ident;

}

@property (assign) <NSISVariableDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) bool shouldBeMinimized; 
@property (readonly) int valueRestriction; 
+(id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3 ;
+(id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3 ;
+(id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3 ;
-(bool)shouldBeIntegral;
-(int)valueRestriction;
-(id)markedConstraint;
-(bool)markedConstraintIsEligibleForIntegralizationAdjustment;
-(double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
-(bool)valueIsUserVisible;
-(bool)shouldBeMinimized;
-(oneway void)release;
-(id)retain;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(unsigned long long)retainCount;
-(id)description;
-(id)delegate;
-(bool)_tryRetain;
-(bool)_isDeallocating;
@end

