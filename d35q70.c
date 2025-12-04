// Rotate an array to the right by k positions.

#include <stdio.h>

void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k;
    int i;

    printf("--- Array Right Rotation ---\n");
    printf("Initial Array elements (Size %d): ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the number of positions (k) to rotate right: ");
    if (scanf("%d", &k) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    if (n == 0 || k <= 0) {
        printf("No rotation required.\n");
        return 0;
    }

    k = k % n;

    if (k == 0) {
        printf("Rotation by 0 positions. Array remains unchanged.\n");
        return 0;
    }

    reverse(arr, 0, n - k - 1);
    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n - 1);

    printf("\nArray rotated right by %d positions:\n", k);
    printf("Rotated Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}