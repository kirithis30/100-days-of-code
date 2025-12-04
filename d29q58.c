// Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid input. Please enter a positive integer (max 100).\n");
        return 1;
    }

    int arr[100];
    int max_val, min_val;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input for element %d. Exiting.\n", i + 1);
            return 1;
        }
    }

    printf("\nElements in the array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (n > 0) {
        max_val = arr[0];
        min_val = arr[0];

        for (i = 1; i < n; i++) {
            if (arr[i] > max_val) {
                max_val = arr[i];
            }
            if (arr[i] < min_val) {
                min_val = arr[i];
            }
        }

        printf("Maximum element: %d\n", max_val);
        printf("Minimum element: %d\n", min_val);
    } else {
        printf("Array is empty, cannot find max/min.\n");
    }

    return 0;
}