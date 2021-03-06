/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"
#import <EventKit/EventKit.h>

@interface ComTiCalendarItemProxy : TiProxy {
@private
}

-(id)initWithEvent:(EKEvent *)event;
-(void)saveEvent:(id)obj;
-(NSDictionary *)deleteEvent:(id)obj;
-(void)saveEvent:(id)obj withStore:(EKEventStore*)eventStore;


// setters and getters
-(id)title;
-(void)setTitle:(id)value;
-(id)startDate;
-(void)setStartDate:(id)value;
-(id)endDate;
-(void)setEndDate:(id)value;
-(id)notes;
-(void)setNotes:(id)value;



@end
