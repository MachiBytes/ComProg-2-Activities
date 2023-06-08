#include <stdio.h>

int main() {
    int a, b, c, sum;
    printf("Input the first number: ");
    scanf("%d", &a);
    printf("Input the second number: ");
    scanf("%d", &b);
    printf("Input the third number: ");
    scanf("%d", &c);

    sum = *&a + *&b + *&c;

    printf("The sum of the entered numbers is: %d", sum);

    return 0;
}