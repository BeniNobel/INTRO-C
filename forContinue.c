// Program to demonstrate the use of a 'for' loop with a continue statement.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Declare the loop variable
    int i;

    // Loop from 0 to 4, skipping the iteration when 'i' is 3, and print the value of 'i'
    for (i = 0; i < 5; i++) {
        if (i == 3)
            continue;
        printf("i = %d\n", i);
    }

    // Print the final value of 'i' after the loop
    printf("The value of i at the exit of the loop = %d\n", i);

    // Return 0 to indicate successful execution
    return 0;
}
