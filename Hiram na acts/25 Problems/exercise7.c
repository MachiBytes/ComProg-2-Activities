#include <stdio.h>

int main (int argc, char *argv[]) {
    int size, i, j;

    // Get size of array
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);

    int nums[size];

    // Get input for array
    printf("Input %d elements in the array:\n", size);
    for (i=0; i<size; i++) {
        printf("element - %d: ", i);
        scanf("%d", &nums[i]);
    }

    // Bubble sort
    for (i=0; i<size-1; i++) {
        for (j=0; j<size-i-1; j++) {
            if (nums[j] < nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    // Print result
    printf("The Second largest element in the array is: %d", nums[1]);

    return 0;
}