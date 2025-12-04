// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

void print_action(enum TrafficLight light) {
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Unknown state\n");
            break;
    }
}

int main() {
    enum TrafficLight current_light = YELLOW;

    printf("Current Light: YELLOW\n");
    printf("Action: ");
    print_action(current_light);

    current_light = RED;
    printf("Current Light: RED\n");
    printf("Action: ");
    print_action(current_light);
    
    current_light = GREEN;
    printf("Current Light: GREEN\n");
    printf("Action: ");
    print_action(current_light);

    return 0;
}