/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL, SAUIAppPunchOut;

@interface SAGKLinkedAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSString * displayLink; 
@property (nonatomic,copy) NSURL * link; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSURL * searchUri; 
+(id)linkedAnswer;
+(id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setQuery:(id)arg1 ;
-(id)groupIdentifier;
-(id)description;
-(id)query;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setDisplayLink:(id)arg1 ;
-(id)displayLink;
-(void)setLink:(id)arg1 ;
-(id)link;
-(void)setDescription:(id)arg1 ;
-(id)encodedClassName;
-(id)punchOut;
-(void)setPunchOut:(id)arg1 ;
-(id)searchUri;
-(void)setSearchUri:(id)arg1 ;
@end

