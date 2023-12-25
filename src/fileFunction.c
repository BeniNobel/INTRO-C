// Program to prompts the user to enter two integers, calculates their difference using a separate function, and then displays the result.

#include<stdio.h>
#include<stdlib.h>

int main() {
    // Declare a FILE pointer
    FILE *fichier = NULL;

    // Open the file "test.txt" for both reading and writing
    fichier = fopen("test.txt", "r+");

    // Check if the file is opened successfully
    if (fichier != NULL) {
        // Perform read and write operations on the file (operations not specified in the code)

        // Close the file
        fclose(fichier);
    }

    // Return 0 to indicate successful execution
    return 0;
}
