//
//  Venue.m
//  World Traveler
//
//  Created by Humza Iqbal on 4/19/14.
//  Copyright (c) 2014 Humza Iqbal. All rights reserved.
//

#import "Venue.h"
#import "FSCategory.h"
#import "Location.h"
#import "Menu.h"
#import "Contact.h"


@implementation Venue

@dynamic id;
@dynamic name;
@dynamic categories;
@dynamic contact;
@dynamic location;
@dynamic menu;

+(NSString *)keyPathForResponseObject
{
    return @"response.venues";
}

@end
