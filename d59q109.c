// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = 9;
    int k = 4;
    int current_sum = 0;
    int max_sum = INT_MIN;
    int i;

    if (n < k) {
        printf("Invalid input: Array size is smaller than k.\n");
        return 0;
    }

    for (i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    max_sum = current_sum;

    for (i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("Array: {1, 4, 2, 10, 23, 3, 1, 0, 20}\n");
    printf("Subarray size (k): %d\n", k);
    printf("Maximum subarray sum: %d\n", max_sum);

    return 0;
}