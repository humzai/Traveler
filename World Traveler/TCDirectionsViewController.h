//
//  TCDirectionsViewController.h
//  World Traveler
//
//  Created by Humza Iqbal on 4/20/14.
//  Copyright (c) 2014 Humza Iqbal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "Venue.h"
#import "Location.h"


@interface TCDirectionsViewController : UIViewController

@property (strong, nonatomic) IBOutlet MKMapView *directionsMap;

@property (strong, nonatomic) Venue *venue;
@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) NSArray *steps;



- (IBAction)listDirectionsBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
