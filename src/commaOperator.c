// Program to demonstrate the use of the comma operator to assign and calculate values in a single line.

#include<stdio.h>

int main(int argc, char *argv[]) {
    // Declare variables
    int a, b;

    // Use the comma operator to assign a value to 'a' and calculate 'b'
    b = ((a = 3), (a + 2));

    // Print the result
    printf("The result is %i", b);

    // Return 0 to indicate successful execution
    return 0;
}
