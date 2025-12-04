// Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7};
    int m = 4;
    int arr2[] = {2, 4, 6, 8, 10};
    int n = 5;
    int merged_size = m + n;
    int merged_arr[9];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged_arr[k++] = arr1[i++];
        } else {
            merged_arr[k++] = arr2[j++];
        }
    }

    while (i < m) {
        merged_arr[k++] = arr1[i++];
    }

    while (j < n) {
        merged_arr[k++] = arr2[j++];
    }

    printf("Array 1: {1, 3, 5, 7}\n");
    printf("Array 2: {2, 4, 6, 8, 10}\n");
    printf("Merged Sorted Array: {");
    for (k = 0; k < merged_size; k++) {
        printf("%d", merged_arr[k]);
        if (k < merged_size - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}