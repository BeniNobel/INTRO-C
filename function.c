// Program to demonstrate function calls and variable scopes.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function declaration
void fonction();

int main() {
    int i;

    // Loop to call the function five times
    for (i = 0; i < 5; i++)
        fonction();

    return 0;
}

// Function definition
void fonction() {
    // Local variable with the same name as the global variable
    int n = 0;

    // Display the number of the function call
    printf("Call number %d\n", n);

    return;
}
