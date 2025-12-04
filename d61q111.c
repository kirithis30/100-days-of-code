// Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.


#include <stdio.h>

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = 8;
    int k = 3;
    int i, j;
    
    printf("Input Array: {12, -1, -7, 8, -15, 30, 16, 28}, k = %d\n", k);
    printf("First negative in each window: ");

    if (n < k) {
        printf("N/A\n");
        return 0;
    }

    for (i = 0; i <= n - k; i++) {
        int first_negative = 0;
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_negative = arr[j];
                break;
            }
        }
        printf("%d", first_negative);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}