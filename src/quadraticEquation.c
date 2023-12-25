// Program to calculate and display the roots of a quadratic equation.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    // Declare variables for coefficients (a, b, c) and discriminant (f), and roots (x1, x2)
    int a, b, c;
    double f, x1, x2;

    // Prompt the user to enter values for coefficients a, b, and c
    printf("Enter the values for a, b, and c: \n");
    scanf("%i ,%i, %i", &a, &b, &c);

    // Check if the equation is linear (a=0)
    if (a == 0) {
        x1 = -1 * (c / b);
        printf("The value of x is: %f\n", x1);
    } else {
        // Calculate the discriminant
        f = b * b - 4 * a * c;

        // Check if the discriminant is positive, negative, or zero
        if (f > 0) {
            // Calculate and display the roots for a positive discriminant
            x1 = (-b + sqrt(f)) / (2 * a);
            x2 = (-b - sqrt(f)) / (2 * a);
            printf("The values of x1 and x2 are: %f and %f\n", x1, x2);
        } else if (f < 0) {
            // Display a message for no real roots when the discriminant is negative
            printf("No real roots.\n");
        } else {
            // Display a message when the discriminant is zero (equal roots)
            x1 = -b / (2 * a);
            printf("The values of x1 and x2 are equal and are both: %f\n", x1);
        }
    }

    return 0;
}
