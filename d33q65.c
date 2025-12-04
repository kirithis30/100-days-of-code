// Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int key, low, high, mid, found = 0;
    int i;

    printf("--- Binary Search ---\n");
    printf("Sorted Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to search: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            printf("\nElement %d found at index %d.\n", key, mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("\nElement %d is not present in the array.\n", key);
    }

    return 0;
}