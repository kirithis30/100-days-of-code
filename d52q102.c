// Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int find_ceil_index(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ceil_index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] >= x) {
            ceil_index = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ceil_index;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = 7;
    int x = 8;
    int index;

    index = find_ceil_index(arr, n, x);

    printf("Array: {1, 2, 8, 10, 10, 12, 19}\n");
    printf("Target (x): %d\n", x);
    
    if (index != -1) {
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);
    } else {
        printf("Ceil of %d does not exist. Result: %d\n", x, -1);
    }

    return 0;
}