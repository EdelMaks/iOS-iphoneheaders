/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface SDManagedBrowser : NSObject {

	int _clientCount;
	BOOL _sendNotification;
	NSDictionary* _servers;

}

@property (readonly) NSArray * nodes; 
+(id)sharedBrowser;
-(void)setServers:(id)arg1 ;
-(void)buildNodesAndNotify;
-(id)init;
-(void)start;
-(void).cxx_destruct;
-(void)stop;
-(id)nodes;
@end

