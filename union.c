// Program to demonstrate the use of a union to represent a day either as a letter or a number.

#include <stdio.h>

union day {
    char letter;
    int number;
};

int main() {
    union day yesterday, tomorrow;

    // Assigning a letter to 'yesterday'
    yesterday.letter = 'j';
    printf("Yesterday: %c\n", yesterday.letter);

    // Assigning a number to 'yesterday'
    yesterday.number = 4;

    // Calculating 'tomorrow' by adding 2 to 'yesterday' modulo 7
    tomorrow.number = (yesterday.number + 2) % 7;

    printf("Tomorrow: %d\n", tomorrow.number);

    return 0;
}
