/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SAPhone : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString* number;
@property(copy, nonatomic) NSString* label;
@property(retain, nonatomic) NSNumber* favoriteVoice;
@property(retain, nonatomic) NSNumber* favoriteFacetime;
+ (id)phoneWithDictionary:(id)dictionary context:(id)context;
+ (id)phone;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

