//
//  BNDetailViewController.h
//  RSSReader
//
//  Created by Richard Bakare on 8/6/13.
//  Copyright (c) 2013 Baynote. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BNDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
