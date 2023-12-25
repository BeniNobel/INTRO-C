// Program to generate a pattern of asterisks in the form of a pyramid based on user input for the number of lines.

#include <stdio.h>

int main() {
    int LIG;  // Number of lines in the pyramid
    int L;    // Loop variable for lines
    int ESP;  // Number of spaces
    int I;    // Loop variable for spaces and asterisks

    // Get the number of lines from the user, ensuring it's between 1 and 30
    do {
        printf("Number of lines: ");
        scanf("%d", &LIG);
    } while (LIG < 1 || LIG > 30);

    // Loop to print the pyramid pattern
    for (L = 0; L < LIG; L++) {
        ESP = LIG - L - 1;

        // Print spaces before the asterisks
        for (I = 0; I < ESP; I++)
            putchar(' ');

        // Print the asterisks
        for (I = 0; I < 2 * L + 1; I++)
            putchar('*');

        // Move to the next line after completing a row
        putchar('\n');
    }

    return 0;
}
