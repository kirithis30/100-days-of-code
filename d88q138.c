// Print all enum names and integer values using a loop.

#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    PURPLE
};

int main() {
    enum Color current_color;
    char *color_names[] = {"RED", "GREEN", "BLUE", "YELLOW", "PURPLE"};
    int num_colors = sizeof(color_names) / sizeof(color_names[0]);
    
    printf("Enum Names and Values:\n");
    
    for (current_color = RED; current_color <= PURPLE; current_color++) {
        printf("%s: %d\n", color_names[current_color], current_color);
    }

    return 0;
}