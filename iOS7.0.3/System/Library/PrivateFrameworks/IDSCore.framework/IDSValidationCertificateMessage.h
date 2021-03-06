/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSData;

@interface IDSValidationCertificateMessage : IDSBaseMessage <NSCopying> {

	NSData* _responseCertificateData;
	NSData* _pushToken;

}

@property (nonatomic,copy) NSData * responseCertificateData;              //@synthesize responseCertificateData=_responseCertificateData - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                            //@synthesize pushToken=_pushToken - In the implementation block
-(void)setPushToken:(id)arg1 ;
-(id)bagKey;
-(id)pushToken;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)command;
-(id)responseCertificateData;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(BOOL)wantsBagKey;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsBinaryPush;
-(int)responseCommand;
-(void)setResponseCertificateData:(id)arg1 ;
-(BOOL)wantsHTTPGet;
-(id)messageBody;
-(id)requiredKeys;
@end

