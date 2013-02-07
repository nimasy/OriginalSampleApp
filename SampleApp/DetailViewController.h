//
//  DetailViewController.h
//  SampleApp
//
//  Created by Nima Vadiee on 2/7/13.
//  Copyright (c) 2013 Nima Vadiee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
