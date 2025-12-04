// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[11] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int key;
    int i;
    int position = -1;

    printf("--- Sorted Array Insertion ---\n");
    printf("Initial Sorted Array elements (Size %d): ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to insert: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            position = i;
            break;
        }
    }

    if (position == -1) {
        position = n;
    }

    if (n < 11) {
        for (i = n; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        
        arr[position] = key;
        n++;

        printf("\nElement %d inserted successfully.\n", key);
        printf("New Array elements (Size %d): ", n);
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("\nError: Array is full. Cannot insert new element.\n");
    }

    return 0;
}