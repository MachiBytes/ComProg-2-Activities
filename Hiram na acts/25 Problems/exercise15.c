#include <stdio.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
    char bin[20];
    printf("Input a binary number: ");
    scanf("%s", bin);

    int num=0;
    for (int i=0; i<strlen(bin); i++) {
        if (bin[i] == '1') {
            num += 1 * pow(2, strlen(bin)-i-1);
        }
    }

    printf("The Binary number: %s\n", bin);
    printf("The equivalent Decimal number: %d", num);
    return 0;
}