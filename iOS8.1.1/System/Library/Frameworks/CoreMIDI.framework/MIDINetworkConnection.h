/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreMIDI/CoreMIDI-Structs.h>
@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject {

	MIDINetworkConnectionImpl* _impl;

}

@property (nonatomic,retain,readonly) MIDINetworkHost * host; 
+(id)connectionWithHost:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(MIDINetworkHost *)host;
@end

