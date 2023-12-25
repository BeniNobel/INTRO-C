// Program to calculate the value-added tax (TVA) for a given product.

#include<stdio.h>

// Function to calculate TVA
float TVA(int a) {
    return 0.18 * a;
}

int main(int argc, char *argv[]) {
    int productPrice;
    float tax;

    // Prompt the user to enter the product price
    printf("Enter the product price: ");
    scanf("%d", &productPrice);

    // Calculate the TVA
    tax = TVA(productPrice);

    // Display the calculated TVA
    printf("The value-added tax (TVA) for this product is %.2f\n", tax);

    // Return 0 to indicate successful execution
    return 0;
}
