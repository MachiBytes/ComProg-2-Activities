#include <stdio.h>

int main (int argc, char *argv[]) {
    int num;
    printf("Enter a number to convert: ");
    scanf("%d", &num);

    int res=0, base=1;
    while (num != 0) {
        res += (num % 8) * base;
        num /= 8;
        base *= 10;
    }

    printf("%d", res);
    
    return 0;
}