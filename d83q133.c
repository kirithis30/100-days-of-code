// Create an enum for months and print how many days each month has.

#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("Month: Days\n");
    printf("JANUARY: %d\n", days_in_month[JANUARY]);
    printf("FEBRUARY: %d\n", days_in_month[FEBRUARY]);
    printf("MARCH: %d\n", days_in_month[MARCH]);
    printf("APRIL: %d\n", days_in_month[APRIL]);
    printf("MAY: %d\n", days_in_month[MAY]);
    printf("JUNE: %d\n", days_in_month[JUNE]);
    printf("JULY: %d\n", days_in_month[JULY]);
    printf("AUGUST: %d\n", days_in_month[AUGUST]);
    printf("SEPTEMBER: %d\n", days_in_month[SEPTEMBER]);
    printf("OCTOBER: %d\n", days_in_month[OCTOBER]);
    printf("NOVEMBER: %d\n", days_in_month[NOVEMBER]);
    printf("DECEMBER: %d\n", days_in_month[DECEMBER]);

    return 0;
}