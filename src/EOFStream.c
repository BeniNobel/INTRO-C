// Program to read and print characters until EOF (End of File) is encountered.

#include <stdio.h>

int main() {
    char c;

    // Read characters until End of File (EOF) is encountered
    while ((c = getchar()) != EOF) {
        // Print the character
        putchar(c);
    }

    // Return 0 to indicate successful execution
    return 0;
}
