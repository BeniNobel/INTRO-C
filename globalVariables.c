// Program to demonstrate a simple function that increments a global variable and prints the call number.

#include <stdio.h>
#include <stdlib.h>

int n;

// Function to increment a global variable and print the call number
void function() {
    n++;
    printf("Call number %d\n", n);
    return;
}

int main() {
    int i;

    // Call the function five times
    for (i = 0; i < 5; i++)
        fonction();

    return 0;
}
