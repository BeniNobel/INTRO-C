// Program to categorize age into different groups (child, minor, adult).

#include<stdio.h>

int main() {
    // Declare and initialize variable for age
    int age;
    
    // Prompt user to input age
    printf("Enter age: ");
    
    // Read age from user input
    scanf("%i", &age);

    // Display user's age
    printf("Your age is %i years and ", age);

    // Check age range and provide corresponding message
    if (age <= 5) {
        printf("you are a child");
    } else if (age < 18) {
        printf("you are a minor");
    } else if (age < 25) {
        printf("you are an adult");
    } else {
        printf("you are an adult");
    }

    // Return 0 to indicate successful execution
    return 0;
}
