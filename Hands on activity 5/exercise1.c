// Exercise 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[]) {
    char input[20];

    printf("Input: ");
    scanf("%s", &input);

    int palindrome = 1;
    for (int i=0; i<strlen(input); i++) {
        char let1 = tolower(input[i]);
        char let2 = tolower(input[strlen(input) - i - 1]);
        if (let1 != let2) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }

    return 0;
}