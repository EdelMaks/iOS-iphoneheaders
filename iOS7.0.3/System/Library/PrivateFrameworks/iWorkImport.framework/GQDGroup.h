/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDDrawable.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDWPExternalTextWrap;

@interface GQDGroup : GQDDrawable <GQDNameMappable> {

	CFArrayRef mDrawables;
	GQDWPExternalTextWrap* mExternalTextWrap;

}
+(const StateSpec*)stateForReading;
-(id)externalTextWrap;
-(void)dealloc;
-(CFArrayRef)drawables;
@end
