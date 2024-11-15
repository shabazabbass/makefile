/**
 * @file add.c
 * @author Shabaz
 * @company Technologics
 * @brief Implementation of the addition functionality.
 *
 * This file provides the implementation of the `add_fun` function,
 * which simulates an addition operation and returns a predefined result.
 */

#include "add.h"

/**
 * @brief Implementation of the addition function.
 *
 * This function prints a message indicating that the addition function
 * has been called and returns a predefined result.
 * 
 * @return int - The predefined result of the addition operation.
 */
int add_fun() {
    printf("add function is called \n");
    return ADD_RESULT;
}
