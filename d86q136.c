// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    double num1 = 10.0;
    double num2 = 5.0;
    double result = 0.0;

    printf("Menu Choices:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result of ADD (%.1f + %.1f): %.1f\n", num1, num2, result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result of SUBTRACT (%.1f - %.1f): %.1f\n", num1, num2, result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result of MULTIPLY (%.1f * %.1f): %.1f\n", num1, num2, result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}