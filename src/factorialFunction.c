// Program to calculate and display the factorial of a given number using a function.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate the factorial of a given number
int fact(int a) {
    int n = 1, i;

    // Calculate the factorial using a for loop
    for (i = 2; i <= a; i++) {
        n *= i; // Update the factorial by multiplying with the current loop variable
    }

    return n;
}

int main() {
    // Declare variables for the input number (e) and calculated factorial (f)
    int e, f;

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &e);

    // Call the function to calculate the factorial
    f = fact(e);

    // Display the calculated factorial
    printf("The factorial of %d is: %d\n", e, f);

    return 0;
}
