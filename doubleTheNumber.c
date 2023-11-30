// Program to double a number.

#include<stdio.h>

// Function to double a number
int doubleTheNumber(int a) {
    int doubleValue = 2 * a;
    return doubleValue;
}

int main() {
    // Declare variables
    int a;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &a);

    // Calculate the double using the nobel function
    int result = doubleTheNumber(a);

    // Display the result
    printf("The double of %d is %d\n", a, result);

    // Return 0 to indicate successful execution
    return 0;
}
