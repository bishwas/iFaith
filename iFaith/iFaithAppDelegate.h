//
//  iFaithAppDelegate.h
//  iFaith
//
//  Created by David John on 2/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iFaithViewController;

@interface iFaithAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet iFaithViewController *viewController;

@end
