//
//  PNMessagesHistory+Protected.h
//  pubnub
//
//  This header file used by library internal
//  components which require to access to some
//  methods and properties which shouldn't be
//  visible to other application components
//
//  Created by Sergey Mamontov.
//
//

#import "PNMessagesHistory.h"


#pragma mark Class forward

@class PNChannel;


#pragma mark - Protected interface methods

@interface PNMessagesHistory (Protected)


#pragma mark - Properties

// Stores reference on history time frame start date
@property (nonatomic, strong) NSDate *startDate;

// Stores reference on history time frame start time token
@property (nonatomic, strong) NSNumber *startTimeToken;

// Stores reference on history time frame end date
@property (nonatomic, strong) NSDate *endDate;

// Stores reference on history time frame end time token
@property (nonatomic, strong) NSNumber *endTimeToken;

// Store reference on channel for which history has been
// downloaded
@property (nonatomic, strong) PNChannel *channel;

// Stores reference on list of messages which has been downloaded
@property (nonatomic, strong) NSArray *messages;


#pragma mark - Class methods

/**
 * Return reference on fully initialized history instance
 */
+ (instancetype)historyBetween:(NSDate *)startDate
                startTimeToken:(NSNumber *)startTimeToken
                    andEndDate:(NSDate *)endDate
                  endTimeToken:(NSNumber *)endTimeToken;

#pragma mark -


@end



