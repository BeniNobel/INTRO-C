// Simple calculator program allowing the user to perform basic arithmetic operations on two numbers.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    // Declare variables
    int a, b, op;

    // Prompt user to enter integer a
    printf("Enter an integer a: ");
    scanf("%d", &a);

    // Prompt user to enter number b
    printf("Enter a number b: ");
    scanf("%d", &b);

    // Display menu of operations
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // Prompt user to choose an operation
    printf("Choose the operation: ");
    scanf("%d", &op);

    // Perform the selected operation using a switch statement
    switch (op) {
        case 1:
            printf("\nYou chose Addition\n");
            printf("The Sum is %d", a + b);
            break;
        case 2:
            printf("\nYou chose Subtraction\n");
            printf("The Difference is %d", a - b);
            break;
        case 3:
            printf("\nYou chose Multiplication\n");
            printf("The Product is %d", a * b);
            break;
        case 4:
            // Check for division by zero before performing the operation
            if (b != 0) {
                printf("\nYou chose Division\n");
                printf("The Quotient is %d", a / b);
            } else {
                printf("\nError: Division by zero!");
            }
            break;
        default:
            printf("\nError: Invalid choice!");
    }

    // Return 0 to indicate successful execution
    return 0;
}
