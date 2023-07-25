#include <stdio.h>

int main (int argc, char *argv[]) {
    FILE *pF = NULL;
    pF = fopen("exercise1.txt", "w");

    if (pF == NULL) {
        printf("File not found!");
        return 1;
    }

    char buffer[255];
    printf("Input a sentence for the file:\n");
    fgets(buffer, 255, stdin);

    fprintf(pF, buffer);
    printf("\n");
    printf("The file exercise1.txt created successfully...!!");

    fclose(pF);

    return 0;
}