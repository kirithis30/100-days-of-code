// Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, search_element;
    int found = 0;

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

    printf("\nEnter the element to search: ");
    if (scanf("%d", &search_element) != 1) {
        printf("Invalid input. Please enter an integer to search.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == search_element) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d found at index %d (position %d).\n", search_element, i, i + 1);
    } else {
        printf("Element %d not found in the array.\n", search_element);
    }

    return 0;
}