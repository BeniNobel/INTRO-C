// Program to simulate a simple drink menu using functions and a switch statement.

#include <stdio.h>

// Function to display the menu and get the user's choice
int menu() {
    int choice = 0;

    // Keep prompting the user until a valid choice is made
    while (choice < 1 || choice > 6) {
        printf("Menu:\n");
        printf("_____\n");
        printf("1: Budweiser\n");
        printf("2: Miller Lite\n");
        printf("3: Coors Light\n");
        printf("4: Orange Soda\n");
        printf("5: Lemon Soda\n");
        printf("6: Cola\n");
        printf("_____\n");
        printf("What is your choice? ");
        scanf("%d", &choice);
    }

    return choice;
}

int main() {
    // Switch statement to handle the user's choice
    switch (menu()) {
        case 1:
            printf("You chose 'Budweiser'\n");
            break;
        case 2:
            printf("You chose 'Miller Lite'\n");
            break;
        case 3:
            printf("You chose 'Coors Light'\n");
            break;
        case 4:
            printf("You chose 'Orange Soda'\n");
            break;
        case 5:
            printf("You chose 'Lemon Soda'\n");
            break;
        case 6:
            printf("You chose 'Cola'\n");
            break;
    }

    return 0;
}
