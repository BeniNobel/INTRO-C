// Program to calculate the average of a set of real numbers.

#include <stdio.h>

int main() {
    int i, nombre;
    float somme, tas, moyenne;

    /* Get the number of real numbers to consider */
    printf("How many real numbers do you want to consider?\n");
    scanf("%d", &nombre);
    printf("You provided %d numbers\n", nombre);

    /* Calculate their sum */
    somme = 0;
    for (i = 1; i <= nombre; i = i + 1) {
        printf("Enter real number %d:\n", i);
        scanf("%f", &tas);
        somme = somme + tas;
    }

    /* Calculate their average */
    moyenne = somme / nombre;

    printf("The average of these %d numbers is: %f\n", nombre, moyenne);

    return 0;
}
