// Read and print elements of a one-dimensional array.

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

    printf("\nElements in the array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}