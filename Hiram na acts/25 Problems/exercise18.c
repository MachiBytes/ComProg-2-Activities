#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int size;

    // Get size
    printf("Input total number of elements(1-100): ");
    scanf("%d", &size);

    // Initialize array using dynamic memory allocation
    int *nums = malloc(sizeof(int) * size);

    // Get elements of array
    for (int i=0; i<size; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", (nums + i));
    }

    // Bubble sort
    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size - i - 1; j++) {
            if (*(nums + j) < *(nums + (j+1))) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    // Print result
    printf("The Largest element is: %d", nums[0]);

    return 0;
}