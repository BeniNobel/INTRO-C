// Program to calculate the total price of ordered items, including VAT, and process payment in dollars.

#include<stdio.h>
#include<stdlib.h>

int main() {
    // Declare variables for item details, prices, and payment
    int unit_price1, unit_price2, qty1, qty2, subtotal1 = 0, subtotal2 = 0, change = 0, payment;
    char food_name[10];
    char client_name[10];
    char item_name1[10];
    char item_name2[10];
    float total_price = 0.;
    float VAT = 0.18;

    // Welcome message
    printf(" ******************************************** \n\n");
    printf(" WELCOME TO OUR FOOD STORE\n\n");
    printf(" ******************************************** \n\n");

    // Input details for the first item
    printf(" Name of item 1 : ");
    scanf("%s", &item_name1);
    printf(" Unit Price 1 : ");
    scanf("%d", &unit_price1);
    printf(" Quantity of item 1 : ");
    scanf("%d", &qty1);

    // Input details for the second item
    printf("\n Name of item 2 : ");
    scanf("%s", item_name2);
    printf(" Unit Price 2 : ");
    scanf("%d", &unit_price2);
    printf(" Quantity of item 2 : ");
    scanf("%d", &qty2);
    printf("\n You ordered :\n %s =====> %d quantity\n %s ======> %d quantity\n", item_name1, qty1, item_name2, qty2);

    // Calculate prices excluding VAT for each item
    subtotal1 = qty1 * unit_price1;
    subtotal2 = qty2 * unit_price2;

    // Calculate the total price including VAT
    total_price = subtotal1 + subtotal2 + (subtotal1 + subtotal2) * VAT;

    // Display the total amount to be paid
    printf("\n HERE IS THE AMOUNT TO PAY : $%.2f", total_price);
    printf("\n");

    // Process payment
    printf("\n Enter the amount, please : ");
    do {
        scanf("%d", &payment);
        if (payment < total_price) {
            printf("\n Your payment is insufficient, dear customer!!!\n Please check the total amount to pay above \n");
            printf("\n Enter the sufficient amount, please : ");
        } else {
            // Display the change after payment
            change = payment - total_price;
            printf("\n Change = $%.2f\n", change);
            printf("\n ******************************************* \n\n");
            printf(" THANK YOU FOR YOUR VISIT!!!\n\n");
            printf(" ******************************************* \n\n");
        }
    } while (payment < total_price);

    return 0;
}
