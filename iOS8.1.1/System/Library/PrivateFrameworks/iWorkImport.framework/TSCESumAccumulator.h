/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSDate;

@interface TSCESumAccumulator : NSObject {

	NSDate* mDateAccumulator;
	double mSecondsToAdd;
	TSCENumberValue* mNumberAccumulator;
	BOOL mMixedDurationsAndNumbers;
	BOOL mFoundANumber;

}
-(void)addValue:(TSCEValue)arg1 function:(id)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(TSCEValue)resultForFunction:(id)arg1 ;
-(id)init;
@end
