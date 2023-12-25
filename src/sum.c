// Program to calculate the sum of two numbers.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Declare variables for input and sum
    double a, b, sum;

    // Get input values for a and b
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);

    // Calculate the sum
    sum = a + b;

    // Print the result
    printf("The sum of %.2f and %.2f is: %.2f", a, b, sum);

    // Return 0 to indicate successful execution
    return 0;
}
