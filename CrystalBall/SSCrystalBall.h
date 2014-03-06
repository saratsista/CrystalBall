//
//  SSCrystalBall.h
//  CrystalBall
//
//  Created by Sarat Sista on 3/5/14.
//  Copyright (c) 2014 Sarat Sista. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SSCrystalBall : NSObject {
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;
-(NSString *) randomPrediction;


@end
