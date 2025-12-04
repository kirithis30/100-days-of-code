// Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item {
    int id;
    float price;
    char name[50];
};

int main() {
    struct Item *ptr;

    ptr = (struct Item *)malloc(sizeof(struct Item));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    ptr->id = 101;
    ptr->price = 49.99;
    strcpy(ptr->name, "Widget");

    printf("--- Dynamically Allocated Item Details ---\n");
    printf("Item Name: %s\n", ptr->name);
    printf("Item ID: %d\n", ptr->id);
    printf("Item Price: %.2f\n", ptr->price);
    printf("------------------------------------------\n");

    free(ptr);
    
    return 0;
}