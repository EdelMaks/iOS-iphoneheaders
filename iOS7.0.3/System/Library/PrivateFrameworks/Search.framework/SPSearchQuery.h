/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSArray;

@interface SPSearchQuery : NSObject <NSCopying> {

	unsigned _queryID;
	NSString* _searchString;
	BOOL _cancelled;
	BOOL _finished;
	NSArray* _searchDomains;
	int _nextDomainIndex;
	double _creationTime;
	double _cancellationTime;

}

@property (nonatomic,readonly) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) NSArray * searchDomains;              //@synthesize searchDomains=_searchDomains - In the implementation block
@property (nonatomic,readonly) double creationTime;                  //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,readonly) double cancellationTime;              //@synthesize cancellationTime=_cancellationTime - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)cancelled;
-(void)cancel;
-(id)searchString;
-(id)searchDomains;
-(id)initWithSearchString:(id)arg1 forSearchDomains:(id)arg2 ;
-(double)creationTime;
-(double)cancellationTime;
-(id)initWithSearchString:(id)arg1 ;
@end

