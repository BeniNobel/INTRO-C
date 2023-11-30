// Program to read a character, assign it to another variable, and print the result.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    // Declare variables
    char b, c;

    // Prompt the user to enter a character and read it using getchar.
    printf("Enter a character: ");
    b = getchar();

    // Assign the value of 'b' to 'c'.
    c = b;

    // Print the result, showing the character and its ASCII value.
    printf("The result with the character value %c is %d", b, c);

    // Return 0 to indicate successful execution.
    return 0;
}
