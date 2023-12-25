// Program to find the absolute value of an integer using the conditional (ternary) operator.

#include<stdio.h>

int main(int argc, char *argv[]) {
    // Declare and initialize an integer variable
    int a = -2;

    // Use the conditional (ternary) operator to find the absolute value
    int result = (a >= 0) ? a : -a;

    // Print the result
    printf("The absolute value is %i", result);

    // Return 0 to indicate successful execution
    return 0;
}
