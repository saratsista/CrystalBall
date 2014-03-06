//
//  SSViewController.h
//  CrystalBall
//
//  Created by Sarat Sista on 3/5/14.
//  Copyright (c) 2014 Sarat Sista. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SSCrystalBall;

@interface SSViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) SSCrystalBall *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (void)makePrediction;


@end
