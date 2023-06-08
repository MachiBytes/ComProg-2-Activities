#include <stdio.h>

int add(int *a, int *b) {
    return *a + *b;
}

int main() {
    int a, b, sum;
    printf("Input the first number: ");
    scanf("%d", &a);
    printf("Input the second number: ");
    scanf("%d", &b);

    sum = add(&a, &b);

    printf("The sum of %d and %d is: %d", a, b, sum);

    return 0;
}