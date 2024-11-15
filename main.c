#include <stdio.h>
#include "high_school/public/inc/hs_math.h"
#include "high_school/public/inc/sqrt.h"
#include "high_school/public/inc/square.h"
#include "/home/shabaz/techno_make_file/primary_school/public/inc/add.h"
#include "/home/shabaz/techno_make_file/primary_school/public/inc/div.h"
#include "/home/shabaz/techno_make_file/primary_school/public/inc/mul.h"
#include "/home/shabaz/techno_make_file/primary_school/public/inc/sub.h"

int main() {
    int choice;
    double a, b;
    int int_a, int_b;

    while (1) {
        // Display menu for operations
        printf("\nArithmetic Operations Menu:\n");
        printf("1. Square\n");
        printf("2. Square Root\n");
        printf("3. Addition\n");
        printf("4. Subtraction\n");
        printf("5. Multiplication\n");
        printf("6. Division\n");
        printf("7. High school math\n");
        printf("8. Exit\n");
        printf("Enter your choice (1-8): ");
        
        // Get user choice
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number between 1 and 9.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        if (choice == 8) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 2) {
            // Prompt for a number for square and square root operations
            printf("Enter a number: ");
            scanf("%lf", &a);
        } else if (choice >= 3 && choice <= 7) {
            // Prompt for two numbers for basic arithmetic operations
            printf("Enter first number: ");
            scanf("%d", &int_a);
            printf("Enter second number: ");
            scanf("%d", &int_b);
        }

        // Switch case to handle the operations based on user choice
        switch (choice) {
            case 1: // Square
                square_fun(int_a); // Casting to int for square operation
                break;
            case 2: // Square Root
                sqrt_fun(a); // Square root for double
                break;
            case 3: // Addition 
                add_fun(int_a, int_b); // Addition from primary
                break;
            case 4: // Subtraction 
                sub_fun(int_a, int_b); // Subtraction from primary
                break;
            case 5: // Multiplication 
                mul_fun(int_a, int_b); // Multiplication from primary
                break;
            case 6: // Division 
                div_fun(int_a, int_b); // Division from primary
                break;
            case 7: //hs
                hs_operation(int_a, int_b);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
