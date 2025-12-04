// Return a structure containing top student's details from a function.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student find_top_student(struct Student students[], int n) {
    int highest_index = 0;
    int i;

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[highest_index].marks) {
            highest_index = i;
        }
    }

    return students[highest_index];
}

int main() {
    struct Student class_students[] = {
        {"Alex", 101, 89.5},
        {"Brenda", 102, 92.0},
        {"Carl", 103, 76.8},
        {"Diana", 104, 95.5}
    };
    int num_students = 4;
    struct Student top_student;

    top_student = find_top_student(class_students, num_students);

    printf("--- Top Student Details ---\n");
    printf("Name: %s\n", top_student.name);
    printf("Roll Number: %d\n", top_student.roll_no);
    printf("Marks: %.1f\n", top_student.marks);
    printf("---------------------------\n");

    return 0;
}