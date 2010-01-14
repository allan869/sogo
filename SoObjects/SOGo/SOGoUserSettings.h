/* SOGoUserSettings.h - this file is part of SOGo
 *
 * Copyright (C) 2009 Inverse inc.
 *
 * Author: Wolfgang Sourdeau <wsourdeau@inverse.ca>
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef SOGOUSERSETTINGS_H
#define SOGOUSERSETTINGS_H

#import "SOGoDefaultsSource.h"

@class NSArray;
@class NSString;

@interface SOGoUserSettings : SOGoDefaultsSource

+ (SOGoUserSettings *) settingsForUser: (NSString *) userId;

/* the calendars that we publish to our proxy subscribers */
- (void) setProxiedCalendars: (NSArray *) proxiedCalendars;
- (NSArray *) proxiedCalendars;

/* the users that we have subscribed us as a proxy to our calendars */
- (void) setCalendarProxyUsers: (NSArray *) proxyUsers
               withWriteAccess: (BOOL) writeAccess;
- (NSArray *) calendarProxyUsersWithWriteAccess: (BOOL) writeAccess;

/* the users that have subscribed us as a proxy to their calendars */
- (void) setCalendarProxySubscriptionUsers: (NSArray *) subscriptionUsers
                           withWriteAccess: (BOOL) writeAccess;
- (NSArray *) calendarProxySubscriptionUsersWithWriteAccess: (BOOL) writeAccess;

@end

#endif /* SOGOUSERSETTINGS_H */
