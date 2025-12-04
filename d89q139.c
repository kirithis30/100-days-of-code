// Show that enums store integers by printing assigned values.

#include <stdio.h>

enum ApplianceStatus {
    OFF = 0,
    STANDBY = 1,
    RUNNING = 5,
    ERROR
};

int main() {
    enum ApplianceStatus status;

    printf("Enum members and their stored integer values:\n");
    
    status = OFF;
    printf("OFF: %d\n", status);

    status = STANDBY;
    printf("STANDBY: %d\n", status);

    status = RUNNING;
    printf("RUNNING: %d\n", status);

    status = ERROR;
    printf("ERROR: %d\n", status);

    return 0;
}