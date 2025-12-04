// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, temp;
    
    printf("--- HCF (GCD) Calculator ---\n");
    printf("Enter the first positive integer: ");
    
    if (scanf("%d", &num1) != 1 || num1 <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Enter the second positive integer: ");
    
    if (scanf("%d", &num2) != 1 || num2 <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int a = num1;
    int b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    printf("\nThe GCD (HCF) of %d and %d is: %d\n", num1, num2, a);

    return 0;
}