/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _EditScriptData <NSObject>
@required
+(id)EditScriptDataWithArray:(id)arg1;
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
-(long long)length;
-(id)stringValue;
-(long long)lengthOfItem:(long long)arg1;
-(long long)characterIndexForItem:(long long)arg1;
-(long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2;
-(id)stringAtIndex:(long long)arg1;

@end

