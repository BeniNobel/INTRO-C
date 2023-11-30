// Program to calculate the factorial of a number 'n'.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, i, fact;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Initialize factorial to 1
    for (i = 1, fact = 1; i <= n; fact *= i, i++);

    // Display the factorial of the entered number
    printf("%d! = %d\n", n, fact);

    // Return 0 to indicate successful execution
    return 0;
}
