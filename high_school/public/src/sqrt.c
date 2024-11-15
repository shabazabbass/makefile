/**
 * @file sqrt.c
 * @brief Source file for square root operation.
 * @company Technologics
 * @date Created on 2024-11-16
 * 
 * This file implements the public API for calculating the square root.
 */

#include <stdio.h>
#include "../inc/sqrt.h"

double sqrt_fun(double a) {
    double result = priv_sqrt(a); // Calls primary school's public square root API
    printf("Square root of %.2f is: %.2f\n", a, result);
    return result;
}
