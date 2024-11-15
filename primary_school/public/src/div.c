/**
 * @file div.c
 * @brief Source file for division operation.
 * @company Technologics
 * @date Created on 2024-11-15
 * @authot Shabaz
 * 
 * This file implements the public API for division.
 */

#include "../inc/div.h"
#include "../../private/inc/priv_div.h"

int div_fun(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 as a fallback for undefined behavior
    }
    int result = priv_div(a, b);
    printf("Division: %d / %d = %d\n", a, b, result);
    return result;
}
