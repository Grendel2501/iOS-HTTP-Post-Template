//
//  BNDetailViewController.h
//  RSSReader
//
//  Created by Richard Bakare on 8/6/13.
//  Copyright (c) 2013 Richard Bakare. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BNDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (copy, nonatomic) NSString *url;

@end
