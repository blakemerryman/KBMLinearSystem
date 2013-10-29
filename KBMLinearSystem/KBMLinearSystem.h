//
//  KBMLinearSystem.h
//  KBMLinearSystem
//
//  Created by Blake Merryman on 10/26/13.
//  Copyright (c) 2013 Blake Merryman. All rights reserved.
//
//  The purpose of this framework is to provide a simple but
//  powerful Cocoa framework for working with linear systems.
//

#import <Foundation/Foundation.h>

@interface KBMLinearSystem : NSObject

#pragma mark - Public Properties:
@property(nonatomic)NSMutableArray* array1D;    // Generic, mutable one dimensional array.
@property(nonatomic)NSMutableArray* array2D;    // Generic, mutable two dimensional array.
@property(nonatomic)NSUInteger* widthValue;     // Width value for arrays. Must be positive.
@property(nonatomic)NSUInteger* heightValue;    // Height value for arrays. Must be positive.
@property(nonatomic)NSNumber* zeroThreshold;    // If |someValue| < zeroThreshold, someValue will be considered zero.
@property(nonatomic)NSUInteger* accuracy;       // Accuracy for x-digit arithmetic.

#pragma mark - Public Methods:
-(id)init;
-(void)scaleVectorByFactor:(NSNumber*)factor;
//TODO: Abstract the processes of interacting with linear systems (elementary row operations, etc.)
//TODO: 
@end
