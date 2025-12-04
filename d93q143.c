// Find and print the student with the highest marks.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[] = {
        {"Alice", 101, 85.0},
        {"Bob", 102, 78.5},
        {"Charlie", 103, 92.2},
        {"David", 104, 65.7},
        {"Eve", 105, 95.5}
    };
    int num_students = 5;
    int highest_index = 0;
    int i;

    for (i = 1; i < num_students; i++) {
        if (students[i].marks > students[highest_index].marks) {
            highest_index = i;
        }
    }

    printf("--- Student Records ---\n");
    for (i = 0; i < num_students; i++) {
        printf("Name: %s, Marks: %.1f\n", students[i].name, students[i].marks);
    }
    printf("-------------------------\n");

    printf("Student with the Highest Marks:\n");
    printf("Name: %s\n", students[highest_index].name);
    printf("Roll Number: %d\n", students[highest_index].roll_no);
    printf("Marks: %.1f\n", students[highest_index].marks);

    return 0;
}