#include <stdio.h>
#include <string.h>
#include <conio.h>

int main (int argc, char *argv[]) {
    char file[50], new_line[255];
    int line;

    printf("Input the file name to be opened: ");
    fgets(file, 50, stdin);
    strtok(file, "\n");

    printf("Input the content of the new line: ");
    fgets(new_line, 255, stdin);

    printf("Input the line number you want to replace: ");
    scanf("%d", &line);

    FILE *pF = fopen(file, "r");
    FILE *tPF = fopen("temp.txt", "w");

    if (pF == NULL || tPF == NULL) {
        printf("File not found!");
        return 1;
    }

    char buffer[255];
    int line_ctr=0;

    // Write content of original file to a temporary file
    while (fgets(buffer, 255, pF) != NULL) {
        line_ctr++;
        if (line_ctr == line) {
            fputs(new_line, tPF);
            continue;
        }
        fputs(buffer, tPF);
    }

    fclose(pF);
    fclose(tPF);

    // Delete original and rename new file
    remove(file);
    rename("temp.txt", file);

    printf("\n");
    printf("Successfully replaced '%d' line with '%s'", line, new_line);

    return 0;
}