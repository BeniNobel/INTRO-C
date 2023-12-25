// Program to open and read/write to a file named "test.txt".

#include<stdio.h>

int main(int argc, char *argv[]) {
    // Declare a file pointer
    FILE *filePtr = NULL;

    // Open the file for reading and writing
    filePtr = fopen("test.txt", "r+");

    // Check if the file is successfully opened
    if (filePtr != NULL) {
        // Perform operations (read/write) on the file

        // Close the file when done
        fclose(filePtr);
    } else {
        // Display an error message if the file cannot be opened
        printf("Unable to open the file test.txt\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
