/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAAction.h>

@interface ASEmailChangeFlagsAction : DAAction {

	BOOL _read;
	BOOL _flagged;
	unsigned long long _changedFlags;

}
-(id)initWithServerID:(id)arg1 read:(BOOL)arg2 flagged:(BOOL)arg3 changedFlags:(unsigned long long)arg4 ;
-(void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
@end

