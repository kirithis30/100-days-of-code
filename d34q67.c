// Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[11] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int key;
    int i;
    int position;

    printf("--- Array Insertion at Position ---\n");
    printf("Initial Array elements (Size %d): ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to insert: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid input for element. Please enter an integer.\n");
        return 1;
    }

    printf("Enter the position (0 to %d) where you want to insert the element: ", n);
    if (scanf("%d", &position) != 1) {
        printf("Invalid input for position. Please enter an integer.\n");
        return 1;
    }

    if (position < 0 || position > n) {
        printf("\nError: Invalid position. Position must be between 0 and %d.\n", n);
    } else if (n >= 11) {
        printf("\nError: Array is full. Cannot insert new element.\n");
    } else {
        for (i = n; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        
        arr[position] = key;
        n++;

        printf("\nElement %d inserted successfully at position %d.\n", key, position);
        printf("New Array elements (Size %d): ", n);
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}