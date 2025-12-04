// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int find_first(int nums[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int find_last(int nums[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int nums[] = {5, 7, 7, 8, 8, 8, 10, 10};
    int target = 8;
    int n = 8;
    int first_occurrence;
    int last_occurrence;

    first_occurrence = find_first(nums, n, target);
    last_occurrence = find_last(nums, n, target);

    if (first_occurrence != -1) {
        printf("Target: %d\n", target);
        printf("Array: [5, 7, 7, 8, 8, 8, 10, 10]\n");
        printf("First occurrence index: %d\n", first_occurrence);
        printf("Last occurrence index: %d\n", last_occurrence);
    } else {
        printf("%d, %d\n", -1, -1);
    }

    return 0;
}