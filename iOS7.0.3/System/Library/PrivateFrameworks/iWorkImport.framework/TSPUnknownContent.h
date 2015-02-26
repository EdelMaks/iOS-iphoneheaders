/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray;

@interface TSPUnknownContent : NSObject {

	NSArray* _messages;
	NSArray* _ignoreAndPreserveFields;
	NSArray* _ignoreAndDropFields;
	NSArray* _savedIgnoreAndPreserveFields;
	NSArray* _savedIgnoreAndDropFields;

}

@property (nonatomic,readonly) NSArray * messages;              //@synthesize messages=_messages - In the implementation block
+(id)unknownContentWithMessage:(Message*)arg1 fieldInfos:(FieldInfoTree*)arg2 unknownMessages:(id)arg3 foundMustUnderstandFields:(BOOL*)arg4 ;
-(void)willModifyObject;
-(void)saveToArchiver:(id)arg1 ;
-(void)updateMessageInfo:(MessageInfo*)arg1 ;
-(id)initWithMessages:(id)arg1 ignoreAndPreserveFields:(id)arg2 ignoreAndDropFields:(id)arg3 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(id)init;
-(id)messages;
-(void).cxx_destruct;
@end
