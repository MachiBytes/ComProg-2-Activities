#include <stdio.h>

int main() {
    int matrix[4][4];
    int i, j;

    for (i=0; i<4; i++) {
        printf("row %d:\n", i + 1);

        for (j=0; j<4; j++) {
            printf("> ");
            scanf("%d", &matrix[i][j]);
        }
    }

    int temp=0;

    for (i=0; i<4; i++) {
        temp = matrix[0][i];
        matrix[0][i] = matrix[3][i];
        matrix[3][i] = temp;
    }

    printf("\nTable:\n");
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            printf("%-2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}