/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface PassLocationSource : SQLiteEntity
+(id)queryWithDatabase:(id)arg1 passPID:(unsigned long long)arg2 locationSourcePID:(unsigned long long)arg3 ;
+(id)queryWithDatabase:(id)arg1 passPID:(unsigned long long)arg2 ;
+(id)queryWithDatabase:(id)arg1 locationSourcePID:(unsigned long long)arg2 ;
+(id)insertPassLocationSourceWithPass:(id)arg1 locationSource:(id)arg2 inDatabase:(id)arg3 ;
+(id)locationSourcePIDPredicate:(id)arg1 ;
+(id)passPIDPredicate:(unsigned long long)arg1 ;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)databaseTable;
-(id)initWithPassPID:(unsigned long long)arg1 locationSourcePID:(unsigned long long)arg2 inDatabase:(id)arg3 ;
-(BOOL)deleteFromDatabase;
@end

