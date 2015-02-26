/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE2 _sessionID;
	unsigned long long _businessID;
	long long _placeID;
	NSMutableArray* _actionCaptures;
	int _localSearchProviderID;
	SCD_Struct_GE50 _has;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID;                //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceID; 
@property (assign,nonatomic) long long placeID;                            //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionCaptures;              //@synthesize actionCaptures=_actionCaptures - In the implementation block
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                    //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(SCD_Struct_GE2)sessionID;
-(void)setSessionID:(SCD_Struct_GE2)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(int)localSearchProviderID;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(void)setActionCaptures:(NSMutableArray *)arg1 ;
-(void)addActionCapture:(id)arg1 ;
-(unsigned long long)actionCapturesCount;
-(void)clearActionCaptures;
-(id)actionCaptureAtIndex:(unsigned long long)arg1 ;
-(void)setPlaceID:(long long)arg1 ;
-(void)setHasPlaceID:(BOOL)arg1 ;
-(BOOL)hasPlaceID;
-(long long)placeID;
-(NSMutableArray *)actionCaptures;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBusinessID;
-(unsigned long long)businessID;
@end
