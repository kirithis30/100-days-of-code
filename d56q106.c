//  Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

//N.B:
//- Print the output for each element in a comma separated fashion.
//- Do not use Stack, use brute force approach (nested loop) to solve.

#include <stdio.h>

int main() {
    int arr[] = {4, 5, 2, 25};
    int n = 4;
    int next_greater[4];
    int i, j;

    for (i = 0; i < n; i++) {
        int next = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        next_greater[i] = next;
    }

    printf("Input Array: ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Next Greater Elements: ");
    for (i = 0; i < n; i++) {
        printf("%d", next_greater[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}