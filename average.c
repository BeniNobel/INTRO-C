// Program to calculate the average of three numbers.

#include <stdio.h>

int main(int argc, char *argv[]) {
    // Declare variables for three numbers and the average
    float x, y, z, moyenne;

    // Input the first number
    printf("Enter the first number:\n");
    scanf("%f", &x);

    // Input the second number
    printf("Enter the second number:\n");
    while (getc(stdin) != '\n');  // Clear input buffer
    scanf("%f", &y);

    // Input the third number
    printf("Enter the third number:\n");
    while (getc(stdin) != '\n');  // Clear input buffer
    scanf("%f", &z);

    // Calculate the average of the three numbers
    moyenne = (x + y + z) / 3;

    // Display the calculated average
    printf("The average of these 3 numbers is %.2f\n", moyenne);

    // Return 0 to indicate successful execution
    return 0;
}
