#include <stdio.h>
#include <string.h>
#include <conio.h>

int main (int argc, char *argv[]) {
    char file[50], buffer[255];
    int lines;

    printf("Input the file name to be opened: ");
    fgets(file, 50, stdin);
    strtok(file, "\n");

    printf("Input the number of lines to be written: ");
    scanf("%d", &lines);
    getchar();

    FILE * fPtr = fopen(file, "a");

    printf("\n");
    printf("The lines are:\n");
    for (int i=0; i<lines; i++) {
        printf("> ");
        fgets(buffer, 255, stdin);

        fputs(buffer, fPtr);
    }

    fclose(fPtr);

    fPtr = fopen(file, "r");

    printf("\n");
    printf("The content of the file %s is:\n", file);
    while (fgets(buffer, 255, fPtr) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(fPtr);

    return 0;
}