#include <stdio.h>

int main (int argc, char *argv[]) {
    int size, i, j;

    // Get size of array
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);

    int nums[size], digits[size], occur[size];

    // Get input for array
    printf("Input %d elements in the array:\n", size);
    for (i=0; i<size; i++) {
        printf("element - %d: ", i);
        scanf("%d", &nums[i]);
    }

    // Count occurences
    int exists, ctr=0;
    for (i=0; i<size; i++) {

        exists=0;

        // Find if digit is already recorded
        for (j=0; j<ctr; j++) {
            if (nums[i] == digits[j]) {
                occur[j]++;
                exists=1;
            }
        }

        // If digit isn't recorded yet
        // Also if there are no digits recorded yet
        if (!exists) {
            digits[ctr] = nums[i];
            occur[ctr]=1;
            ctr++;
        }

    }

    // Print result
    printf("The frequency of all elements of an array:\n");
    for (i=0; i<size; i++) {
        printf("%d occurs %d times\n", digits[i], occur[i]);
    }

    return 0;
}