//
//  page28_29.h
//  SampleObjectiveC
//
//  Created by Cindy Chang on 3/3/13.
//  Copyright (c) 2013 Leap Motion. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PageViewController.h"
#import "AnimatedPage28Lights.h"

@interface page28_29 : PageViewController
@property IBOutlet NSImageView *page28_29_cricket;
@property IBOutlet NSImageView *page28_29_franny;
@property IBOutlet NSImageView *page28_29_lights;
@property IBOutlet AnimatedPage28Lights *notes3;
@property NSSound *sound;
@end
