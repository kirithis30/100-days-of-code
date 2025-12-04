// Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

#include <stdio.h>

int main() {
    int daysLate;
    double totalFine = 0.0;
    
    printf("--- Library Fine Calculator ---\n");
    printf("Enter the number of days the book is late: ");

    if (scanf("%d", &daysLate) != 1 || daysLate < 0) {
        printf("Invalid input. Please enter a non-negative integer for days late.\n");
        return 1;
    }
    
    printf("\nDays Late: %d\n", daysLate);

    if (daysLate > 30) {
        printf("Result: Membership Cancelled.\n");
    } else {
        if (daysLate > 10) {
            totalFine += (daysLate - 10) * 6.0;
            daysLate = 10;
        }
        
        if (daysLate > 5) {
            totalFine += (daysLate - 5) * 4.0;
            daysLate = 5;
        }
        
        if (daysLate > 0) {
            totalFine += daysLate * 2.0;
        }
        
        printf("Result: Fine Calculated\n");
        printf("Total Fine: ₹%.2lf\n", totalFine);
    }

    return 0;
}