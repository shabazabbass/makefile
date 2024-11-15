#include <stdio.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

int main() {
    int choice;

    while (1) {
        printf("\nArithmetic Operations Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Result of addition: %d\n", add_fun());
                break;
            case 2:
                printf("Result of subtraction: %d\n", sub_fun());
                break;
            case 3:
                printf("Result of multiplication: %d\n", mul_fun());
                break;
            case 4:
                printf("Result of division: %d\n", div_fun());
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
