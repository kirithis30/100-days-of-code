// Assign explicit values starting from 10 and print them.

#include <stdio.h>

enum Codes {
    CODE_A = 10,
    CODE_B,
    CODE_C = 25,
    CODE_D
};

int main() {
    printf("Enum Values:\n");
    printf("CODE_A: %d\n", CODE_A);
    printf("CODE_B: %d\n", CODE_B);
    printf("CODE_C: %d\n", CODE_C);
    printf("CODE_D: %d\n", CODE_D);

    return 0;
}