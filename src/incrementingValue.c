// Program to compare and display the greater of two numbers after incrementing one of them.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    // Declare variables for the first number (a) and a copy of it (b)
    int a, b;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%i", &a);

    // Assign the value of a to b
    b = a;

    // Display the values of the first and second numbers
    printf("The first number is %i\n", a);
    printf("The second number is %i\n", b);

    // Increment the value of b
    b = ++b;

    // Display the result after incrementing b and the unchanged value of a
    printf("After incrementing, the result of b is %i\n", b);
    printf("After incrementing, the result of a is %i\n", a);

    // Compare the values of a and b and display the greater one
    if (a < b)
        printf("The greater number is b, which is equal to %i\n", b);
    else
        printf("The greater number is a, which is equal to %i\n", a);

    return 0;
}
