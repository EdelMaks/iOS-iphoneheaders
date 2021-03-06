/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface MFSparseMutable64IndexSet : NSObject {

	unsigned _count;
	unsigned _storageSize;
	unsigned _cursor;
	unsigned long long* _storage;

}
+(id)indexSet;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(void)addIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstIndex;
-(unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1 ;
-(BOOL)containsIndex:(unsigned long long)arg1 ;
-(void)removeIndex:(unsigned long long)arg1 ;
-(void)addIndexes:(id)arg1 ;
-(unsigned long)_insertionPositionOfIndex:(unsigned long long)arg1 ;
-(void)_incrementStorageIfNecessaryForCount:(unsigned)arg1 ;
-(unsigned long)_positionOfIndex:(unsigned long long)arg1 ;
-(void)_garbageCollectStorageIfNecessary;
@end

