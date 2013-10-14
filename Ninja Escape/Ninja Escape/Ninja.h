//
//  Ninja.h
//  Ninja Escape
//
//  Created by Bryan Worrell on 10/12/13.
//  Copyright 2013 Bryan Worrell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface Ninja : CCSprite
{
    float ninjaVelocity;
    BOOL ninjaMoving;
    CCAction *ninjaMove;
    CCAction *ninjaDown;
    CCAction *ninjaSide;
    CCAction *ninjaUp;
}

@property (nonatomic, strong) CCAction *ninjaDown;
@property (nonatomic, strong) CCAction *ninjaSide;
@property (nonatomic, strong) CCAction *ninjaUp;

-(void) stopActions;
-(void) moveToPosition:(CGPoint)location;

@end

