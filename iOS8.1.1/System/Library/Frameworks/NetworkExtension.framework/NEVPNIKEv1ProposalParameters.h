/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEConfigurationValidating.h>
#import <NetworkExtension/NEPrettyDescription.h>
#import <NetworkExtension/NEConfigurationLegacySupport.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@interface NEVPNIKEv1ProposalParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	int _diffieHellmanGroup;
	int _lifetimeSeconds;
	long long _encryptionAlgorithm;
	long long _integrityAlgorithm;

}

@property (assign) long long encryptionAlgorithm;              //@synthesize encryptionAlgorithm=_encryptionAlgorithm - In the implementation block
@property (assign) long long integrityAlgorithm;               //@synthesize integrityAlgorithm=_integrityAlgorithm - In the implementation block
@property (assign) int diffieHellmanGroup;                     //@synthesize diffieHellmanGroup=_diffieHellmanGroup - In the implementation block
@property (assign) int lifetimeSeconds;                        //@synthesize lifetimeSeconds=_lifetimeSeconds - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)encryptionAlgorithm;
-(long long)integrityAlgorithm;
-(int)diffieHellmanGroup;
-(void)setEncryptionAlgorithm:(long long)arg1 ;
-(void)setIntegrityAlgorithm:(long long)arg1 ;
-(void)setDiffieHellmanGroup:(int)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setLifetimeSeconds:(int)arg1 ;
-(int)lifetimeSeconds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
