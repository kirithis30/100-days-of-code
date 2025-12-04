// Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

int find_pivot_index(int arr[], int n) {
    long long total_sum = 0;
    long long left_sum = 0;
    int i;

    for (i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    for (i = 0; i < n; i++) {
        long long right_sum = total_sum - left_sum - arr[i];

        if (left_sum == right_sum) {
            return i;
        }

        left_sum += arr[i];
    }

    return -1;
}

int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = 6;
    int pivot_index;

    pivot_index = find_pivot_index(arr, n);

    printf("Array: {1, 7, 3, 6, 5, 6}\n");
    if (pivot_index != -1) {
        printf("The leftmost pivot index is: %d\n", pivot_index);
        printf("Left sum (Index %d): %d\n", pivot_index, 1 + 7 + 3);
        printf("Right sum (Index %d): %d\n", pivot_index, 5 + 6);
    } else {
        printf("No pivot index found. Result: %d\n", -1);
    }

    return 0;
}