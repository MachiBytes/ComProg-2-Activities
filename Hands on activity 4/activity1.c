#include <stdio.h>

int main() {
    int n_movies, n_ratings;
    int i, j;

    printf("Enter the number of movies: ");
    scanf("%d", &n_movies);

    printf("Enter the number of ratings per movie: ");
    scanf("%d", &n_ratings);

    int matrix[n_movies][n_ratings];

    // Take input for matrix
    for (i=0; i<n_movies; i++) {

        printf("\nMovie %d:\n", i+1);

        for (j=0; j<n_ratings; j++) {

            printf("Enter rating %d: ", j+1);
            scanf("%d", &matrix[i][j]);

        }

    }

    // Print matrix
    printf("\nMovie ratings:\n");
    for (i=0; i<n_movies; i++) {

        printf("Movie %d: ", i+1);

        for (j=0; j<n_ratings; j++) {

            printf("%d ", matrix[i][j]);

        }

        printf("\n");

    }

    float sum, average;

    printf("\nAverage ratings:\n");
    for (i=0; i<n_movies; i++) {

        sum = 0;
        average = 0;

        for (j=0; j<n_ratings; j++) {

            sum += matrix[i][j];

        }
        average = sum / n_ratings;
        printf("Movie %d: %.2f\n", i+1, average);

    }

    return 0;
}