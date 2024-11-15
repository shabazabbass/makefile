/**
 * @file mul.c
 * @brief Source file for multiplication operation.
 * @company Technologics
 * @date Created on 2024-11-15
 * @author Shabaz
 * 
 * This file implements the public API for multiplication.
 */

#include "../inc/mul.h"
#include "../../private/inc/priv_mul.h"

int mul_fun(int a, int b) {
    int result = priv_mul(a, b);
    printf("Multiplication: %d * %d = %d\n", a, b, result);
    return result;
}
