//
//  main.c
//  CountDown
//
//  Created by Scott on 11/18/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>

int main(int argc, const char * argv[]) {
//    int x;
    printf("Where should I start counting? ");
    const char *name = readline(NULL);
    int x = atoi(name);
    while(x >= 0){
        printf("%i\n", x);
        if(x % 5 == 0){
            printf("Found one!\n");
        }
        x -= 3;
    }
    return 0;
}
