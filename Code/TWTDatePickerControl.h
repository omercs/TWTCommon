//
//  TWTDatePickerControl.h
//  TWTCommon
//
//  Created by Jeremy Ellison on 9/9/10.
//  Copyright 2010 Two Toasters. All rights reserved.
//

#import "TWTPickerControl.h"

@interface TWTDatePickerControl : TWTPickerControl {
	
}

/**
 * Initializes a new date picker with the provided range. Use nil for start or end dates to unrestrict the range.
 */
- (id)initWithFrame:(CGRect)frame mode:(UIDatePickerMode)mode startDate:(NSDate*)startDate endDate:(NSDate*)endDate;

/**
 * The currently selected date. also the date represented on the label
 */
- (NSDate*)date;

/**
 * Set the current picker date. ALso updates the label.
 */
- (void)setDate:(NSDate*)date;

@end