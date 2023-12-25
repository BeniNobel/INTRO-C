// Program to calculate the norm of a complex number.

#include <stdio.h>
#include <math.h>

// Define a structure for complex numbers
struct complexe {
    double reelle;       // Real part
    double imaginaire;   // Imaginary part
};

int main() {
    // Declare a complex number and initialize it
    struct complexe z = {5, 7};

    // Calculate the norm of the complex number
    double norme = sqrt(z.reelle * z.reelle + z.imaginaire * z.imaginaire);

    // Display the norm of the complex number
    printf("Norm of (%.3f + i%.3f) = %.3f\n", z.reelle, z.imaginaire, norme);

    // Return 0 to indicate successful execution
    return 0;
}
