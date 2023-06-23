#include <stdio.h>

int main (int argc, char *argv[]) {
    int size, i;

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

    int min=nums[0], max=nums[0];

    // Find the minimum and maximum
    for (i=1; i<size; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }

        if (nums[i] < min) {
            min = nums[i];
        }
    }

    // Print result
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}