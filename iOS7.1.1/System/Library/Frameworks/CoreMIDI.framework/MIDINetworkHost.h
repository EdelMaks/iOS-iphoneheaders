/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreMIDI/CoreMIDI-Structs.h>
@class NSString;

@interface MIDINetworkHost : NSObject {

	MIDINetworkHostImpl* _impl;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) unsigned long long port; 
@property (nonatomic,readonly) NSString * netServiceName; 
@property (nonatomic,readonly) NSString * netServiceDomain; 
+(id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3 ;
+(id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned long long)arg3 ;
+(id)hostWithName:(id)arg1 netService:(id)arg2 ;
+(id)fromAddressAsText:(id)arg1 withName:(id)arg2 ;
-(id)netServiceName;
-(id)netServiceDomain;
-(bool)hasSameAddressAs:(id)arg1 ;
-(id)addressAsText;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)host;
-(id)displayName;
-(id)address;
-(unsigned long long)port;
@end

