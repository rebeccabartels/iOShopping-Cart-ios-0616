//
//  FISShoppingCart.h
//  
//
//  Created by Rebecca Bartels on 6/9/16.
//
//

#import <Foundation/Foundation.h>
#import "FISItem.h"  //Q: why quotes instead of carrots? A: anything you write is in quotes, anything in <>                                         is from a seperate library.


@interface FISShoppingCart : NSObject
@property(strong, nonatomic) NSMutableArray *items; 

//Declaring Methods Below
//SYNTAX for declaring methods: (return type)method name:(argumentType *)argument name;
- (NSUInteger)calculateTotalPriceInCents;
- (void)addItem:(FISItem *)item;
- (void)removeItem:(FISItem *)item;
- (void)removeAllItemsLikeItem:(FISItem *)item;
- (void)sortItemsByNameAsc;
- (void)sortItemsByNameDesc;
- (void)sortItemsByPriceInCentsAsc;
- (void)sortItemsByPriceInCentsDesc;
- (NSArray *)allItemsWithName:(NSString *)name;
- (NSArray *)allItemsWithMinimumPriceInCents:(NSUInteger)name; //Q: should it be called name?
- (NSArray *)allItemsWithMaximumPriceInCents:(NSUInteger)name;//Q: should it be called name?






@end
