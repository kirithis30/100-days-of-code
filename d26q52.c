// Write a program to print the following pattern:


#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};
    int numGroups = 5;
    int i, j;
    
    printf("--- Specific Vertical Star Pattern Printer ---\n");

    for (i = 0; i < numGroups; i++) {
        if (i > 0) {
            printf("\n");
        }
        
        for (j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
    }

    return 0;
}