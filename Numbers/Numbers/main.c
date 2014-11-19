//
//  main.c
//  Numbers
//
//  Created by Scott on 11/18/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    double y = 12345.6789;
    printf("y is %.2f\n", y);
    printf("y is %.2e\n", y);
    
    int x = 1;
    printf("The sine of %i is %.3f\n", x, sin(x));
    
    return 0;
}
