// Program to print a rectangle of asterisks based on user input.

#include <stdio.h>

int main() {
    int i, j, n, c;

    // Input the size of the square
    printf("Enter the size: ");
    scanf("%i", &n);

    c = n * 2;

    // Loop to print the hollow square pattern
    printf("\t\t");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= c; j++) {
            if (i == 1 || i == n || j == 1 || j == c) {
                printf(" *");
            } else {
                printf("  ");
            }
        }
        printf("\n");
        printf("\t\t");
    }

    // Return 0 to indicate successful execution
    return 0;
}
