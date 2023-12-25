// Program to calculate and display the factorial of a given number.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Declare variables for the input number (N), factorial (F), and loop variable (i)
    int N, F = 1, i;

    // Prompt the user to enter a starting number N
    printf("Enter a starting number N: ");
    scanf("%d", &N);

    // Calculate the factorial using a loop
    for (i = 2; i <= N; i++) {
        F *= i; // Update the factorial by multiplying with the current loop variable
    }

    // Display the calculated factorial
    printf("The factorial is %d\n", F);

    return 0;
}
