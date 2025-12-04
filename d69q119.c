// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int arr[] = {4, 1, 2, 1, 2};
    int n = 5;
    int repeated_element = 0;
    int i;

    for (i = 0; i < n; i++) {
        repeated_element ^= arr[i];
    }

    printf("Input Array: {4, 1, 2, 1, 2}\n");
    printf("The repeated element is: %d\n", repeated_element);

    return 0;
}