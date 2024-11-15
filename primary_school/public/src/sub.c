/**
 * @file sub.c
 * @brief Source file for subtraction operation.
 * @company Technologics
 * @date Created on 2024-11-15
 * 
 * This file implements the public API for subtraction.
 */

#include "../inc/sub.h"
#include "../../private/inc/priv_sub.h"

int sub_fun(int a, int b) {
    int result = priv_sub(a, b);
    printf("Subtraction: %d - %d = %d\n", a, b, result);
    return result;
}
