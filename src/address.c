// Program to demonstrate variable addresses in memory.

#include <stdio.h>

int main() {
    // Declare and initialize variables
    int i = 3;
    int j = i;

    // Print addresses of variables i and j
    printf("Address of i: %p\n", (void*)&i);
    printf("Address of j: %p\n", (void*)&j);

    // Return 0 to indicate successful execution
    return 0;
}
