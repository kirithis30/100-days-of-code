// Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, temp;
    long long lcm;
    
    printf("--- LCM Calculator ---\n");
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
    int gcd;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    gcd = a;
    
    lcm = ((long long)num1 * num2) / gcd;
    
    printf("\nThe LCM of %d and %d is: %lld\n", num1, num2, lcm);

    return 0;
}