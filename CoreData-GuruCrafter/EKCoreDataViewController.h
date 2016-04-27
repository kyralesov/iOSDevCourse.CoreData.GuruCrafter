//
//  EKCoreDataViewController.h
//  CoreData-GuruCrafter
//
//  Created by Kyralesov on 27.04.16.
//  Copyright © 2016 Kyralesov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EKDataManager.h"

@interface EKCoreDataViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (void)configureCell:(UITableViewCell *)cell withObject:(NSManagedObject *)object;

@end
