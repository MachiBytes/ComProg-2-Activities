#include <stdio.h>

int printMultiplicationTable() {
    int num, i;

    printf("Give me a number: ");
    scanf("%d", &num);

    printf("Multiples of %d:\n", num);
    for (int i=1; i<=10; i++) {
        printf("%d * %2d: %d\n", num, i, num * i);
    }
}

int main() {
    printMultiplicationTable();
    return 0;
}