//
//  DetailViewController.h
//  gitTest
//
//  Created by JieY on 15/4/28.
//  Copyright (c) 2015年 JieY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

