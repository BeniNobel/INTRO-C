// Program to swap values of two variables using a temporary variable.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    // Declare variables
    int a = 2;
    int b = 5;
    int c;

    // Display the initial values of a and b
    printf("Initial values: a = %d and b = %d\n", a, b);

    // Swap the values using a temporary variable
    c = a;
    a = b;
    b = c;

    // Display the values of a and b after swapping
    printf("Values after swapping: a = %d, b = %d\n", a, b);

    // Return 0 to indicate successful execution
    return 0;
}
