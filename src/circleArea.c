// Program to calculate and display the surface area of a circle given its diameter.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Declare variables for diameter, pi, and surface area
    float diameter = 12.25;
    float pi = 3.142857;
    float surface;

    // Calculate the surface area of the circle using the formula: pi * (diameter/2)^2
    surface = pi * pow((diameter / 2), 2);

    // Print the calculated surface area with the given diameter
    printf("The surface area of the circle with diameter %.2f is %.2f", diameter, surface);

    // Return 0 to indicate successful execution
    return 0;
}
