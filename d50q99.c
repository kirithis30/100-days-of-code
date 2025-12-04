// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date_str[] = "25/04/2025";
    char day[3];
    char month[3];
    char year[5];
    char month_abbr[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int month_index;

    strncpy(day, date_str, 2);
    day[2] = '\0';
    
    strncpy(month, date_str + 3, 2);
    month[2] = '\0';
    
    strncpy(year, date_str + 6, 4);
    year[4] = '\0';

    if (sscanf(month, "%d", &month_index) == 1 && month_index >= 1 && month_index <= 12) {
        printf("%s-%s-%s\n", day, month_abbr[month_index - 1], year);
    } else {
        printf("Invalid date format or month value.\n");
    }

    return 0;
}