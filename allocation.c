// Program demonstrating dynamic memory allocation and variable assignments.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare variables
    int i = 3, b;
    int *p;

    // Print initial value of p (uninitialized)
    printf("Value of p before initialization: %ld\t", (long)p);
    printf("\n\n");

    // Allocate memory for p
    p = (int *)malloc(sizeof(int));

    // Print value of p after initialization
    printf("Value of p after initialization: %ld\t", (long)p);
    printf("\n\n");

    // Assign value of i to the memory location pointed by p
    *p = i;

    // Print value of *p
    printf("Value of *p = %d\t", *p);

    // Assign value of i to b
    b = i;

    // Print value of b
    printf("Value of b = %d\t", b);

    // Return 0 to indicate successful execution
    return 0;
}
