// Merge two arrays.

#include <stdio.h>

int main() {
    int n1, n2, n3, i;

    printf("Enter the number of elements for Array 1 (max 50): ");
    if (scanf("%d", &n1) != 1 || n1 <= 0 || n1 > 50) {
        printf("Invalid input for Array 1 size.\n");
        return 1;
    }

    int arr1[50];
    printf("Enter %d elements for Array 1:\n", n1);
    for (i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr1[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }

    printf("\nEnter the number of elements for Array 2 (max 50): ");
    if (scanf("%d", &n2) != 1 || n2 <= 0 || n2 > 50) {
        printf("Invalid input for Array 2 size.\n");
        return 1;
    }
    
    int arr2[50];
    printf("Enter %d elements for Array 2:\n", n2);
    for (i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr2[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }

    n3 = n1 + n2;
    if (n3 > 100) {
        printf("Total size exceeds limit (100). Exiting.\n");
        return 1;
    }
    int arr3[100];
    
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    
    for (i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    printf("\nMerged Array (Array 1 followed by Array 2):\n");
    for (i = 0; i < n3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}