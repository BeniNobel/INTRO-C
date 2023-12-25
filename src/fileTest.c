// Program to prompt the user for their age, write the age information to a file named "test.txt", and then close the file.

#include<stdio.h>
#include<stdlib.h>

int main() {
    // Declare a FILE pointer
    FILE *fichier = NULL;

    // Declare a variable to store the user's age
    int age = 0;

    // Open the file "test.txt" for writing
    fichier = fopen("test.txt", "w");

    // Check if the file is opened successfully
    if (fichier != NULL) {
        // Prompt the user for their age
        printf("Quel age avez-vous ?\n");
        scanf("%d", &age);

        // Write the age information to the file
        fprintf(fichier, "Toi qui utilise le programme, tu as %d ans\n", age);

        // Close the file
        fclose(fichier);
    } else {
        // Print an error message if the file cannot be opened
        printf("Impossible d'ouvrir le fichier test.txt\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
