//
//  TCViewController.h
//  World Traveler
//
//  Created by Humza Iqbal on 4/19/14.
//  Copyright (c) 2014 Humza Iqbal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TCListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)refreshBarButtonItemPressed:(UIBarButtonItem *)sender;


@end
