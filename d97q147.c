// Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void write_to_binary(const char *filename, struct Employee employees[], int count) {
    FILE *fp = fopen(filename, "wb");
    
    if (fp == NULL) {
        printf("Error: Could not open file %s for writing.\n", filename);
        return;
    }

    fwrite(employees, sizeof(struct Employee), count, fp);

    fclose(fp);
    printf("Successfully wrote %d records in binary format to %s\n", count, filename);
}

void read_from_binary(const char *filename, int count) {
    FILE *fp = fopen(filename, "rb");
    struct Employee emp_read;
    int i = 0;

    if (fp == NULL) {
        printf("Error: Could not open file %s for reading.\n", filename);
        return;
    }

    printf("\n--- Reading Records from %s ---\n", filename);
    while (fread(&emp_read, sizeof(struct Employee), 1, fp) == 1 && i < count) {
        printf("Record %d:\n", ++i);
        printf("  ID: %d\n", emp_read.id);
        printf("  Name: %s\n", emp_read.name);
        printf("  Salary: %.2f\n", emp_read.salary);
    }
    printf("-----------------------------------\n");

    fclose(fp);
}

int main() {
    struct Employee employee_data[] = {
        {101, "Alice Smith", 55000.00},
        {102, "Bob Johnson", 62500.50},
        {103, "Charlie Brown", 48000.75}
    };
    int num_employees = 3;
    const char *filename = "employee_data.bin";

    write_to_binary(filename, employee_data, num_employees);
    read_from_binary(filename, num_employees);

    return 0;
}