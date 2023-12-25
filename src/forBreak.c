// Program to demonstrate the use of a 'for' loop with a break statement.

#include <stdio.>
#include <stdlib.h>
#include <math.h>

int main() {
    // Declare the loop variable
    int i;

    // Loop from 0 to 4, printing the value of 'i' and breaking when 'i' is 3
    for (i = 0; i < 5; i++) {
        printf("i = %d\n", i);
        if (i == 3)
            break;
    }

    // Print the final value of 'i' after the loop
    printf("The value of i at the exit of the loop = %d\n", i);

    // Return 0 to indicate successful execution
    return 0;
}
