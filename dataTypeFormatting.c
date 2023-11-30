// Program to demonstrate the formatting options in printf for different data types.

#include<stdio.h>
#include<stdlib.h>

int main() {
    // Declare variables of different data types
    int i = 23674;
    int j = -23674;
    long int k = (1l << 32);
    double x = 1e-8 + 1000;
    char c = 'A';
    char *chaine = "character string";

    // Print formatted output for integer variable i
    printf("Printing i:\n");
    printf("%d \t %u \t %o \t %x", i, i, i, i);

    // Print formatted output for integer variable j
    printf("\nPrinting j:\n");
    printf("%d \t %u \t %o \t %x", j, j, j, j);

    // Print formatted output for long integer variable k
    printf("\nPrinting k:\n");
    printf("%ld \t %lu \t %lo \t %lx", k, k, k, k);

    // Print formatted output for double variable x
    printf("\nPrinting x:\n");
    printf("%f \t %e \t %g", x, x, x);
    printf("\n%.2f \t %.2e", x, x);
    printf("\n%.20f \t %.20e", x, x);

    // Print formatted output for character variable c
    printf("\nPrinting c:\n");
    printf("%c \t %d", c, c);

    // Print formatted output for character string variable chaine
    printf("\nPrinting chaine:\n");
    printf("%s \t %.10s", chaine, chaine);

    // Return 0 to indicate successful execution
    return 0;
}
