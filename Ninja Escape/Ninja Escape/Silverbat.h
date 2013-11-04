//
//  MyCocos2DClass.h
//  Ninja Escape
//
//  Created by Bryan Worrell on 10/9/13.
//  Copyright 2013 Bryan Worrell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface Silverbat : CCSprite
{
    @private
        CGSize screenSize;
        CCSprite *silverbat;
        CCAction *silverbatDown;
        CCAction *silverbatSide;
        CCAction *silverbatUp;
        CCAction *silverbatMove;
}

@property (nonatomic, strong) CCSprite *silverbat;
@property (nonatomic, strong) CCAction *silverbatDown;
@property (nonatomic, strong) CCAction *silverbatSide;
@property (nonatomic, strong) CCAction *silverbatUp;

-(CGRect) getBoundingBox;

@end
