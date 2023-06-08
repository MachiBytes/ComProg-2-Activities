#include <stdio.h>

int main() {
    int n_students, n_subjects;
    int i, j;

    printf("Enter the number of students: ");
    scanf("%d", &n_students);

    printf("Enter the number of subjects: ");
    scanf("%d", &n_subjects);

    int matrix[n_students][n_subjects];

    // Take input for matrix
    for (i=0; i<n_students; i++) {

        printf("\nStudent %d:\n", i+1);

        for (j=0; j<n_subjects; j++) {

            printf("Enter grade for subject %d: ", j+1);
            scanf("%d", &matrix[i][j]);

        }

    }

    // Print matrix
    printf("\nStudent grades:\n");
    for (i=0; i<n_students; i++) {

        printf("Student %d: ", i+1);

        for (j=0; j<n_subjects; j++) {

            printf("%d ", matrix[i][j]);

        }

        printf("\n");

    }

    float sum, average;

    printf("\nAverage grades:\n");
    for (i=0; i<n_students; i++) {

        sum = 0;
        average = 0;

        for (j=0; j<n_subjects; j++) {

            sum += matrix[i][j];

        }
        average = sum / n_subjects;
        printf("Student %d: %.2f\n", i+1, average);

    }

    return 0;
}