/**
 * @file hs_math.c
 * @brief Source file for high school math operations.
 * @company Technologics
 * @date Created on 2024-11-15
 * 
 * Implements the public API for high school operations using primary school public APIs.
 */

#include <stdio.h>
#include "../inc/hs_math.h"

int hs_operation(int a, int b) {
    printf("High School Public Operation:\n");
    int sum = add_fun(a, b);
    int product = mul_fun(a, b);
    printf("Sum: %d, Product: %d\n", sum, product);
    return sum + product;
}
