//
//  Launch.m
//  Ninja Escape
//
//  Created by Bryan Worrell on 9/28/13.
//  Copyright Bryan Worrell 2013. All rights reserved.
//


// Import the interfaces
#import "Launch.h"
#import "Intro.h"

@implementation Launch

+(CCScene *) scene
{
	// 'scene' is an autorelease object.
	CCScene *scene = [CCScene node];
	
	// 'layer' is an autorelease object.
	Launch *layer = [Launch node];
	
	// add layer as a child to scene
	[scene addChild: layer];
	
	// return the scene
	return scene;
}
 
-(id) init
{
	if ((self = [super init]))
    {

		// ask director for the window size
		CGSize size = [[CCDirector sharedDirector] winSize];

		CCSprite *background;
		
		if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
        {
			background = [CCSprite spriteWithFile:@"Default-568h@2x.png"];
			background.rotation = 90;
		}
        else
        {
			background = [CCSprite spriteWithFile:@"Default-Landscape~ipad.png"];
		}
		background.position = ccp(size.width/2, size.height/2);

		// add the label as a child to this Layer
		[self addChild: background];
	}
	
	return self;
}

-(void) onEnter
{
	[super onEnter];
	[[CCDirector sharedDirector] replaceScene:[CCTransitionFade transitionWithDuration:1.0 scene:[Intro scene]]];
}

@end
