// write a program to input two number and display their sum, difference, product, and quotient

#include <stdio.h>

int main() {
    float num1, num2;

    
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    
    printf("\nSum = %.2f", num1 + num2);
    printf("\nDifference = %.2f", num1 - num2);
    printf("\nProduct = %.2f", num1 * num2);

    
    if (num2 != 0) {
        printf("\nQuotient = %.2f\n", num1 / num2);
    } else {
        printf("\nError: Division by zero is not allowed.\n");
    }

    return 0;
}       
        
    

