// Program to calculate and display the quotient and remainder of two numbers.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    // Declare variables for the first number (a), second number (b), quotient (q), and remainder (r)
    int a, b, q, r;

    // Prompt the user to enter the first and second numbers
    printf("Enter the first number: ");
    scanf("%i", &a);
    printf("Enter the second number: ");
    scanf("%i", &b);

    // Calculate and display the quotient of a and b
    q = a / b;
    printf("The quotient of %i and %i is %i\n", a, b, q);

    // Calculate and display the remainder of a and b
    r = a % b;
    printf("The remainder of %i and %i is %i\n", a, b, r);

    return 0;
}
