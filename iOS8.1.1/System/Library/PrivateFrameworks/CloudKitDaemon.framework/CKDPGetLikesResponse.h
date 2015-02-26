/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPLikeInfo, NSMutableArray;

@interface CKDPGetLikesResponse : PBCodable <NSCopying> {

	CKDPLikeInfo* _likeInfo;
	NSMutableArray* _likes;

}

@property (nonatomic,readonly) BOOL hasLikeInfo; 
@property (nonatomic,retain) CKDPLikeInfo * likeInfo;              //@synthesize likeInfo=_likeInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * likes;               //@synthesize likes=_likes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLikeInfo:(CKDPLikeInfo *)arg1 ;
-(BOOL)hasLikeInfo;
-(CKDPLikeInfo *)likeInfo;
-(NSMutableArray *)likes;
-(unsigned long long)likesCount;
-(void)addLike:(id)arg1 ;
-(void)clearLikes;
-(id)likeAtIndex:(unsigned long long)arg1 ;
-(void)setLikes:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
