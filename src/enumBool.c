// Program to demonstrate the use of an enumeration to represent boolean values.

#include <stdio.h>

int main() {
    // Define an enumeration 'booleen' with values faux (false) and vrai (true).
    enum booleen { faux, vrai };

    // Declare a variable 'b' of type 'booleen' and assign the value 'vrai' (true).
    enum booleen b = vrai;

    // Print the integer representation of the boolean value.
    printf("b = %d\n", b);

    // Return 0 to indicate successful execution.
    return 0;
}
