// Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int emp_id;
    struct Date joining_date;
};

int main() {
    struct Employee emp1;

    strcpy(emp1.name, "John Doe");
    emp1.emp_id = 4567;
    emp1.joining_date.day = 15;
    emp1.joining_date.month = 11;
    emp1.joining_date.year = 2023;

    printf("--- Employee Details ---\n");
    printf("Name: %s\n", emp1.name);
    printf("Employee ID: %d\n", emp1.emp_id);
    printf("Joining Date: %02d/%02d/%d\n", emp1.joining_date.day, emp1.joining_date.month, emp1.joining_date.year);
    printf("------------------------\n");

    return 0;
}