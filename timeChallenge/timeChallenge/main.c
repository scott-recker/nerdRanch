//
//  main.c
//  timeChallenge
//
//  Created by Scott on 11/19/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    long secondsSince1970 = time(NULL);
    printf("It has been %ld seconds since 1970\n", secondsSince1970);
    
    struct tm now;
    localtime_r(&secondsSince1970, &now);
    printf("The time is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
    
    long futureSeconds = secondsSince1970 + 4000000;
    localtime_r(&futureSeconds, &now);
    printf("The time is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
    printf("The date will be  %i/%i/%i\n", now.tm_mon + 1, now.tm_mday, now.tm_year + 1900);
    
    
    
    
    return 0;
}
