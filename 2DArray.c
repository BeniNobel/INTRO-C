// Program to display the elements of a 2D array.

#include<stdio.h>

#define M 3
#define N 4

int tab[M][N] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

int main() {
    int i, j;

    /* Display the elements of the 2D array */
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++)
            printf("tab[%d][%d] = %d\n", i, j, tab[i][j]);
    }

    return 0;
}
