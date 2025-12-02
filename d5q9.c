// write a program to calculate simple and compund interest for given principal ,rate ,and time 

#include <stdio.h>
#include <math.h> 

int main() {
    
    float principal, rate, time, simple_interest, compound_interest;

    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);


    simple_interest = (principal * rate * time) / 100.0;

    
    compound_interest = principal * (pow(1 + rate / 100.0, time));
    compound_interest = compound_interest - principal;


    printf("\n--- Interest Calculation ---\n");
    printf("Principal Amount: %.2f\n", principal);
    printf("Rate of Interest: %.2f%%\n", rate);
    printf("Time Period: %.2f years\n", time);
    printf("------------------------------\n");
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    printf("------------------------------\n");

    return 0;
}
