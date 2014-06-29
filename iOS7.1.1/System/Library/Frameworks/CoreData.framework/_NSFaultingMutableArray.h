/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray, NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableArray : NSMutableArray {

	int _cd_rc;
	NSMutableArray* _realArray;
	NSManagedObject* _source;
	NSPropertyDescription* _relationship;
	struct {
		unsigned _isFault : 1;
		unsigned _reserved : 31;
	}  _flags;

}
+(bool)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZone)arg1 ;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(bool)arg3 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(void)willRead;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/ id)arg2 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/ id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/ id)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/ id)arg3 ;
-(void)getObjects:(id*)arg1 ;
-(void)turnIntoFault;
-(id)relationship;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)description;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeLastObject;
-(id)valueForKey:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)objectEnumerator;
-(id)valueForKeyPath:(id)arg1 ;
-(bool)_tryRetain;
-(bool)_isDeallocating;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)source;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(bool)isFault;
-(id)descriptionWithLocale:(id)arg1 ;
@end
