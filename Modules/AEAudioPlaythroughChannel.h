//
//  AEAudioPlaythroughChannel.h
//  TheAmazingAudioEngine
//
//  Created by Michael Tyson on 21/04/2012.
//  Copyright (c) 2012 A Tasty Pixel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TheAmazingAudioEngine.h"

@interface AEAudioPlaythroughChannel : NSObject <AEAudioPlayable, AEAudioReceiver>
- (id)initWithAudioController:(AEAudioController*)audioController;
@end
