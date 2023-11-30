// Program to prompt the user to enter an integer between 1 and 10 using a do-while loop.

#include<stdio.h>

int main() {
    // Declare variable to store user input
    int a;

    // Prompt the user to enter an integer between 1 and 10 using a do-while loop
    do {
        printf("Enter an integer between 1 and 10: ");
        scanf("%i", &a);
    } while (a <= 0 || a > 10);

    // The loop continues until a valid integer within the specified range is entered.

    return 0;
}
