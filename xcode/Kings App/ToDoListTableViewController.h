//
//  ToDoListTableViewController.h
//  Kings App
//
//  Created by Jonathan Jahr on 8/6/14.
//  Copyright (c) 2014 Training. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWRevealViewController.h"

@interface ToDoListTableViewController : UITableViewController
@property (weak, nonatomic) IBOutlet UIBarButtonItem *sidebarButton;
- (IBAction)unwindToList:(UIStoryboardSegue *)segue;
@end

