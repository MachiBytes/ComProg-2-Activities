// Exercise 2
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[]) {
    char input[50];

    printf("Input: ");
    fgets(input, 50, stdin);

    int vows=0;

    for (int i=0; i<strlen(input); i++) {
        if (isalpha(input[i]) == 0) {
            continue;
        }

        char ch = tolower(input[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vows++;
        }
    }

    printf("Number of vowels: %d", vows);

    return 0;
}