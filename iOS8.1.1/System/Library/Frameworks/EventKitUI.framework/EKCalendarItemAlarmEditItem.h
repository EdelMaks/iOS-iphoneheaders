/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@class CalendarEventAlarmTable, NSArray;

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {

	CalendarEventAlarmTable* _alarmTable;
	unsigned long long _disclosedSubitem;
	NSArray* _alarms;
	int _lastSeenAllDayState;
	BOOL _userChangedAlarm;
	BOOL _hasLeaveNowAlarm;
	BOOL _canHaveLeaveNowAlarm;

}
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfSubitems;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(BOOL)editItemViewControllerCommit:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(void)updateInternalTravelTimeStateForCalendarItem:(id)arg1 ;
-(void)_updateAlarms;
-(void)_updateDefaultAlarm;
-(BOOL)_calendarItemHasLeaveNowAlarm;
-(BOOL)_alarmsMatchCalendarItem;
-(id)init;
@end
