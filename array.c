// Program to declare, initialize, and print the elements of an array.

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main() {
    // Declare an array of size N and initialize with values 0 to 9
    int tab[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Iterate through the array and print each element
    for (int i = 0; i < N; i++) {
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    // Return 0 to indicate successful execution
    return 0;
}
