// A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *fp;
    int number;
    long long sum = 0;
    int count = 0;
    double average = 0.0;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    while (fscanf(fp, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        average = (double)sum / count;
        printf("File processed: numbers.txt\n");
        printf("Total Sum: %lld\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("File is empty or contains no integers.\n");
    }

    return 0;
}