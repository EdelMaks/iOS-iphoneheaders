/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDResources;

@interface CHDLegendEntry : NSObject {

	unsigned long long mFontIndex;
	unsigned mEntryIndex;
	EDResources* mResources;

}
-(void)setFontIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontIndex;
-(void)dealloc;
-(void)setFont:(id)arg1 ;
-(id)font;
-(id)initWithResources:(id)arg1 ;
-(void)setEntryIndex:(unsigned)arg1 ;
-(unsigned)entryIndex;
@end
