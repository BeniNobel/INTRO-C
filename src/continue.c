// Program to iterate through numbers up to a specified limit, skipping a particular value, and print the final value of the loop variable.

#include<stdio.h>

int main() {
    // Declare variables
    int i, m, n;

    // Prompt user to input a number (n)
    printf("Enter the number: ");
    scanf("%i", &n);

    // Prompt user to input a value to skip (m)
    printf("Enter the value to skip: ");
    scanf("%i", &m);

    // Iterate through numbers up to n
    for (i = 0; i < n; ++i) {
        // Skip printing the value if it equals the specified skip value (m)
        if (i == m)
            continue;
        printf("i = %d\n", i);
    }

    // Print the final value of i after the loop
    printf("The value of i at the exit of the loop = %d\n", i);

    // Return 0 to indicate successful execution
    return 0;
}
