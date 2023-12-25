// Difference Calculator Program

#include <stdio.h>

// Function to calculate the difference of two integers
int difference(int a, int b) {
    int diff = a - b;
    return diff;
}

int main() {
    // Declare variables
    int num1, num2, result;

    // Prompt user to enter the first number
    printf("Enter the first number: ");
    scanf("%i", &num1);

    // Prompt user to enter the second number
    printf("Enter the second number: ");
    scanf("%i", &num2);

    // Call the 'difference' function and store the result
    result = difference(num1, num2);

    // Display the difference
    printf("The difference of the two numbers is %d\n", result);

    // Return 0 to indicate successful execution
    return 0;
}
