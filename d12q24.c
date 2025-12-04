// Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

#include <stdio.h>

int main() {
    int units;
    double totalBill = 0.0;
    
    printf("--- Electricity Bill Calculator ---\n");
    printf("Enter the total units consumed: ");

    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input. Please enter a non-negative integer for units.\n");
        return 1;
    }
    
    printf("\nUnits Consumed: %d\n", units);

    int remainingUnits = units;

    if (remainingUnits > 300) {
        totalBill += (remainingUnits - 300) * 12.0;
        remainingUnits = 300;
    }
    
    if (remainingUnits > 200) {
        totalBill += (remainingUnits - 200) * 10.0;
        remainingUnits = 200;
    }
    
    if (remainingUnits > 100) {
        totalBill += (remainingUnits - 100) * 7.0;
        remainingUnits = 100;
    }
    
    if (remainingUnits > 0) {
        totalBill += remainingUnits * 5.0;
    }
    
    printf("Result: Bill Calculated\n");
    printf("Total Electricity Bill: ₹%.2lf\n", totalBill);

    return 0;
}