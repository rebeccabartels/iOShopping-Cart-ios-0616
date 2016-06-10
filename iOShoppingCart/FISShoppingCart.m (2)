//
//  FISShoppingCart.m
//  
//
//  Created by Rebecca Bartels on 6/9/16.
//
//

#import "FISShoppingCart.h"

@implementation FISShoppingCart

- (NSUInteger)calculateTotalPriceInCents
{
    NSUInteger sum = 0;
    for(NSUInteger i = 0; i < [self.items count]; i++)
{
        FISItem *stuffInArray = self.items[i];
        sum =  sum + stuffInArray.priceInCents; 
}
    return sum;
}
- (void)addItem:(FISItem *)item
{
    [self.items addObject:item];
}
- (void)removeItem:(FISItem *)item
{
    NSUInteger index = [self.items indexOfObject:item];
    [self.items removeObjectAtIndex:index];
}
- (void)removeAllItemsLikeItem:(FISItem *)item
{
    [self.items removeObject: item];
    
}
- (void)sortItemsByNameAsc
{
    NSSortDescriptor *sortItemsByNameAsc = [[NSSortDescriptor alloc] initWithKey:@"name" ascending:YES];
    NSArray *newArray = @[sortItemsByNameAsc]; //putting sortItemsByNameAsc inside new array
    [self.items sortUsingDescriptors: newArray];
}
- (void)sortItemsByNameDesc
{
    NSSortDescriptor *sortItemsByNameDesc = [[NSSortDescriptor alloc] initWithKey:@"name" ascending:NO];
    NSArray *newArray = @[sortItemsByNameDesc]; //putting sortItemsByNameDesc inside new array
    [self.items sortUsingDescriptors: newArray];
    NSLog(@"%@",self.items);
    

}
- (void)sortItemsByPriceInCentsAsc
{
    NSSortDescriptor *sortItemsByPriceInCentsAsc = [[NSSortDescriptor alloc]initWithKey:@"priceInCents"ascending:YES];
    NSArray *newArray = @[sortItemsByPriceInCentsAsc];
    [self.items sortUsingDescriptors: newArray];
    NSLog(@"%@", self.items);
}
- (void)sortItemsByPriceInCentsDesc
{
    NSSortDescriptor *sortItemsByPriceInCentsDesc = [[NSSortDescriptor alloc] initWithKey:@"priceInCents"ascending:NO];
    NSArray *newArray = @[sortItemsByPriceInCentsDesc];
    [self.items sortUsingDescriptors: newArray];
    NSLog(@"%@", self.items);

}

- (NSArray *)allItemsWithName:(NSString *)name
{
    NSPredicate *allItemsWithName = [NSPredicate predicateWithFormat: @"name LIKE %@", name];
    NSArray *itemsWithName = [self.items filteredArrayUsingPredicate:allItemsWithName];
    return itemsWithName;
    
}



- (NSArray *)allItemsWithMinimumPriceInCents:(NSUInteger)number
{   //NSPredicate
    // %lu is calling on SOME NUMBER. you have you add the object after the comma to call upon the property of number listed in the .h file.
    
    NSPredicate *allItemsWithMinimumPriceInCents = [NSPredicate predicateWithFormat:@"priceInCents >= %lu", number];
    NSArray *minimumPriceOfItems = [self.items filteredArrayUsingPredicate:allItemsWithMinimumPriceInCents];
    return minimumPriceOfItems;
    NSLog(@"%@", self.items);
    
    //sort descriptors does not allow comparisons, unless within it's self. NSPredicate @"referring to key name and comparison" employ format specifier
    // DO NOT USE MAGIC NUMBERS, IF YOU ARE DEALING WITH A BIG PROJECT, YOU WOULD RATHER CALL UPON 'NUMBER' TO CHANGE ALL NUMBERS IN PROJECT RATHER THAN INDIVIDUALLY CHANGING IT TO A SPECIFIC OUTSIDE NUMBER, 500.
}
- (NSArray *)allItemsWithMaximumPriceInCents:(NSUInteger)number
{
    NSPredicate *allItemsWithMaximumPriceInCents = [NSPredicate predicateWithFormat:@"priceInCents <= %lu", number];
    NSArray *maximumPriceOfItems = [self.items filteredArrayUsingPredicate:allItemsWithMaximumPriceInCents];
    return maximumPriceOfItems;
    NSLog(@"%@", self.items);
}

@end
