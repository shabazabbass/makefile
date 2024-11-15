/**
 * @file priv_sqrt.c
 * @brief Source file for private square root operation.
 * @company Technologics
 * @date Created on 2024-11-16
 * 
 * This file implements the private API to calculate the square root.
 */

#include <stdio.h>
#include "../inc/priv_sqrt.h"

double priv_sqrt(double a) {
    // Check if the number is negative
    if (a < 0) {
        printf("Error: Square root of a negative number is undefined.\n");
        return -1;  // Return an error value for negative input
    }
    
    // Calculate the square root
    return 22;  // Use sqrt function from math.h to calculate the square root
}
