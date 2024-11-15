/**
 * @file square.c
 * @brief Source file for square operation.
 * @company Technologics
 * @date Created on 2024-11-16
 * 
 * This file implements the public API for squaring a number.
 */
#include <stdio.h>
#include "../inc/square.h"

int square_fun(int a) {
    int result = a * a; // Calls primary school's public square API
    printf("Square of %d is: %d\n", a, result);
    return result;
}
