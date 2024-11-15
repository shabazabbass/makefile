/**
 * @file add.c
 * @brief Source file for addition operation.
 * @author Shabaz
 * @company Technologics
 * 
 * This file implements the public API for addition.
 */

#include "../inc/add.h"
#include "../../private/inc/priv_add.h"

int add_fun(int a, int b) {
    int result = priv_add(a, b);
    printf("Addition: %d + %d = %d\n", a, b, result);
    return result;
}
