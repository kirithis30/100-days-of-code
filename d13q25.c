// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("--- Basic Calculator (C) ---\n");
    printf("Enter operator (+, -, *, /): ");
    
    // Read the operator
    if (scanf(" %c", &operator) != 1) {
        printf("Invalid input. Please enter a single operator.\n");
        return 1;
    }

    // Read the two operands
    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            // Modulus operator (%) only works with integers in C.
            // We cast the doubles to integers for the operation.
            printf("\nResult: %d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            break;
        default:
            printf("\nError: Invalid operator entered.\n");
            break;
    }

    return 0;
}