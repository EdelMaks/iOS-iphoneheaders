/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIWebViewDelegate;
@class UIScrollView, UIWebBrowserView, UICheckeredPatternView, NSURLRequest, UIWebViewWebViewDelegate, UIWebPDFViewHandler;

@interface UIWebViewInternal : NSObject {

	UIScrollView* scroller;
	UIWebBrowserView* browserView;
	UICheckeredPatternView* checkeredPatternView;
	<UIWebViewDelegate>* delegate;
	unsigned scalesPageToFit : 1;
	unsigned isLoading : 1;
	unsigned hasOverriddenOrientationChangeEventHandling : 1;
	unsigned drawsCheckeredPattern : 1;
	unsigned webSelectionEnabled : 1;
	unsigned drawInWebThread : 1;
	unsigned inRotation : 1;
	NSURLRequest* request;
	long long clickedAlertButtonIndex;
	UIWebViewWebViewDelegate* webViewDelegate;
	UIWebPDFViewHandler* pdfHandler;

}
@end

