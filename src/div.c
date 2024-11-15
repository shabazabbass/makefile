/**
 * @file div.c
 * @author Shabaz
 * @company Technologics
 * @brief Implementation of the division functionality.
 *
 * This file provides the implementation of the `div_fun` function,
 * which simulates a division operation and returns a predefined result.
 */

#include "div.h"

/**
 * @brief Implementation of the division function.
 *
 * This function prints a message indicating that the division function
 * has been called and returns a predefined result.
 * 
 * @return int - The predefined result of the division operation.
 */
int div_fun() {
    printf("div function is called \n");
    return DIV_RESULT;
}
