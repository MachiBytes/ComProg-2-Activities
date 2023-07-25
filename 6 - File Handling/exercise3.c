#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char file[50];
    printf("Input the file name to be opened: ");
    scanf("%s", file);
    strtok(file, "\n");

    FILE *pF = fopen(file, "r");

    if (pF == NULL) {
        printf("File not found!");
        return 1;
    }

    char buffer[255];
    printf("\n");
    printf("The content of the file %s is:\n\n", file);
    while (fgets(buffer, 255, pF) != NULL) {
        printf("%s", buffer);
    }

    fclose(pF);

    pF = fopen(file, "r");

    int words=0, chars=0, c;
    bool whitespace = true;

    while (true) {
        c = fgetc(pF);

        if (feof(pF)) break;

        chars++;
        if (whitespace && !isspace(c)) {
            words++;
            whitespace = false;
        } else if (!whitespace && isspace(c)) {
            whitespace = true;
        }
    }

    fclose(pF);

    printf("\n\n");
    printf("The number of words in the file %s are: %d\n", file, words);
    printf("The number of characters in the file %s are: %d\n", file, chars);

    return 0;
}