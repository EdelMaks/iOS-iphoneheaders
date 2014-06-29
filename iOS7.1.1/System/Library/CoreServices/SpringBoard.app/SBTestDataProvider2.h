/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/BBRemoteDataProvider.h>

@class BBDataProviderConnection, BBDataProviderProxy;

@interface SBTestDataProvider2 : NSObject <BBRemoteDataProvider> {

	BBDataProviderConnection* _connection;
	BBDataProviderProxy* _proxy;

}
+(id)sharedInstance;
-(void)publish;
-(id)init;
-(id)sectionIdentifier;
-(id)sectionParameters;
-(id)sectionDisplayName;
-(void)dataProviderDidLoad;
-(id)bulletinsFilteredBy:(unsigned)arg1 count:(unsigned)arg2 lastCleared:(id)arg3 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 ;
-(float)attachmentAspectRatioForRecordID:(id)arg1 ;
-(id)defaultSectionInfo;
-(void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(id)sortDescriptors;
@end
