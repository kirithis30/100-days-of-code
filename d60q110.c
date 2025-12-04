// Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.


#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = 8;
    int k = 3;
    int i, j;
    
    printf("Input Array: {1, 3, -1, -3, 5, 3, 6, 7}, k = %d\n", k);
    printf("Maximum elements in each window: ");

    if (n < k) {
        printf("N/A\n");
        return 0;
    }

    for (i = 0; i <= n - k; i++) {
        int max_val = INT_MIN;
        for (j = 0; j < k; j++) {
            if (arr[i + j] > max_val) {
                max_val = arr[i + j];
            }
        }
        printf("%d", max_val);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}