// Program to demonstrate a function that increments a local variable and prints the call number.

#include <stdio.h>
#include <stdlib.h>

// Function to increment a local variable and print the call number
void function() {
    int n = 0;  // Local variable to the function
    n++;
    printf("Call number %d\n", n);
    return;
}

int main() {
    int i;

    // Call the function five times
    for (i = 0; i < 5; i++)
        function();

    return 0;
}
