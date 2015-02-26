/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ML3DatabaseTable, NSArray;

@interface ML3DatabaseForeignKeyConstraint : NSObject {

	ML3DatabaseTable* _foreignTable;
	NSArray* _localColumns;
	NSArray* _foreignColumns;

}

@property (nonatomic,readonly) ML3DatabaseTable * foreignTable;              //@synthesize foreignTable=_foreignTable - In the implementation block
@property (nonatomic,readonly) NSArray * localColumns;                       //@synthesize localColumns=_localColumns - In the implementation block
@property (nonatomic,readonly) NSArray * foreignColumns;                     //@synthesize foreignColumns=_foreignColumns - In the implementation block
-(id)initWithForeignTable:(id)arg1 localColumns:(id)arg2 foreignColumns:(id)arg3 ;
-(id)_foreignKeyClauseSQL;
-(ML3DatabaseTable *)foreignTable;
-(NSArray *)localColumns;
-(NSArray *)foreignColumns;
@end
