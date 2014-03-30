//
//  YEVMasterViewController.h
//  ControllingSource
//
//  Created by Yevgeni Tarler on 3/31/14.
//  Copyright (c) 2014 Eugene Tarler. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface YEVMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
