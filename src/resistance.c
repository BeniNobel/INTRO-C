// Program to calculate the equivalent resistance of resistors based on user input for resistances and configuration (series or parallel).

#include <stdio.h>

int main() {
    float r1, r2, r3, r, s;

    // Input the resistances
    printf("Enter the resistances (r1, r2, r3): ");
    scanf("%f,%f,%f", &r1, &r2, &r3);

    // Input the configuration choice (1 for series, 2 for parallel)
    printf("\n1. In series or 2. In parallel\n");
    scanf("%f", &s);

    // Calculate and display the equivalent resistance
    if (s == 1) {
        r = r1 + r2 + r3;
        printf("The value of resistances in series is: %.2f", r);
    } else {
        r = (r1 * r2 * r3) / (r1 * r2 + r2 * r3 + r1 * r3);
        printf("The value of resistances in parallel is: %.2f", r);
    }

    // Return 0 to indicate successful execution
    return 0;
}
