// Program to iterate through an array using a pointer and display element values along with their addresses.

#include<stdio.h>
#include<stdlib.h>

#define N 5

int main() {
    // Define an integer array "tab" and initialize it with values
    int tab[5] = {1, 2, 6, 0, 7};

    // Initialize a pointer "p" to the start of the array
    int *p = tab;

    // Iterate through the array using the pointer
    for (int i = 0; i < N; i++) {
        // Display the value and address of the current element
        printf("%d\t%d\n", *p, p);

        // Move the pointer to the next element in the array
        p++;
    }

    return 0;
}
