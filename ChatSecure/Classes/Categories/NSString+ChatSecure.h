//
//  NSString+ChatSecure.h
//  ChatSecure
//
//  Created by David Chiles on 12/16/14.
//  Copyright (c) 2014 Chris Ballinger. All rights reserved.
//

@import Foundation;

@interface NSString (ChatSecure)

- (NSString *)otr_stringInitialsWithMaxCharacters:(NSUInteger)maxCharacters;

- (NSString *)otr_stringByRemovingNonEnglishCharacters;

@end
