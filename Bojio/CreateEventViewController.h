//
//  CreateEventViewController.h
//  Bojio
//
//  Created by Biranchi on 24/05/14.
//  Copyright (c) 2014 Biranchi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CreateEventViewController : UIViewController <UITextFieldDelegate, UITextViewDelegate, UIActionSheetDelegate>



@property (weak, nonatomic) IBOutlet UITextField *eventNameTxtFld;
@property (weak, nonatomic) IBOutlet UITextField *eventPlaceTxtFld;
@property (weak, nonatomic) IBOutlet UITextField *eventTimeTxtFld;
@property (weak, nonatomic) IBOutlet UITextField *eventTypeTxtFld;
@property (weak, nonatomic) IBOutlet UITextView *eventDescTxtView;

@property (nonatomic, strong)  UIActionSheet *actionSheet;

@end
 