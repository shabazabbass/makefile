/**
 * @file priv_div.c
 * @brief Private source file for division operation.
 * @company Technologics
 * @date Created on 2024-11-15
 * 
 * This file implements the private division function.
 */

#include <stdio.h>
#include "../inc/priv_div.h"

int priv_div(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 as a fallback for undefined behavior
    }
    return a / b;
}
