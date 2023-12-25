// Program to display characters of a string using an array.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5

int main() {
    // Define and initialize a string "ThanksGiving" of length N
    char ThanksGiving[N] = "ThanksGiving";
    int i;

    // Display each character of the string
    for (i = 0; i < N; i++)
        printf("ThanksGiving[%d] = %c\n", i, ThanksGiving[i]);

    return 0;
}
