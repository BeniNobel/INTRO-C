// Program to determine if a given number is even or odd.

#include<stdio.h>

int main() {
    int a;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%i", &a);

    // Check if the number is even or odd
    if (a % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
