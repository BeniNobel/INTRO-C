// Program to display the elements of an array.

#include<stdio.h>
#include<stdlib.h>

#define N 10

int main() {
    int tab[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;

    /* Display the elements of the array */
    for (i = 0; i < N; i++)
        printf("tab[%d] = %d\n", i, tab[i]);

    return 0;
}
