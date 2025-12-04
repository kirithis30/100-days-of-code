// Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll_number;
    float marks;
} Student;

void write_records(const char *filename, Student students[], int count) {
    FILE *fp = fopen(filename, "w");
    int i;
    
    if (fp == NULL) {
        printf("Error: Could not open file %s for writing.\n", filename);
        return;
    }

    for (i = 0; i < count; i++) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll_number, students[i].marks);
    }

    fclose(fp);
    printf("Successfully wrote %d records to %s\n", count, filename);
}

void read_and_display_records(const char *filename) {
    FILE *fp = fopen(filename, "r");
    Student s;
    int count = 0;

    if (fp == NULL) {
        printf("Error: Could not open file %s for reading.\n", filename);
        return;
    }

    printf("\n--- Reading Records from %s ---\n", filename);
    while (fscanf(fp, "%s %d %f", s.name, &s.roll_number, &s.marks) == 3) {
        printf("Record %d:\n", ++count);
        printf("  Name: %s\n", s.name);
        printf("  Roll Number: %d\n", s.roll_number);
        printf("  Marks: %.2f\n", s.marks);
    }
    printf("------------------------------------\n");

    fclose(fp);
}

int main() {
    Student student_data[] = {
        {"Alice", 101, 85.50},
        {"Bob", 102, 78.00},
        {"Charlie", 103, 92.75}
    };
    int num_students = 3;
    const char *filename = "student_records.txt";

    write_records(filename, student_data, num_students);
    read_and_display_records(filename);

    return 0;
}