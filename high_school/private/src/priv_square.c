/**
 * @file priv_square.c
 * @brief Source file for private square operation.
 * @company Technologics
 * @date Created on 2024-11-16
 * 
 * This file implements the private API to square a number.
 */
#include "../inc/priv_square.h"
#include "/home/shabaz/techno_make_file/primary_school/private/inc/priv_mul.h"

int priv_square(int a) {
    return priv_mul(a, a); // Calls primary school's private square API
}
