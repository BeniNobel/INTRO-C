// Program to calculate the sum of two numbers using a function.

#include<stdio.h>
   
// Function to calculate the sum of two numbers
int somme(int a, int b) {
    int somme = a + b;
    return somme;
}

int main() {
    // Declare variables
    int a, b, s;

    // Prompt the user to enter the first number
    printf("Entrer le 1er nombre: ");
    scanf("%i", &a);

    // Prompt the user to enter the second number
    printf("Entrer le 2e nombre: ");
    scanf("%i", &b);

    // Calculate the sum using the somme function
    s = somme(a, b);

    // Display the result
    printf("La somme des 2 nombres est %d\n", s);

    // Return 0 to indicate successful execution
    return 0;
}
