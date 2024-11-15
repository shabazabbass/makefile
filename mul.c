/**
 * @file mul.c
 * @author Shabaz
 * @company Technologics
 * @brief Implementation of the multiplication functionality.
 *
 * This file provides the implementation of the `mul_fun` function,
 * which simulates a multiplication operation and returns a predefined result.
 */

#include "mul.h"

/**
 * @brief Implementation of the multiplication function.
 *
 * This function prints a message indicating that the multiplication function
 * has been called and returns a predefined result.
 * 
 * @return int - The predefined result of the multiplication operation.
 */
int mul_fun() {
    printf("mul function is called \n");
    return MUL_RESULT;
}
