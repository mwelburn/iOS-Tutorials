//
//  BullsEyeViewController.h
//  BullsEye
//
//  Created by Mike Welburn on 11/28/13.
//  Copyright (c) 2013 welburn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BullsEyeViewController : UIViewController <UIAlertViewDelegate>

@property (nonatomic, weak) IBOutlet UISlider *slider;
@property (nonatomic, weak) IBOutlet UILabel *targetLabel;
@property (nonatomic, weak) IBOutlet UILabel *scoreLabel;
@property (nonatomic, weak) IBOutlet UILabel *roundLabel;

- (IBAction)showAlert;
- (IBAction)sliderMoved:(UISlider *)slider;
- (IBAction)startOver;

@end
