// Program to determine the performance level based on a given numeric grade

#include<stdio.h>
#include<stdlib.h>

int main() {
    int grade;

    // Input the grade
    printf("Enter the grade: ");
    scanf("%i", &grade);

    // Output the grade and corresponding performance level using a switch statement
    printf("Your grade is %i, so you are ", grade);
    switch(grade) {
        case 90:
            printf("excellent");
            break;
        case 80:
            printf("distinction");
            break;
        case 70:
            printf("high pass");
            break;
        case 60:
            printf("pass");
            break;
        case 50:
            printf("satisfactory");
            break;
        default:
            printf("nothing");
            break;
    }

    // Return 0 to indicate successful execution
    return 0;
}
