// Program to iterate through numbers up to a specified limit, break the loop when reaching a breaking point, and print the final value of the loop variable.

#include<stdio.h>

int main() {
    // Declare variables
    int i, n, m;

    // Prompt user to input a number (m)
    printf("Enter the number (m): ");
    scanf("%i", &m);

    // Prompt user to input a breaking point (n)
    printf("Enter the breaking point (n): ");
    scanf("%i", &n);

    // Iterate through numbers up to m
    for (i = 0; i < m; i++) {
        // Print the current value of i
        printf("i = %d\n", i);

        // Check if i is equal to the breaking point (n)
        if (i == n)
            break;
    }

    // Print the final value of i after the loop
    printf("The value of i at the exit of the loop = %d\n", i);

    // Return 0 to indicate successful execution
    return 0;
}
