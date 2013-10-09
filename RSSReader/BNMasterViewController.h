//
//  BNMasterViewController.h
//  RSSReader
//
//  Created by Richard Bakare on 8/6/13.
//  Copyright (c) 2013 Baynote. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNDetailViewController;

@interface BNMasterViewController : UITableViewController <NSXMLParserDelegate>

@property (strong, nonatomic) BNDetailViewController *detailViewController;
@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property(nonatomic) CGSize preferredContentSize;

@end
