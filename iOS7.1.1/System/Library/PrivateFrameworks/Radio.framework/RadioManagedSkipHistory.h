/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSArray;

@interface RadioManagedSkipHistory : NSManagedObject

@property (nonatomic,copy) NSString * skipIdentifier; 
@property (nonatomic,copy) NSArray * skipTimestamps; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
-(id)stationHash;
-(long long)stationID;
-(void)setStationHash:(id)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setSkipIdentifier:(id)arg1 ;
-(void)setSkipTimestamps:(id)arg1 ;
-(id)skipIdentifier;
-(id)skipTimestamps;
@end

