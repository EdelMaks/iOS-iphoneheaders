/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSArray;

@interface _CUIKeyTestOrganizer : NSObject {

	renditionkeytoken originalKey[16];
	NSArray* orderedNonZeroFlexibleAttributes;
	unsigned long long flexAttributesCount;
	renditionkeytoken testKey[16];
	unsigned long long chooseCount;
	unsigned long long subchooseCount;

}
-(void)dealloc;
-(unsigned long long)_attributeToBumpIndex;
-(bool)_bumpTestKeyAttributeIndex:(unsigned long long)arg1 ;
-(id)_nonZeroFlexibleAttributesInKey:(const renditionkeytoken*)arg1 ;
-(void)_bumpTestKey;
-(id)initWithRenditionKey:(const renditionkeytoken*)arg1 ;
-(renditionkeytoken*)nextKey;
@end

