// Find the digit that occurs the most times in an integer number.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    long long num;
    long long originalNum;
    int digit;
    int freq[10] = {0};
    int maxFreq = 0;
    int maxDigit = 0;
    int i;

    printf("--- Highest Frequency Digit Finder ---\n");
    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &num) != 1 || num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    originalNum = num;

    if (originalNum == 0) {
        printf("\nNumber: 0\n");
        printf("The digit that occurs the most times is 0 (Frequency: 1).\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("\nNumber: %lld\n", originalNum);
    printf("The digit that occurs the most times is %d (Frequency: %d).\n", maxDigit, maxFreq);

    return 0;
}