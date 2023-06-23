#include <stdio.h>
#include <math.h>

void to_binary(int num);

int main (int argc, char *argv[]) {
    int num;
    printf("Input any decimal number: ");
    scanf("%d", &num);

    to_binary(num);
    
    return 0;
}

void to_binary(int num) {
    int size = ceil(log(num) / log(2));
    int res[size];
    int quotient, remainder, i;

    for (i=0; i<size; i++) {
        quotient = num / 2;
        remainder = num % 2;
        res[i] = remainder;
        num = quotient;
    }

    for (i=size-1; i>=0; i--) {
        printf("%d", res[i]);
    }
}