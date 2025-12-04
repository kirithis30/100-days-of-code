// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int number, originalNumber, remainder;
    long long product = 1; 
    
    printf("--- Product of Odd Digits Calculator ---\n");
    printf("Enter a positive integer: ");
    
    if (scanf("%d", &number) != 1 || number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    originalNumber = number;

    while (number != 0) {
        remainder = number % 10;
        
        if (remainder % 2 != 0) {
            product *= remainder; 
        }
        
        number /= 10;
    }
    
    printf("\nOriginal Number: %d\n", originalNumber);
    printf("Product of Odd Digits: %lld\n", product);

    return 0;
}