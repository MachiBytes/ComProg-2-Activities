#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[]) {
    char input[100];
    int alpha=0, num=0, spec=0, i=0;

    printf("Input the string: ");
    fgets(input, 100, stdin);
    strtok(input, "\n");

    for (i=0; i<strlen(input); i++) {
        if (isalpha(input[i])) {
            alpha++;
        } else if (isdigit(input[i])) {
            num++;
        } else {
            spec++;
        }
    }

    printf("Number of Alphabets in the string: %d\n", alpha);
    printf("Number of Digits in the string: %d\n", num);
    printf("Number of Special characters in the string: %d\n", spec);

    return 0;
}