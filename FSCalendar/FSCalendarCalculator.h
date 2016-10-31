//
//  FSCalendarCalculator.h
//  FSCalendar
//
//  Created by dingwenchao on 30/10/2016.
//  Copyright © 2016 wenchaoios. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class FSCalendar;

@interface FSCalendarCalculator : NSObject

@property (weak  , nonatomic) FSCalendar *calendar;

@property (assign, nonatomic) CGFloat monthHeight;
@property (assign, nonatomic) CGFloat titleHeight;
@property (assign, nonatomic) CGFloat subtitleHeight;

@property (readonly, nonatomic) NSInteger numberOfSections;

- (instancetype)initWithCalendar:(FSCalendar *)calendar;

- (NSDate *)safeDateForDate:(NSDate *)date;

- (NSDate *)dateForIndexPath:(NSIndexPath *)indexPath;
- (NSDate *)dateForIndexPath:(NSIndexPath *)indexPath scope:(FSCalendarScope)scope;
- (NSIndexPath *)indexPathForDate:(NSDate *)date;
- (NSIndexPath *)indexPathForDate:(NSDate *)date scope:(FSCalendarScope)scope;

- (NSInteger)numberOfHeadPlaceholdersForMonth:(NSDate *)month;
- (NSInteger)numberOfRowsInMonth:(NSDate *)month;
- (NSInteger)numberOfRowsInSection:(NSInteger)section;

- (void)reloadSections;

@end
