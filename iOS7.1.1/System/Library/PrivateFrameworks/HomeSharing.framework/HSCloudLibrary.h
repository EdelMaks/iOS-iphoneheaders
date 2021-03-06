/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, HSConnection;

@interface HSCloudLibrary : NSObject {

	NSString* _name;
	NSString* _uniqueIdentifier;
	HSConnection* _connection;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) HSConnection * connection;                //@synthesize connection=_connection - In the implementation block
-(void)dealloc;
-(id)name;
-(id)uniqueIdentifier;
-(id)connection;
-(id)initWithConnectionConfiguration:(id)arg1 ;
@end

