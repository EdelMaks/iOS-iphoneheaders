/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/mobile_recert
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <MobileActivation/MobileRecert.h>

@interface MobileRecertListener : NSObject <NSXPCListenerDelegate, MobileRecert>
-(void)recertifyDeviceForRealz:(/*^block*/ id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)recertifyDevice:(/*^block*/ id)arg1 ;
@end

