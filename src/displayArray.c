// Program to display elements of an array using a loop.

#include <stdio.h>

#define N 4

int main() {
    // Define and initialize an array "tab" of length N
    int tab[N] = {1, 2, 3, 4};
    int i;

    // Display each element of the array
    for (i = 0; i < N; i++)
        printf("tab[%d] = %d\n", i, tab[i]);

    return 0;
}
