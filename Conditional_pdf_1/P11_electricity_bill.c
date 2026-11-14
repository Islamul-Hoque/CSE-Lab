#include <stdio.h>

int main() {
    int id, unit;
    char name[50];
    float charge, amount, surcharge = 0, netAmount;

    // printf("Enter Customer ID: ");
    // scanf("%d", &id);

    // printf("Enter Customer Name: ");
    // scanf(" %c", name);

    // printf("Enter Unit Consumed: ");
    scanf("%d", &unit);

    if (unit <= 199) {
        charge = 1.20;
    } else if (unit < 400) {
        charge = 1.50;
    } else if (unit < 600) {
        charge = 1.80;
    } else {
        charge = 2.00;
    }

    amount = unit * charge;

    if (amount > 400) {
        surcharge = amount * 0.15;
    }

    netAmount = amount + surcharge;

    if (netAmount < 100) {
        netAmount = 100;
    }

    // printf("\nCustomer IDNO : %d\n", id);
    // printf("Customer Name : %s\n", name);
    printf("Unit Consumed : %d\n", unit);
    printf("Amount Charges @Rs. %.2f per unit : %.2f\n", charge, amount);
    printf("Surcharge Amount : %.2f\n", surcharge);
    printf("Net Amount Paid By the Customer : %.2f\n", netAmount);

    return 0;
}