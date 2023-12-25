// Program to calculate the product of two numbers and determine if the result is positive or negative.

#include<stdio.h>

int main() {
    // Declare variables for input values
    int i, j;

    // Get input values for i and j
    printf("Enter two values: ");
    scanf("%d", &i);
    scanf("%d", &j);

    // Calculate the product of i and j
    int product = i * j;

    // Check if the product is positive or negative
    printf("The product of these two values is: ");
    if ((i < 0 && j < 0) || (i >= 0 && j >= 0)) {
        printf("positive\n");
    } else {
        printf("negative\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
