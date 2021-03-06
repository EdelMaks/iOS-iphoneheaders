/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailServices/NSSecureCoding.h>

@protocol NSObject;
@class NSString;

@interface MSCriterion : NSObject <NSSecureCoding> {

	NSString* _type;
	NSString* _qualifier;
	id<NSObject> _criteria;

}
+(BOOL)supportsSecureCoding;
-(id)criteria;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)type;
-(id)initWithCriteria:(id)arg1 allRequired:(BOOL)arg2 ;
-(id)_initWithType:(id)arg1 qualifier:(id)arg2 criteria:(id)arg3 ;
-(id)initWithType:(id)arg1 qualifier:(id)arg2 expression:(id)arg3 ;
-(id)qualifier;
@end

