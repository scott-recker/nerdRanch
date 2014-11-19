//
//  main.c
//  PBR
//
//  Created by Scott on 11/19/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void meterToFeetAndInches(double meters, unsigned int * ftPtr, double *inPtr){
//    // Pass the address of the interPart as an argument
//    fractionPart = modf(pi, &integerPart);
//    
//    // Find the value stored in the integerPart
//    printf("interPart %.0f, fractionPart = %.2f\n", integerPart, fractionPart);
    
    // This function assumes meters is non-negative
    
    // Convert the number of meters to a floating-point number of feet
    double rawFeet = meters * 3.281; // e.g. 2.4536
    
    double tempFeet;
    double fractionalPart = modf(rawFeet, &tempFeet);
    *ftPtr = tempFeet;
    
    
    // Calculate inches
//    double fractionalFoot = rawFeet - tempFeet;
    double inches = fractionalPart * 12.0;
    
    // Store the number of inches at the supplied address
    if (inPtr){
        printf("Storing %.2f to the adderess %p\n", inches, inPtr);
        *inPtr = inches;
    }
    
}

int main(int argc, const char * argv[]) {
    
//    double pi = 3.14;
//    double integerPart;
//    double fractionPart;
//    
//    // Pass the address of the interPart as an argument
//    fractionPart = modf(pi, &integerPart);
//    
//    // Find the value stored in the integerPart
//    printf("interPart %.0f, fractionPart = %.2f\n", integerPart, fractionPart);
    
    double meters = 3.0;
    unsigned int feet;
    double inches;
    
    meterToFeetAndInches(meters, &feet, &inches);
    printf("%.1f meters is equal to %d feet and %.1f inches\n", meters, feet, inches);
    meters = 9;
    meterToFeetAndInches(meters, &feet, &inches);
    printf("%.1f meters is equal to %d feet and %.1f inches\n", meters, feet, inches);
    return 0;
}
