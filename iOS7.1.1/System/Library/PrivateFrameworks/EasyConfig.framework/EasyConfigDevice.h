/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/EasyConfig.framework/EasyConfig
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EasyConfig/EasyConfig-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDictionary, NSString;

@interface EasyConfigDevice : NSObject <NSCopying> {

	NSObject<OS_dispatch_queue>* _internalQueue;
	NSObject<OS_dispatch_queue>* _userQueue;
	NSDictionary* _scanRecord;
	bool _started;
	int _firstErr;
	BonjourBrowserRef _airplayBrowser;
	NSDictionary* _airplayBonjourInfo;
	BonjourBrowserRef _raopBrowser;
	NSDictionary* _raopBonjourInfo;
	BonjourBrowserRef _mfiConfigBrowser;
	NSDictionary* _mfiConfigBonjourInfo;
	unsigned _configSeed;
	HTTPClientPrivateRef _httpClient;
	NSObject<OS_dispatch_source>* _timeoutTimer;
	int _state;
	double _mfiSAPStartTime;
	double _mfiSAPFinishTime;
	MFiSAPRef _mfiSAP;
	unsigned long long _deviceIdentifier;
	unsigned long long _features;
	NSString* _model;
	NSString* _name;
	NSDictionary* _configuration;
	NSDictionary* _configResponse;
	bool _pausesAfterApply;
	bool _supportsTLV;
	bool _preConfigMetricsSet;
	SCD_Struct_Ea4 _preConfigMetrics;
	bool _postConfigMetricsSet;
	SCD_Struct_Ea5 _postConfigMetrics;
	double _configStartTime;
	double _findPreConfigStartTime;
	double _findPreConfigFoundTime;
	double _findPostConfigStartTime;
	double _findPostConfigFoundTime;
	double _applyConfigStartTime;
	double _applyConfigFinishTime;
	double _postConfigCheckStartTime;
	double _postConfigCheckFinishTime;

}

@property (assign,nonatomic) unsigned long long deviceIdentifier;                      //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;              //@synthesize userQueue=_userQueue - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) unsigned long long features;                              //@synthesize features=_features - In the implementation block
@property (nonatomic,copy) NSString * model;                                           //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) bool pausesAfterApply;                                    //@synthesize pausesAfterApply=_pausesAfterApply - In the implementation block
+(id)deviceWithScanRecord:(id)arg1 ;
+(bool)supportedScanRecord:(id)arg1 ;
-(id)dispatchQueue;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setName:(id)arg1 ;
-(void)_start;
-(id)name;
-(void)setConfiguration:(id)arg1 ;
-(id)model;
-(void)start;
-(void)stop;
-(id)configuration;
-(void)resumePostConfig;
-(void)setPausesAfterApply:(bool)arg1 ;
-(void)setPreConfigMetrics:(const SCD_Struct_Ea4*)arg1 ;
-(void)setPostConfigMetrics:(const SCD_Struct_Ea5*)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setModel:(id)arg1 ;
-(int)_findDevicePreConfigStart;
-(void)_stop:(int)arg1 ;
-(void)_logEnded;
-(void)_postNote:(id)arg1 info:(id)arg2 ;
-(int)_findDevicePostConfigStart;
-(void)_findDevicePreConfigEvent:(unsigned)arg1 info:(id)arg2 ;
-(int)_startBonjourWithTimeout:(int)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_postProgress:(int)arg1 ;
-(int)_configureStart:(id)arg1 ;
-(int)_setupClient:(id)arg1 ;
-(int)_mfiSAPStart;
-(int)_mfiSAPNext:(HTTPMessagePrivate*)arg1 ;
-(int)_timeoutTimerStart:(unsigned)arg1 block:(/*^block*/ id)arg2 ;
-(int)_applyConfigStart;
-(void)_applyConfigCompletion:(HTTPMessagePrivate*)arg1 ;
-(void)_postProgress:(int)arg1 withResponse:(id)arg2 ;
-(void)_findDevicePostConfigEvent:(unsigned)arg1 info:(id)arg2 ;
-(void)_postConfigCheckStart:(id)arg1 ;
-(void)_postConfigCheckCompletion:(HTTPMessagePrivate*)arg1 ;
-(bool)updated:(id)arg1 ;
-(bool)removed:(id)arg1 ;
-(bool)pausesAfterApply;
-(void)_handleError:(int)arg1 ;
-(void)setDeviceIdentifier:(unsigned long long)arg1 ;
-(void)setFeatures:(unsigned long long)arg1 ;
-(unsigned long long)features;
-(unsigned long long)deviceIdentifier;
@end

