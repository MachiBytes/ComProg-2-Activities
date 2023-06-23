#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {
    int octal;
    printf("Input an octal number (using digit 0-7): ");
    scanf("%d", &octal);

    int res=0, base=0;
    while (octal > 0)
    {
        res += (octal % 10) * pow(8, base);
        octal /= 10;
        base ++;
    }
    
    printf("%d", res);

    return 0;
}