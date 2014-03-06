//
//  SSCrystalBall.m
//  CrystalBall
//
//  Created by Sarat Sista on 3/5/14.
//  Copyright (c) 2014 Sarat Sista. All rights reserved.
//

#import "SSCrystalBall.h"

@implementation SSCrystalBall

-(NSArray *) predictions {
    if (_predictions == nil) {
        _predictions = [[NSArray alloc] initWithObjects:@"It is certain",
                        @"It is decidedly so", @"All signs say YES",
                        @"My reply is NO",
                        @"It is doubtful",
                        @"Better not tell you now",
                        @"Concentrate and ask again", nil ];
    }
    return _predictions;
}

-(NSString *) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end
