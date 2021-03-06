/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, NSString, NSDate, NSNumber;

@interface SAPhoneSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString* timeZoneId;
@property(copy, nonatomic) NSDate* start;
@property(copy, nonatomic) NSString* outgoingPhoneNumber;
@property(assign, nonatomic) BOOL missed;
@property(retain, nonatomic) NSNumber* limit;
@property(copy, nonatomic) NSString* incomingPhoneNumber;
@property(copy, nonatomic) NSDate* end;
@property(copy, nonatomic) NSURL* targetAppId;
+ (id)search;
+ (id)searchWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (id)groupIdentifier;
@end

