/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebResource, NSArray;

@interface WebArchivePrivate : NSObject {

	WebResource* cachedMainResource;
	NSArray* cachedSubresources;
	NSArray* cachedSubframeArchives;
	RefPtr<WebCore::LegacyWebArchive>* coreArchive;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)initWithCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>*)arg1 ;
-(LegacyWebArchive*)coreArchive;
-(void)setCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>*)arg1 ;
@end

