/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MBService, NSString, NSObject, PCPersistentTimer;

@interface MBServiceLockManager : NSObject {

	MBService* _service;
	NSString* _backupUDID;
	int _type;
	id _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	PCPersistentTimer* _timer;

}

@property (nonatomic,readonly) double timeout; 
@property (nonatomic,readonly) double renewInterval; 
@property (nonatomic,readonly) double retryInterval; 
-(id)initWithAccount:(id)arg1 backupUDID:(id)arg2 type:(int)arg3 delegate:(id)arg4 ;
-(void)releaseLockAsync;
-(void)startRenewingLock;
-(void)releaseLockSync;
-(void)stopRenewingLock;
-(void)resetRenewalTimer;
-(BOOL)reacquireLockWithError:(id*)arg1 ;
-(double)renewInterval;
-(void)_scheduleTimerWithInterval:(double)arg1 ;
-(BOOL)_reacquireLockWithError:(id*)arg1 ;
-(void)_releaseLockAndScheduleRetries;
-(double)_holdLock;
-(void)_timerFired;
-(void)dealloc;
-(double)timeout;
-(double)retryInterval;
-(double)_releaseLock;
@end

