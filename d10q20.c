// Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main() {
    int dayNumber;

    printf("--- Day of the Week Calculator ---\n");
    printf("Enter a number (1 for Monday, 7 for Sunday): ");

    if (scanf("%d", &dayNumber) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("\n");

    switch (dayNumber) {
        case 1:
            printf("The day is Monday.\n");
            break;
        case 2:
            printf("The day is Tuesday.\n");
            break;
        case 3:
            printf("The day is Wednesday.\n");
            break;
        case 4:
            printf("The day is Thursday.\n");
            break;
        case 5:
            printf("The day is Friday.\n");
            break;
        case 6:
            printf("The day is Saturday.\n");
            break;
        case 7:
            printf("The day is Sunday.\n");
            break;
        default:
            printf("Invalid number. Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}