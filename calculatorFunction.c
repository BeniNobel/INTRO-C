// Program to implements a basic calculator that allows the user to perform addition, subtraction,
// multiplication, and division on two integers.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate the sum of two numbers
int somme(int a, int b) {
    return a + b;
}

// Function to calculate the difference between two numbers
int difference(int a, int b) {
    return a - b;
}

// Function to calculate the product of two numbers
int multiplication(int a, int b) {
    return a * b;
}

// Function to calculate the quotient of two numbers
int division(int a, int b) {
    return a / b;
}

int main() {
    int a, b, op, t;

    do {
        // Input two integers
        printf("Enter an integer a: ");
        scanf("%d", &a);
        printf("Enter an integer b: ");
        scanf("%d", &b);

        // Display operation options
        printf("1. Addition\n");
        printf("2. Difference\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Choose the operation: ");
        scanf("%d", &op);

        // Perform the selected operation using a switch statement
        switch (op) {
            case 1:
                printf("\nYou chose Addition\n");
                printf("The Sum is %d", somme(a, b));
                break;
            case 2:
                printf("\nYou chose Subtraction\n");
                printf("The Difference is %d", difference(a, b));
                break;
            case 3:
                printf("\nYou chose Multiplication\n");
                printf("The Product is %d", multiplication(a, b));
                break;
            case 4:
                if (b != 0) {
                    printf("\nYou chose Division\n");
                    printf("The Quotient is %d", division(a, b));
                } else {
                    printf("\nError: Division by zero!");
                }
                break;
            default:
                printf("\nInvalid choice!");
        }

        // Ask user if they want to continue
        printf("\nDo you want to continue? Press any number to continue or 0 to exit: ");
        scanf("%d", &t);

    } while (t != 0);

    return 0;
}
