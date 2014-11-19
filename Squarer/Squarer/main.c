//
//  main.c
//  Squarer
//
//  Created by Scott on 11/18/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>
int squarer(int x){
    return x * x;
}

int main(int argc, const char * argv[]) {
    
    int nbr = 5;
    printf("\"%i\" squared is \"%i\"\n", nbr, squarer(nbr));
    return 0;
}
