/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UISplitViewController.h>
#import <Reminders/RemindersMasterViewControllerDelegate.h>
#import <Reminders/RemindersSearchViewControllerDelegate.h>
#import <Reminders/RemindersArchiving.h>

@class RemindersMasterViewController, RemindersDetailContainerViewController, RemindersSearchViewController;

@interface RemindersSplitViewController : UISplitViewController <RemindersMasterViewControllerDelegate, RemindersSearchViewControllerDelegate, RemindersArchiving> {

	RemindersMasterViewController* _masterViewController;
	RemindersDetailContainerViewController* _detailViewController;
	RemindersSearchViewController* _searchViewController;

}
-(void)setupViewControllers;
-(void)displayListViewController:(id)arg1 ;
-(void)applyArchive:(id)arg1 ;
-(id)topListViewController;
-(CGRect)detailViewContentRect;
-(void)alarmsFired;
-(void)masterViewCalendarsChanged;
-(void)masterViewSelectionChanged;
-(void)showNewCardWithAccount:(id)arg1 showAccountName:(BOOL)arg2 ;
-(void)searchController:(id)arg1 willBecomeActive:(BOOL)arg2 ;
-(void)searchController:(id)arg1 didSelectReminder:(id)arg2 forSearchTerm:(id)arg3 ;
-(id)_masterViewController;
-(id)init;
-(int)preferredStatusBarStyle;
-(void)endEditing;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void).cxx_destruct;
-(id)archive;
@end

