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

    int product = matrix[0][0] * matrix[1][1] * matrix[2][2] * matrix[3][3];

    printf("\nProduct: %d", product);

    return 0;
}