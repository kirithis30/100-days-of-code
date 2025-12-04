// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    double costPrice, sellingPrice;
    double amount, percentage;

    printf("--- Profit/Loss Percentage Calculator ---\n");
    printf("Enter Cost Price (CP): ");

    if (scanf("%lf", &costPrice) != 1 || costPrice <= 0) {
        printf("Invalid input. Cost Price must be a positive number.\n");
        return 1;
    }

    printf("Enter Selling Price (SP): ");
    if (scanf("%lf", &sellingPrice) != 1 || sellingPrice < 0) {
        printf("Invalid input. Selling Price must be a non-negative number.\n");
        return 1;
    }

    amount = sellingPrice - costPrice;

    if (amount > 0) {
        percentage = (amount / costPrice) * 100;
        printf("\nResult: Profit\n");
        printf("Profit Amount: $%.2lf\n", amount);
        printf("Profit Percentage: %.2lf%%\n", percentage);
    } else if (amount < 0) {
        amount = -amount;
        percentage = (amount / costPrice) * 100;
        printf("\nResult: Loss\n");
        printf("Loss Amount: $%.2lf\n", amount);
        printf("Loss Percentage: %.2lf%%\n", percentage);
    } else {
        printf("\nResult: No Profit, No Loss\n");
        printf("Amount: $0.00\n");
        printf("Percentage: 0.00%%\n");
    }

    return 0;
}