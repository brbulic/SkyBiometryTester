//
//  NGMasterViewController.h
//  SkyBiometeryTestApp
//
//  Created by Bruno Bulić on 02/12/13.
//  Copyright (c) 2013 GovernmentJobs inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NGDetailViewController;

@interface NGMasterViewController : UITableViewController

@property (strong, nonatomic) NGDetailViewController *detailViewController;

@end
