// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int number, swappedNumber;
    int firstDigit, lastDigit, digits;
    int middlePart, powerOfTen;
    
    printf("--- First and Last Digit Swapper ---\n");
    printf("Enter a positive integer: ");
    
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    if (number < 10) {
        printf("\nOriginal Number: %d\n", number);
        printf("Swapped Number: %d\n", number);
        return 0;
    }

    lastDigit = number % 10;
    
    digits = (int)log10(number) + 1;
    
    powerOfTen = (int)pow(10, digits - 1);
    
    firstDigit = number / powerOfTen;
    
    middlePart = number % powerOfTen;
    middlePart = middlePart / 10;
    
    swappedNumber = lastDigit * powerOfTen;
    swappedNumber += middlePart * 10;
    swappedNumber += firstDigit;
    
    printf("\nOriginal Number: %d\n", number);
    printf("Swapped Number: %d\n", swappedNumber);

    return 0;
}