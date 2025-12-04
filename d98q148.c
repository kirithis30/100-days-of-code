// Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Point {
    int x;
    int y;
    char label[10];
};

bool are_identical(struct Point p1, struct Point p2) {
    if (p1.x != p2.x) {
        return false;
    }
    if (p1.y != p2.y) {
        return false;
    }
    if (strcmp(p1.label, p2.label) != 0) {
        return false;
    }
    return true;
}

int main() {
    struct Point p_a = {10, 20, "Start"};
    struct Point p_b = {10, 20, "Start"};
    struct Point p_c = {5, 20, "End"};

    printf("Point A: {x:%d, y:%d, label:\"%s\"}\n", p_a.x, p_a.y, p_a.label);
    printf("Point B: {x:%d, y:%d, label:\"%s\"}\n", p_b.x, p_b.y, p_b.label);
    printf("Point C: {x:%d, y:%d, label:\"%s\"}\n", p_c.x, p_c.y, p_c.label);

    if (are_identical(p_a, p_b)) {
        printf("\nPoint A and Point B are identical.\n");
    } else {
        printf("\nPoint A and Point B are NOT identical.\n");
    }

    if (are_identical(p_a, p_c)) {
        printf("Point A and Point C are identical.\n");
    } else {
        printf("Point A and Point C are NOT identical.\n");
    }

    return 0;
}