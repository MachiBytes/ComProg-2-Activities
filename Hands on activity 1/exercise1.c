#include <stdio.h>

int printFibonacci() {
    int seq[10] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i=2; i<10; i++) {
        seq[i] = seq[i-1] + seq[i-2];
    }

    for (int i=0; i<10; i++) {
        printf("%2d: %2d\n", i+1, seq[i]);
    }
}

int main() {
    printFibonacci();

    return 0;
}