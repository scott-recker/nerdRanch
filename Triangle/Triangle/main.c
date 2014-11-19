//
//  main.c
//  Triangle
//
//  Created by Scott on 11/18/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float a, float b){
    return 180 - (a + b);
}

int main(int argc, const char * argv[]) {
    
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angele is %.2f\n", angleC);
    return 0;
}
