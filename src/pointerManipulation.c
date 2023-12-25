// Program to demonstrate pointer arithmetic and manipulation.

#include <stdio.h>

int main() {
    // Declare variables
    int i = 3, j = 6;
    int *p1, *p2, *p3;

    // Assign addresses to pointers
    p1 = &i;
    p2 = &j;

    // Perform pointer arithmetic
    p1 = p2 + 2;
    p3 = p1 - p2;

    // Print information
    printf("Address of i: %p\t Value of i: %d\n", (void *)&i, i);
    printf("Address of j: %p\t Value of j: %d\n", (void *)&j, j);
    printf("Address of p1: %p\t Value of p1: %p\n", (void *)&p1, (void *)p1);
    printf("Address of p2: %p\t Value of p2: %p\n", (void *)&p2, (void *)p2);
    printf("Address of p3: %p\t Value of p3: %p\n", (void *)&p3, (void *)p3);

    // Return 0 to indicate successful execution
    return 0;
}
