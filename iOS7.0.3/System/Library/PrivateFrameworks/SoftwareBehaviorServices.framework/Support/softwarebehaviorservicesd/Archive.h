/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <softwarebehaviorservicesd/softwarebehaviorservicesd-Structs.h>
@class NSMutableData, NSMutableArray, NSString, NSData, NSArray;

@interface Archive : NSObject {

	unsigned maxUncompressedSize;
	unsigned uncompressedSize;
	int archiveType;
	NSMutableData* archiveData;
	archiveRef archive;
	NSMutableArray* files;
	NSString* identifier;
	float compressionPercent;

}

@property (nonatomic,readonly) unsigned maxUncompressedSize; 
@property (nonatomic,readonly) unsigned uncompressedSize; 
@property (nonatomic,readonly) NSData * archiveData; 
@property (nonatomic,readonly) NSArray * files; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) float compressionPercent; 
-(id)initWithMaxUncompressedSize:(unsigned)arg1 archiveType:(int)arg2 zipFileName:(const char*)arg3 ;
-(unsigned long long)sizeOnDiskForPath:(id)arg1 ;
-(BOOL)addFile:(id)arg1 asFile:(id)arg2 ;
-(id)initWithArchiveType:(int)arg1 zipFileName:(const char*)arg2 ;
-(id)initWithMaxUncompressedSize:(unsigned)arg1 zipFileName:(const char*)arg2 ;
-(BOOL)addFileURL:(id)arg1 ;
-(unsigned)maxUncompressedSize;
-(unsigned)uncompressedSize;
-(BOOL)addFile:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 ;
-(void)dealloc;
-(id)identifier;
-(BOOL)close;
-(id)archiveData;
-(id)files;
-(float)compressionPercent;
@end

