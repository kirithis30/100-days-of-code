// Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

void print_gender_string(enum Gender g) {
    switch (g) {
        case MALE:
            printf("Male");
            break;
        case FEMALE:
            printf("Female");
            break;
        case OTHER:
            printf("Other");
            break;
        default:
            printf("Unknown");
            break;
    }
}

int main() {
    struct Person p1;
    
    strcpy(p1.name, "Chris");
    p1.gender = MALE;

    printf("Person: %s\n", p1.name);
    printf("Gender: ");
    print_gender_string(p1.gender);
    printf("\n");

    return 0;
}