//
//  NGDetailViewController.h
//  SkyBiometeryTestApp
//
//  Created by Bruno Bulić on 02/12/13.
//  Copyright (c) 2013 GovernmentJobs inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NGDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
