// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;
    long long max_so_far = INT_MIN;
    long long current_max = 0;
    int i;

    for (i = 0; i < n; i++) {
        current_max = current_max + arr[i];
        
        if (current_max > max_so_far) {
            max_so_far = current_max;
        }

        if (current_max < 0) {
            current_max = 0;
        }
    }
    
    
    if (max_so_far == 0) {
        max_so_far = INT_MIN;
        for (i = 0; i < n; i++) {
            if (arr[i] > max_so_far) {
                max_so_far = arr[i];
            }
        }
    }

    printf("Array: {-2, 1, -3, 4, -1, 2, 1, -5, 4}\n");
    printf("Maximum Contiguous Subarray Sum: %lld\n", max_so_far);

    return 0;
}