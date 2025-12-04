// Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.


#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void bubble_sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = 6;
    int k = 3;
    
    if (k < 1 || k > n) {
        printf("Invalid k value.\n");
        return 0;
    }

    bubble_sort(arr, n);

    printf("Array: {7, 10, 4, 3, 20, 15}\n");
    printf("k: %d\n", k);
    printf("The %d-th smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}