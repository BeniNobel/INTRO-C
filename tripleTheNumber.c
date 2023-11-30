// Program to triple a number.

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

// Function to triple a number
int triple(int nombre) {
    return 3 * nombre;
}

int main(int argc, char *argv[]) {
    // Declare variables
    int nombreEntre = 0, nombreTriple = 0;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &nombreEntre);

    // Calculate the triple using the triple function
    nombreTriple = triple(nombreEntre);

    // Display the result
    printf("The triple of %d is %d\n", nombreEntre, nombreTriple);

    // Return 0 to indicate successful execution
    return 0;
}
