// Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Product {
    int id;
    float price;
    char name[50];
};

int main() {
    struct Product item = {101, 25.50, "Old Widget"};
    struct Product *ptr;

    ptr = &item;

    printf("--- Original Data ---\n");
    printf("Name: %s\n", item.name);
    printf("Price: %.2f\n", item.price);

    ptr->price = 30.99;
    strcpy(ptr->name, "New Widget Deluxe");

    printf("\n--- Modified Data (Using -> operator) ---\n");
    printf("Name: %s\n", item.name);
    printf("Price: %.2f\n", item.price);

    return 0;
}