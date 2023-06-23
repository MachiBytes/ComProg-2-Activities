// Exercise 3
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char ch;
    int occ;
} LO;

int main (int argc, char *argv[]) {
    LO chars[50];
    int ctr=0;
    char input[50];

    printf("Input: ");
    fgets(input, 50, stdin);
    strtok(input, "\n");

    for (int i=0; i<strlen(input); i++) {
        char ch = input[i];
        if (ch == ' ') {
            continue;
        }
        
        if (isalpha(ch) != 0) {
            ch = tolower(ch);
        }

        int exists = 0;

        for (int j=0; j<ctr; j++) {
            if (ch == chars[j].ch) {
                chars[j].occ++;
                exists = 1;
            }
        }

        if (!exists) {
            LO temp = {ch, 1};
            chars[ctr] = temp;
            ctr++;
        }
    }

    for (int i=0; i<ctr; i++) {
        printf("%c occured %d times\n", chars[i].ch, chars[i].occ);
    }

    return 0;
}