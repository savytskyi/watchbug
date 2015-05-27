// Generated by IB v0.7.2 gem. Do not edit it manually
// Run `rake ib:open` to refresh

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface GlanceController: WKInterfaceController
-(IBAction) initWithContext:(id) context;
-(IBAction) willActivate;
-(IBAction) didDeactivate;

@end

@interface InterfaceController: WKInterfaceController

@property IBOutlet WKInterfaceButton * status_button;
@property IBOutlet WKInterfaceLabel * last_update_label;
@property IBOutlet WKInterfaceLabel * status_label;

-(IBAction) initWithContext:(id) context;
-(IBAction) willActivate;
-(IBAction) didDeactivate;

@end

@interface NotificationController: WKUserNotificationInterfaceController
-(IBAction) init;
-(IBAction) willActivate;
-(IBAction) didDeactivate;

@end

