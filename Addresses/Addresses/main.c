//
//  main.c
//  Addresses
//
//  Created by Scott on 11/19/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i = 17;
    printf("i stores its value at %p\n", &i);
    printf("this function starts at %p\n", main);
    
    float one, two;
    printf("one's size: %lu\n", sizeof(one));
    printf("one stores its value at %p\n", &one);
    printf("two's size: %lu\n", sizeof(two));
    printf("two stores its value at %p\n", &two);
    
    printf("2-byte number - 1 for sign would be 2^15 = %i\n\n", (int)pow(2, 15));
    printf("From limits.h:\n");
    printf("Short min: %i\n", SHRT_MIN);
    printf("Short max: %i\n", SHRT_MAX);
    
    
    
    
    return 0;
}
