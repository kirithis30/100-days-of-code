// Delete an element from an array.

#include <stdio.h>

int main() {
    int arr[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int i;
    int position;

    printf("--- Array Element Deletion ---\n");
    printf("Initial Array elements (Size %d): ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the position (0 to %d) of the element to delete: ", n - 1);
    if (scanf("%d", &position) != 1) {
        printf("Invalid input for position. Please enter an integer.\n");
        return 1;
    }

    if (position < 0 || position >= n) {
        printf("\nError: Invalid position. Position must be between 0 and %d.\n", n - 1);
    } else {
        printf("\nElement %d at position %d will be deleted.\n", arr[position], position);
        
        for (i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        
        n--;

        printf("New Array elements (Size %d): ", n);
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}