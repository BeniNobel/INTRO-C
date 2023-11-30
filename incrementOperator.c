// Program to demonstrate the increment operator in C.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    // Declare and initialize variables
    int x, y, z;
    x = 15;

    // Increment x and assign the result to y
    y = ++x;

    // Increment y and assign the result to z
    z = ++y;

    // Print the value of z
    printf("The incremented value is %i", z);

    // Return 0 to indicate successful execution
    return 0;
}
