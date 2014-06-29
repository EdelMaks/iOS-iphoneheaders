/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PublishingBundles/PublishToYouTube.bundle/PublishToYouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YTFeedRequest.h>
#import <PhotoLibrary/PLDataArrayInputStreamProgressDelegate.h>

@interface PublishToYouTubePost : YTFeedRequest <PLDataArrayInputStreamProgressDelegate> {

	bool _allowsCellularAccessForUploads;

}

@property (assign,nonatomic) bool allowsCellularAccessForUploads;              //@synthesize allowsCellularAccessForUploads=_allowsCellularAccessForUploads - In the implementation block
-(void)dataArrayInputStreamBytesWereRead:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(bool)allowsCellularAccessForUploads;
-(void)setAllowsCellularAccessForUploads:(bool)arg1 ;
-(void)uploadVideoAtPath:(id)arg1 withXMLData:(id)arg2 title:(id)arg3 ;
-(id)_publishURL;
@end
