// Reverse an array without taking extra space.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid input. Please enter a positive integer (max 100).\n");
        return 1;
    }

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input for element %d. Exiting.\n", i + 1);
            return 1;
        }
    }

    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int start = 0;
    int end = n - 1;
    int temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("\nReversed array (In-place):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}