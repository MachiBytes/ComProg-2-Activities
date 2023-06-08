#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int sum;

    for (i=0; i<3; i++) {
        printf("row %d:\n", i + 1);

        for (j=0; j<3; j++) {
            printf("> ");
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");

    // Sum of each row
    for (i=0; i<3; i++) {
        sum=0;
        for (j=0; j<3; j++) {
            sum += matrix[i][j];
        }
        printf("row %d: %d\n", i+1, sum);
    }

    // Sum of each col
    for (i=0; i<3; i++) {
        sum=0;
        for (j=0; j<3; j++) {
            sum += matrix[j][i];
        }
        printf("row %d: %d\n", j+1, sum);
    }

    return 0;
}