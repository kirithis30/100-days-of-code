// Find the second largest element in an array.

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {25, 10, 80, 50, 40, 80, 70};
    int n = 7;
    int i;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    printf("--- Second Largest Element Finder ---\n");
    printf("Array elements (Size %d): ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (n < 2) {
        printf("Error: Array must have at least two elements.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("All elements are the same. No distinct second largest element found.\n");
    } else {
        printf("\nThe largest element is: %d\n", largest);
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}