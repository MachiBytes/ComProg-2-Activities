#include <stdio.h>

int calculateFactorial() {
    int num, fac;

    printf("Give me a number: ");
    scanf("%d", &num);

    fac = num;
    for (int i=1; i<num; i++) {
        fac *= i;
    }
    printf("The factorial of %d is %d", num, fac);
}

int main() {
    calculateFactorial();

    return 0;
}