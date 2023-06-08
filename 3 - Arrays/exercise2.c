#include <stdio.h>

int main() {
    int matrix[5][5];
    int largest, largest_row=0, largest_col=0;
    int i, j;

    for (i=0; i<5; i++) {
        printf("row %d:\n", i + 1);

        for (j=0; j<5; j++) {
            printf("> ");
            scanf("%d", &matrix[i][j]);
        }
    }

    largest = matrix[0][0];

    for (i=0; i<5; i++) {

        for (j=0; j<5; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
                largest_row = i;
                largest_col = j;
            }
        }
    }

    printf("\nThe largest element is %d at row %d and column %d.", largest, largest_row, largest_col);

    return 0;
}