/*
   Program to repeatedly prompt the user to enter zero using goto statement.
*/

#include <stdio.h>
#include <conio.h> // Note: 'conio.h' is not standard; consider using alternatives.

int main() {
    double n;

    // Label to jump back to if the entered value is not zero
    etiq1:

    // Prompt the user to enter zero
    printf("Enter zero: ");
    scanf("%lf", &n);

    // Check if the entered value is not zero; if true, jump back to the label 'etiq1'
    if (n != 0)
        goto etiq1;

    // Pause the console output
    getch();

    // Return 0 to indicate successful execution
    return 0;
}
