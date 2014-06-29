/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSString;

@interface CKUIBehavior : NSObject {

	double _bubbleIndentationDuringEditMode;

}

@property (nonatomic,readonly) NSString * conversationListDefaultPNG; 
@property (nonatomic,readonly) NSString * transcriptDefaultPNG; 
@property (nonatomic,@dynamic,readonly) bool splitViewEnabled; 
@property (nonatomic,readonly) bool lowClearanceInLandscape; 
@property (nonatomic,readonly) bool usesPopovers; 
@property (nonatomic,readonly) bool showTranscriptButtonsInNavigationBar; 
@property (nonatomic,readonly) bool presentsQuickLookController; 
@property (nonatomic,readonly) bool presentsReaderController; 
@property (nonatomic,readonly) double bubbleIndentationDuringEditMode;                                  //@synthesize bubbleIndentationDuringEditMode=_bubbleIndentationDuringEditMode - In the implementation block
@property (nonatomic,readonly) unsigned long long defaultConversationViewingMessageCount; 
@property (nonatomic,readonly) unsigned long long defaultConversationSummaryMessageCount; 
@property (nonatomic,readonly) bool shouldShowSendProgressIndicator; 
@property (nonatomic,readonly) bool shouldBackfillTranscript; 
@property (nonatomic,readonly) bool usesScrollGestureToHideKeyboard; 
@property (nonatomic,readonly) bool usesDistanceToDetermineWhetherToHideKeyboard; 
@property (nonatomic,readonly) bool usesVelocityDirectionToDetermineWhetherToHideKeyboard; 
@property (nonatomic,readonly) double velocityThresholdForHidingKeyboard; 
@property (nonatomic,readonly) double escapeVelocityForHidingKeyboard; 
@property (nonatomic,readonly) double scrollToHideKeyboardGestureThreshold; 
@property (nonatomic,readonly) bool shouldSetConversationKeyboardOnSearchBeginEnd; 
@property (nonatomic,readonly) bool supportsTypingIndicatorAnimation; 
@property (nonatomic,readonly) bool isN9xScreen; 
@property (nonatomic,readonly) bool shouldUseDynamicScrolling; 
@property (nonatomic,readonly) long long madridRegistrationAppearanceStyle; 
@property (nonatomic,readonly) bool madridRegistrationShowsSplashScreen; 
@property (nonatomic,readonly) bool madridRegistrationShowsSplashScreenOnSignin; 
@property (nonatomic,readonly) bool canAccessContacts; 
@property (nonatomic,readonly) bool canAccessPhotos; 
@property (nonatomic,readonly) bool canAccessCoreRecents; 
@property (nonatomic,readonly) bool phoneIsWhitelisted; 
@property (nonatomic,readonly) bool faceTimeVideoIsWhitelisted; 
@property (nonatomic,readonly) bool faceTimeAudioIsWhitelisted; 
@property (nonatomic,readonly) bool mailIsWhitelisted; 
@property (nonatomic,readonly) bool cameraIsWhitelisted; 
@property (nonatomic,readonly) bool photosIsWhitelisted; 
@property (nonatomic,readonly) bool showPendingInConversationList; 
@property (nonatomic,readonly) bool selectNewConversationOnStateRestore; 
@property (nonatomic,readonly) bool selectNewConversationOnDeletion; 
@property (nonatomic,readonly) bool usesPersistentConversationSelection; 
@property (nonatomic,readonly) bool presentForwardingUIModally; 
@property (nonatomic,readonly) bool useContactPhotosInConversationList; 
@property (nonatomic,readonly) bool shouldShowContactPhotos; 
+(id)sharedBehaviors;
-(id)lightGrayColor;
-(bool)usesPopovers;
-(double)toFieldPreferredHeight;
-(bool)canAccessCoreRecents;
-(bool)shouldBackfillTranscript;
-(double)entryFieldElementPadding;
-(id)balloonTextFont;
-(double)transcriptPortraitWidth;
-(id)characterCountFont;
-(double)entryFieldLineFragmentPadding;
-(id)entryFieldBackgroundColor;
-(id)entryFieldDividerColor;
-(id)sendButtonColorForColorType:(BOOL)arg1 ;
-(id)photoButtonColor;
-(id)entryFieldGrayColor;
-(id)dimmingViewBackgroundColor;
-(id)transcriptBackgroundColor;
-(bool)lowClearanceInLandscape;
-(bool)splitViewEnabled;
-(CGSize)balloonMaskSize;
-(double)balloonMaxWidthForOrientation:(BOOL)arg1 ;
-(double)bottomTranscriptSpace;
-(unsigned long long)defaultConversationViewingMessageCount;
-(double)resizeMessageEntryViewAnimationDuration;
-(bool)shouldShowSendProgressIndicator;
-(id)transcriptSeparatorColor;
-(id)forwardImage;
-(bool)cameraIsWhitelisted;
-(bool)photosIsWhitelisted;
-(double)transcriptDrawerOverlap;
-(double)transcriptDrawerWidth;
-(UIEdgeInsets)statusTranscriptInsets;
-(double)conversationListRowHeight;
-(id)conversationListDateFont;
-(id)conversationListSenderFont;
-(id)conversationListSummaryFont;
-(bool)showsChevronImage;
-(id)chevronImage;
-(double)topConversationListSpace;
-(double)senderSummaryConversationListSpace;
-(double)bottomConversationListSpace;
-(double)conversationListContactImageDiameter;
-(bool)showPendingInConversationList;
-(bool)usesPersistentConversationSelection;
-(bool)isSupportedInterfaceOrientation:(long long)arg1 ;
-(bool)selectNewConversationOnDeletion;
-(bool)shouldDimTranscript;
-(double)transcriptContactImageDiameter;
-(id)transcriptTextFont;
-(id)transcriptTextColor;
-(UIEdgeInsets)documentIconAlignmentRectInsets;
-(UIEdgeInsets)skinnyBalloonMaskCapInsets;
-(UIEdgeInsets)balloonMaskCapInsets;
-(UIEdgeInsets)balloonMaskAlignmentRectInsets;
-(UIEdgeInsets)balloonMaskFrameInsets;
-(id)balloonSubjectFont;
-(id)balloonTextColorForColorType:(BOOL)arg1 ;
-(id)balloonTextLinkColorForColorType:(BOOL)arg1 ;
-(id)balloonColorsForColorType:(BOOL)arg1 ;
-(bool)supportsTypingIndicatorAnimation;
-(bool)canAccessPhotos;
-(bool)presentsQuickLookController;
-(bool)presentsReaderController;
-(CGSize)thumbnailFillSizeForImageSize:(CGSize)arg1 ;
-(UIEdgeInsets)minimumPlayButtonInsets;
-(double)balloonMaskTailWidth;
-(CGSize)attachmentBalloonSize;
-(id)errorDocumentIcon;
-(id)genericDocumentIcon;
-(id)timestampDateFormatter;
-(id)transcriptBoldTextFont;
-(id)previewTitleFont;
-(id)chevronImageForColorType:(BOOL)arg1 ;
-(double)previewTitleBarHeight;
-(bool)useContactPhotosInConversationList;
-(bool)shouldShowDisclosureChevronInRecipientAtoms;
-(double)leftSplitPaneWidthForUIInterfaceOrientation:(long long)arg1 ;
-(bool)madridRegistrationShowsSplashScreen;
-(bool)canAccessContacts;
-(double)_transcriptAnimationScaleFactor;
-(id)gray_recipientTextColor;
-(id)green_recipientTextColor;
-(id)blue_recipientTextColor;
-(id)siri_recipientTextColor;
-(id)red_recipientTextColor;
-(id)green_balloonColors;
-(id)blue_balloonColors;
-(id)siri_balloonColors;
-(CGSize)untailedPreviewFillSizeForImageSize:(CGSize)arg1 ;
-(UIEdgeInsets)balloonTranscriptInsets;
-(double)timestampBodyLeading;
-(double)timestampBodyLeadingFraction:(double)arg1 ;
-(double)balloonBalloonTranscriptSpace:(bool)arg1 ;
-(id)gray_balloonColors;
-(id)red_balloonColors;
-(id)gray_unfilledBalloonColor;
-(id)green_unfilledBalloonColor;
-(id)blue_unfilledBalloonColor;
-(id)siri_unfilledBalloonColor;
-(id)red_unfilledBalloonColor;
-(id)gray_balloonTextColor;
-(id)green_balloonTextColor;
-(id)blue_balloonTextColor;
-(id)siri_balloonTextColor;
-(id)red_balloonTextColor;
-(id)gray_balloonTextLinkColor;
-(id)green_balloonTextLinkColor;
-(id)blue_balloonTextLinkColor;
-(id)siri_balloonTextLinkColor;
-(id)red_balloonTextLinkColor;
-(id)gray_backgroundBalloonColor;
-(id)green_backgroundBalloonColor;
-(id)blue_backgroundBalloonColor;
-(id)siri_backgroundBalloonColor;
-(id)red_backgroundBalloonColor;
-(id)gray_balloonOverlayColor;
-(id)green_balloonOverlayColor;
-(id)blue_balloonOverlayColor;
-(id)siri_balloonOverlayColor;
-(id)red_balloonOverlayColor;
-(CGSize)skinnyBalloonMaskSize;
-(double)skinnyBalloonWidthDifference;
-(double)rightBalloonMaxWidth;
-(double)leftBalloonMaxWidth;
-(id)gray_sendButtonColor;
-(id)green_sendButtonColor;
-(id)blue_sendButtonColor;
-(id)siri_sendButtonColor;
-(id)red_sendButtonColor;
-(id)gray_chevronImage;
-(id)green_chevronImage;
-(id)blue_chevronImage;
-(id)siri_chevronImage;
-(id)red_chevronImage;
-(id)systemGrayChevronImage;
-(id)whiteChevronImage;
-(id)appTintColor;
-(double)conversationListSenderBodyLeading;
-(double)conversationListSummaryBodyLeading;
-(bool)showTranscriptButtonsInNavigationBar;
-(unsigned long long)defaultConversationSummaryMessageCount;
-(long long)madridRegistrationAppearanceStyle;
-(bool)madridRegistrationShowsSplashScreenOnSignin;
-(bool)phoneIsWhitelisted;
-(bool)faceTimeVideoIsWhitelisted;
-(bool)faceTimeAudioIsWhitelisted;
-(bool)mailIsWhitelisted;
-(bool)returnKeySendsMessage;
-(bool)usesScrollGestureToHideKeyboard;
-(bool)usesDistanceToDetermineWhetherToHideKeyboard;
-(bool)usesVelocityDirectionToDetermineWhetherToHideKeyboard;
-(double)velocityThresholdForHidingKeyboard;
-(double)escapeVelocityForHidingKeyboard;
-(double)scrollToHideKeyboardGestureThreshold;
-(bool)shouldSetConversationKeyboardOnSearchBeginEnd;
-(bool)isN9xScreen;
-(bool)shouldUseDynamicScrolling;
-(double)fadeInBubbleAnimationDuration;
-(double)scrollInNewMessageAnimationDuration;
-(double)throwMessageAnimationDuration;
-(double)editingTransitionAnimationDuration;
-(double)updateTranscriptInsetsAnimationDuration;
-(id)recipientTextColorForColorType:(BOOL)arg1 ;
-(bool)selectNewConversationOnStateRestore;
-(bool)presentForwardingUIModally;
-(double)conversationListMultipleContactsImageDiameter;
-(bool)shouldHomogenizeAtomsForPreferredService;
-(double)collapsedRecipientListLeftPadding;
-(bool)shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
-(bool)shouldRefreshAlternateAddressesSheet;
-(double)recipientOverlaySingleLineContentHeight;
-(id)transcriptHeaderTextFont;
-(CGSize)mapThumbnailFillSize;
-(bool)shouldShowContactPhotos;
-(bool)isAccessibilityPreferredContentSizeCategory;
-(double)spaceBetweenEditToolbarButtons;
-(id)readerFont;
-(id)transcriptStatusParagraphStyle;
-(UIEdgeInsets)transcriptBoldTextAlignmentInsets;
-(double)transcriptBoldTextHeight;
-(UIEdgeInsets)entityTranscriptInsets;
-(UIEdgeInsets)timestampTranscriptInsets;
-(UIEdgeInsets)serviceTranscriptInsets;
-(UIEdgeInsets)contactPhotoTranscriptInsets;
-(void)invalidateTranscriptDrawerWidth;
-(double)smallTranscriptSpace;
-(double)mediumTranscriptSpace;
-(double)largeTranscriptSpace;
-(double)topTranscriptSpace;
-(id)unfilledBalloonColorForColorType:(BOOL)arg1 ;
-(id)backgroundBalloonColorForColorType:(BOOL)arg1 ;
-(id)balloonOverlayColorForColorType:(BOOL)arg1 ;
-(id)attachmentBalloonActionColor;
-(id)attachmentBalloonTextColor;
-(double)balloonTextLineHeight;
-(UIEdgeInsets)balloonMaskFrameCapInsets;
-(double)contactPhotoBalloonMargin;
-(bool)supportsPassbookAttachments;
-(CGSize)documentIconSize;
-(id)textDocumentIcon;
-(double)conversationListDateBodyLeading;
-(bool)dimsTranscriptWhileEditingConversations;
-(unsigned long long)conversationCacheSize;
-(id)conversationListDefaultPNG;
-(id)transcriptDefaultPNG;
-(double)bubbleIndentationDuringEditMode;
@end
