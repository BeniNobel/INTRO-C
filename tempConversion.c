// Program to convert temperatures between Celsius and Kelvin, with user input validation and health status warning.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Declare variables
    float temp_C = 0, temp_K = 0;
    char scale;
    
    // Display program header
    printf("================================================================\n");
    printf(" CONVERTER FROM KELVIN TO CELSIUS DEGREES \n");
    printf("================================================================\n");

    // Prompt user to choose Celsius (C) or Kelvin (K)
    printf("\n Enter C for Celsius or K for Kelvin: ");

    // Validate user input for scale
    do {
        scanf(" %c", &scale);
        if (scale != 'C' && scale != 'K') {
            printf("You can only enter C or K\n");
            printf("\n Enter C for Celsius or K for Kelvin: ");
        }
    } while (scale != 'C' && scale != 'K');

    // Process user input for Celsius
    if (scale == 'C') {
        printf("\n Enter a number between 30 and 50: ");
        // Validate user input for temperature range
        do {
            scanf("%f", &temp_C);
            if (temp_C < 30 || temp_C > 50) {
                printf("You cannot convert a temperature outside the range of 30 to 50\n");
                printf("\n Enter a number between 30 and 50: ");
            } else {
                temp_K = temp_C + 273.15;
                printf("\n");
                printf("The temperature %.2f degrees Celsius is equivalent to: %.2f degrees Kelvin\n", temp_C, temp_K);
            }
        } while (temp_C < 30 || temp_C > 50);
    } else {  // Process user input for Kelvin
        printf("\n Enter a number between 303.15 and 323.15: ");
        // Validate user input for temperature range
        do {
            scanf("%f", &temp_C);
            if (temp_C < 303.15 || temp_C > 323.15) {
                printf("You cannot convert a temperature outside the range of 303.15 to 323.15\n");
                printf("\n Enter a number between 303.15 and 323.15: ");
            } else {
                temp_K = temp_C - 273.15;
                printf("\n");
                printf("The temperature %.2f degrees Kelvin is equivalent to: %.2f degrees Celsius\n", temp_C, temp_K);
                // Check health status and display warning if necessary
                if (temp_C >= 38 || temp_K >= 311.15) {
                    printf("It seems you are unwell!!");
                }
            }
        } while (temp_C < 303.15 || temp_C > 323.15);
    }

    // Return 0 to indicate successful execution
    return 0;
}
