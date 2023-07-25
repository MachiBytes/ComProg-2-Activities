#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char file[50];
    printf("Input the file name to be opened: ");
    scanf("%s", file);
    strtok(file, "\n");

    FILE *pF=NULL;
    pF = fopen(file, "r");

    if (pF == NULL) {
        printf("File not found!");
        return 1;
    }

    char buffer[255];
    printf("\n");
    printf("The content of the file %s is:\n", file);
    while (fgets(buffer, 255, pF) != NULL) {
        printf("%s", buffer);
    }

    fclose(pF);

    return 0;
}