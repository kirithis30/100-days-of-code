// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum Status {
    SUCCESS = 0,
    FAILURE = 1,
    TIMEOUT = 2
};

void print_status_message(enum Status status_code) {
    switch (status_code) {
        case SUCCESS:
            printf("Operation successful.\n");
            break;
        case FAILURE:
            printf("Operation failed due to an error.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status code.\n");
            break;
    }
}

int main() {
    enum Status current_status = SUCCESS;

    printf("Status 1 (SUCCESS): ");
    print_status_message(current_status);

    current_status = FAILURE;
    printf("Status 2 (FAILURE): ");
    print_status_message(current_status);
    
    current_status = TIMEOUT;
    printf("Status 3 (TIMEOUT): ");
    print_status_message(current_status);

    return 0;
}