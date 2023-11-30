#include<stdio.h>
#include<stdlib.h>

/*
   This program opens the file "test.txt" for reading and writing,
   prints an error message if the file cannot be opened, and then
   reads and prints its content character by character.
*/

int main() {
    // Declare a FILE pointer
    FILE *fichier = NULL;

    // Open the file "test.txt" for both reading and writing
    fichier = fopen("test.txt", "r+");

    // Check if the file is opened successfully
    if (fichier != NULL) {
        // Read and print the content of the file character by character
        char C = fgetc(fichier);
        while (C != EOF) {
            printf("%c", C);
            C = fgetc(fichier);
        }

        // Close the file
        fclose(fichier);
    } else {
        // Print an error message if the file cannot be opened
        printf("Impossible d'ouvrir le fichier test.txt\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
