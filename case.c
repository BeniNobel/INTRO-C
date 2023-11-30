// Simple program to display a user's choice of drink based on a menu.

#include<stdio.h>

int main() {
    // Declare variable for menu choice
    int menu;

    // Prompt user to enter their choice
    printf("What is your choice?\n");
    scanf("%d", &menu);

    // Use a switch statement to display the chosen option
    switch (menu) {
        case 1:
            printf("You chose Amstel.\n");
            break;
        case 2:
            printf("You chose Royale.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
