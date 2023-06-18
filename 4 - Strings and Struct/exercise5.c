#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char input[100], clean[100];
    int counter=0, i, j;
    printf("Input the string: ");
    fgets(input, 100, stdin);

    // Remove spaces
    for (i=0; i<strlen(input); i++) {
        if (input[i] != ' ') {
            clean[counter] = input[i];
            counter++;
        }
    }

    strtok(clean, "\n");
    printf("Clean: %s\n", clean);

    for (i=0; i<strlen(clean)-1; i++) {
        for (j=0; j<strlen(clean)-i-1; j++) {
            if (clean[j] > clean[j+1]) {
                char temp = clean[j];
                clean[j] = clean[j+1];
                clean[j+1] = temp;
            }
        }
    }

    printf("Result: %s\n", clean);

    return 0;
}