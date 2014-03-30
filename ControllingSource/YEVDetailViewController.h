//
//  YEVDetailViewController.h
//  ControllingSource
//
//  Created by Yevgeni Tarler on 3/31/14.
//  Copyright (c) 2014 Eugene Tarler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YEVDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
