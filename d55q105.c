// Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>
#include <math.h>

int find_majority_element(int nums[], int n) {
    int candidate = 0;
    int count = 0;
    int i;

    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > (int)floor((double)n / 2.0)) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7;
    int majority_element;

    majority_element = find_majority_element(nums, n);

    printf("Array: {2, 2, 1, 1, 1, 2, 2}\n");
    if (majority_element != -1) {
        printf("The majority element is: %d\n", majority_element);
    } else {
        printf("No majority element found. Result: %d\n", -1);
    }

    return 0;
}