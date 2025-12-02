// write a program to input time in second and convert it to hour:minutes:seconds format

#include <stdio.h>

int main() {
    
    int totalSeconds, hours, minutes, seconds;

    
    printf("Enter the time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;        
    minutes = (totalSeconds % 3600) / 60; 
    seconds = totalSeconds % 60;        


    printf("\nTime converted to HH:MM:SS format:\n");
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}