//
//  UUIDViewController.h
//  BeaconScanner
//
//  Created by SilverNine on 2014. 8. 16..
//  Copyright (c) 2014년 B-Conner. All rights reserved.
//

#import "AddViewController.h"

@interface UUIDViewController : UITableViewController <NSFetchedResultsControllerDelegate, AddViewControllerDelegate>


@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

@end

 