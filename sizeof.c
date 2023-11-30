// Program to determine the number of characters in a character array.

#include<stdio.h>

int main() {
    // Define a character array "tab" and initialize it with "ThanksGiving"
    char tab[] = "ThanksGiving";

    // Calculate and display the number of characters in the array
    int size = sizeof(tab) / sizeof(char);
    printf("Number of characters in the array = %d\n", size);

    return 0;
}
