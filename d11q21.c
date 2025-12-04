// Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main() {
    int monthNumber;

    printf("--- Month Information Calculator ---\n");
    printf("Enter the month number (1 to 12): ");

    if (scanf("%d", &monthNumber) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("\n");

    switch (monthNumber) {
        case 1:
            printf("Month: January\n");
            printf("Days: 31\n");
            break;
        case 2:
            printf("Month: February\n");
            printf("Days: 28 or 29 (depends on leap year)\n");
            break;
        case 3:
            printf("Month: March\n");
            printf("Days: 31\n");
            break;
        case 4:
            printf("Month: April\n");
            printf("Days: 30\n");
            break;
        case 5:
            printf("Month: May\n");
            printf("Days: 31\n");
            break;
        case 6:
            printf("Month: June\n");
            printf("Days: 30\n");
            break;
        case 7:
            printf("Month: July\n");
            printf("Days: 31\n");
            break;
        case 8:
            printf("Month: August\n");
            printf("Days: 31\n");
            break;
        case 9:
            printf("Month: September\n");
            printf("Days: 30\n");
            break;
        case 10:
            printf("Month: October\n");
            printf("Days: 31\n");
            break;
        case 11:
            printf("Month: November\n");
            printf("Days: 30\n");
            break;
        case 12:
            printf("Month: December\n");
            printf("Days: 31\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}