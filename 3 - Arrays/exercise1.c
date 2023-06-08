// 2D array 4x4
// Calculate sum of all elements

#include <stdio.h>

int main() {
    int matrix[4][4];
    int sum=0;
    int i, j;

    for (i=0; i<4; i++) {
        printf("row %d:\n", i + 1);

        for (j=0; j<4; j++) {
            printf("> ");
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("\nTable:\n");
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            printf("%-2d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum: %d", sum);
}