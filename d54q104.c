//  Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.


#include <stdio.h>
#include <math.h>

int find_pivot_integer(int n) {
    long long total_sum = (long long)n * (n + 1) / 2;
    long long left_sum = 0;
    int x;

    for (x = 1; x <= n; x++) {
        long long right_sum = total_sum - left_sum - x;
        
        if (left_sum == right_sum) {
            return x;
        }

        left_sum += x;
    }

    return -1;
}

int main() {
    int n = 8;
    int pivot;

    pivot = find_pivot_integer(n);

    printf("Input n: %d\n", n);
    if (pivot != -1) {
        printf("Pivot integer x: %d\n", pivot);
    } else {
        printf("No pivot integer found. Result: %d\n", -1);
    }

    return 0;
}