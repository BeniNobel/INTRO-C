// Program to count the number of characters in a string.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    int i;
    char *chaine;

    // Assign a string to the pointer variable chaine
    chaine = "ThanksGiving";

    // Iterate through the string to count the number of characters
    for (i = 0; *chaine != '\0'; i++)
        chaine++;

    // Print the number of characters in the string
    printf("Number of characters = %d\n", i);

    // Return 0 to indicate successful execution
    return 0;
}
