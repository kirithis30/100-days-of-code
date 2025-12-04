// Store details of 5 students in an array of structures and print all.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;
    int num_students = 5;

    printf("Enter details for 5 students:\n");

    for (i = 0; i < num_students; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("  Enter name: ");
        scanf("%49s", students[i].name);

        printf("  Enter roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("  Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n\n--- Stored Student Data ---\n");
    for (i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s\n", students[i].name);
        printf("  Roll Number: %d\n", students[i].roll_no);
        printf("  Marks: %.2f\n", students[i].marks);
    }
    printf("---------------------------\n");

    return 0;
}