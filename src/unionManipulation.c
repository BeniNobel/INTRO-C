// Program to demonstrate the use of a union to manipulate coordinates as both individual values and a single long integer.

#include <stdio.h>

// Define a structure for coordinates
struct Coordinates {
    unsigned int x;
    unsigned int y;
};

// Define a union named Point with the structure and a single long integer
union Point {
    struct Coordinates coord;
    unsigned long mot;
};

int main() {
    // Declare instances of the union
    union Point p1, p2, p3;

    // Initialize the coordinates of p1 and p2
    p1.coord.x = 0 * 2;
    p1.coord.y = 0 * 1;
    p2.coord.x = 0 * 8;
    p2.coord.y = 0 * 8;

    // Perform a bitwise XOR operation on the long integer representations of p1 and p2, storing the result in p3
    p3.mot = p1.mot ^ p2.mot;

    // Print the individual coordinates of p3
    printf("p3.coord.x = %x\t p3.coord.y = %x\n", p3.coord.x, p3.coord.y);

    // Return 0 to indicate successful execution
    return 0;
}
