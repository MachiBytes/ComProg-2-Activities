#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char string[50];

    printf("Pointer: Print a string in reverse order:\n");
    printf("------------------------------------------------\n");
    
    printf("Input a string: ");
    fgets(string, 50, stdin);
    strtok(string, "\n");

    printf("Reverse of the string is: ");
    for (int i=strlen(string); i>0; i--) {
        printf("%c", string[i-1]);
    }

    return 0;
}