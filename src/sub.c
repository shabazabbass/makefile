/**
 * @file sub.c
 * @author Shabaz
 * @company Technologics
 * @brief Implementation of the subtraction functionality.
 *
 * This file provides the implementation of the `sub_fun` function,
 * which simulates a subtraction operation and returns a predefined result.
 */

#include "sub.h"

/**
 * @brief Implementation of the subtraction function.
 *
 * This function prints a message indicating that the subtraction function
 * has been called and returns a predefined result.
 * 
 * @return int - The predefined result of the subtraction operation.
 */
int sub_fun() {
    printf("sub function is called \n");
    return SUB_RESULT;
}
