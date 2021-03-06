/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@interface MNJunction : NSObject {

	SCD_Struct_Di8* _elements;
	unsigned long _count;
	int _type;
	/*function pointer*/ void** _snapped[8];

}

@property (nonatomic,readonly) int type;              //@synthesize type=_type - In the implementation block
-(id)initWithType:(int)arg1 maneuver:(int)arg2 drivingSide:(int)arg3 elements:(SCD_Struct_Di8*)arg4 count:(unsigned long)arg5 ;
-(void)getArrowPath:(id*)arg1 arrowStrokePath:(id*)arg2 intersectionBackgroundPath:(id*)arg3 strokePath:(id*)arg4 withSize:(CGSize)arg5 metrics:(SCD_Struct_MN5)arg6 drivingSide:(int)arg7 ;
-(void)getRoundaboutArrowPath:(id*)arg1 intersectionBackgroundPath:(id*)arg2 strokePath:(id*)arg3 withSize:(CGSize)arg4 metrics:(SCD_Struct_MN5)arg5 drivingSide:(int)arg6 ;
-(void)getArrowPath:(id*)arg1 arrowStrokePath:(id*)arg2 pivot:(CGPoint*)arg3 withSize:(CGSize)arg4 metrics:(SCD_Struct_MN5)arg5 ;
-(id)roundaboutArrowWithSize:(CGSize)arg1 metrics:(SCD_Struct_MN5)arg2 outerRadius:(float)arg3 endAngle:(float)arg4 pivot:(CGPoint*)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)type;
@end

