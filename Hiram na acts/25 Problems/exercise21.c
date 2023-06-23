#include <stdio.h>
#include <string.h>
#include <ctype.h>

void get_input(char *input);
void count_letters (char *input, int *vows, int *cons);
void print_results(int *vows, int *cons);

int main (int argc, char *argv[]) {
    char input[50];
    int vows=0, cons=0;

    get_input(input);
    count_letters(input, &vows, &cons);
    print_results(&vows, &cons);

    return 0;
}

void get_input(char *input) {
    printf("Input a string: ");
    fgets(input, 50, stdin);
    strtok(input, "\n");
}

void count_letters (char *input, int *vows, int *cons) {
    for (int i=0; i<strlen(input); i++) {
        char a = tolower(*(input+i));

        printf("%c: %d | %d\n", a, *vows, *cons);

        if (isalpha(a) == 0) {
            continue;
        }
        
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
            (*vows) ++;
        } else {(*cons) ++;}
    }
}

void print_results(int *vows, int *cons) {
    printf("Number of vowels: %d\n", *vows);
    printf("Number of constans: %d\n", *cons);
}