// Program to get user input for age and write it to a file named "test.txt".

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = NULL;
    int age = 0;

    // Open the file in write mode
    file = fopen("test.txt", "w");

    // Check if the file is successfully opened
    if (file != NULL) {
        // Prompt the user to enter their age
        printf("Enter your age: ");
        scanf("%d", &age);

        // Write the age to the file
        fprintf(file, "To the user of the program, you are %d years old", age);

        // Close the file
        fclose(file);
    }

    // Return 0 to indicate successful execution
    return 0;
}
