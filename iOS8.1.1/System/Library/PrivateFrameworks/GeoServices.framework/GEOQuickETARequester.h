/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOQuickETARequest, GEOETARequest, GEODirectionsRouteRequest, NSString;

@interface GEOQuickETARequester : NSObject {

	GEOQuickETARequest* _request;
	GEOETARequest* _simpleETARequest;
	GEODirectionsRouteRequest* _directionsETARequest;
	NSString* _loggingFacility;

}

@property (nonatomic,copy) NSString * loggingFacility;              //@synthesize loggingFacility=_loggingFacility - In the implementation block
-(void)calculateETALocalizedDescriptionFromOrigin:(id)arg1 toPLOI:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)calculateETAWithResponseHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)initWithRequest:(id)arg1 ;
-(void)_calculateSimpleETAWithHandler:(/*^block*/id)arg1 ;
-(void)_calculateRoutingETAWithHandler:(/*^block*/id)arg1 ;
-(NSString *)loggingFacility;
-(void)setLoggingFacility:(NSString *)arg1 ;
@end

