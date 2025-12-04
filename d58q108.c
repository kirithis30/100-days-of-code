// Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = 4;
    int *answer;
    int i;
    int prefix_product = 1;
    int suffix_product = 1;
    
    answer = (int*)malloc(n * sizeof(int));
    if (answer == NULL) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        answer[i] = 1;
    }

    for (i = 0; i < n; i++) {
        answer[i] *= prefix_product;
        prefix_product *= nums[i];
    }

    for (i = n - 1; i >= 0; i--) {
        answer[i] *= suffix_product;
        suffix_product *= nums[i];
    }

    printf("Input Array: {1, 2, 3, 4}\n");
    printf("Output Array: {");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    free(answer);
    return 0;
}