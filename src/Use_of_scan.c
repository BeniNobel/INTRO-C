// Program to demonstrate the scanf function for hexadecimal input.

#include <stdio.h>

int main() {
    int i;

    // Prompt the user to enter an integer in hexadecimal form
    printf("Enter an integer in hexadecimal form (i = ");
    
    // Use scanf to read the hexadecimal input and store it in the variable 'i'
    scanf("%x", &i);
    
    // Print the decimal equivalent of the entered hexadecimal number
    printf("i = %d\n", i);

    return 0;
}
