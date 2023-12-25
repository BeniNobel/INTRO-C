// Program to demonstrate pointer usage in iterating through an array in ascending and descending order.

#include <stdio.h>

#define N 5

int tab[5] = {1, 2, 6, 0, 7};

int main() {
    int *p;

    // Iterate through the array in ascending order
    printf("\nAscending Order:\n");
    for (p = &tab[0]; p <= &tab[N - 1]; p++) {
        printf("%d\n", *p);
    }

    // Iterate through the array in descending order
    printf("\nDescending Order:\n");
    for (p = &tab[N - 1]; p >= &tab[0]; p--) {
        printf("%d\n", *p);
    }

    // Return 0 to indicate successful execution
    return 0;
}
