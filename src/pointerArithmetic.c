// Program to demonstrate pointer arithmetic.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double a = 2;
    double *c, *d;

    // Assign the address of 'a' to pointer 'c'
    c = &a;

    // Increment the pointer 'c' by 1 (sizeof(double))
    d = c + 1;

    // Print the values of 'c' and 'd'
    printf("The value of c: %p\t, the value of d: %p\n", (void *)c, (void *)d);

    // Return 0 to indicate successful execution
    return 0;
}
