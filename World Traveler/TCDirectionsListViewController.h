//
//  TCDirectionsListViewController.h
//  World Traveler
//
//  Created by Humza Iqbal on 4/21/14.
//  Copyright (c) 2014 Humza Iqbal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface TCDirectionsListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (strong, nonatomic) IBOutlet UITableView *tableView;

@property (strong, nonatomic) NSArray *steps;

@end
