// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

void display_role_message(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Access granted: Full system control.\n");
            break;
        case USER:
            printf("Access granted: Standard read/write permissions.\n");
            break;
        case GUEST:
            printf("Access granted: Read-only access.\n");
            break;
        default:
            printf("Unknown role.\n");
            break;
    }
}

int main() {
    enum UserRole current_user_role = ADMIN;

    printf("Role: ADMIN\nMessage: ");
    display_role_message(current_user_role);

    current_user_role = USER;
    printf("Role: USER\nMessage: ");
    display_role_message(current_user_role);

    current_user_role = GUEST;
    printf("Role: GUEST\nMessage: ");
    display_role_message(current_user_role);

    return 0;
}