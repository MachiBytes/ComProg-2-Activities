#include <stdio.h>

int count_dups(int nums[], int size);

int main (int argc, char *argv[]) {
    int size, i;

    // Get array size
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);

    // Get array elements
    int nums[size];
    printf("Input %d elements in the array:\n", size);

    for (i=0; i<size; i++) {
        printf("element - %d: ", i);
        scanf("%d", &nums[i]);
    }

    // Count duplicates
    int dups = count_dups(nums, size);

    // Print result
    printf("Total number of duplicate elements found in the array: %d", dups);
    return 0;
}

int count_dups(int nums[], int size) {
    int ctr=0, i, j;

    for (i=0; i<size; i++) {
        for (j=i+1; j<size; j++) {
            if (nums[i] == nums[j]) {
                ctr++;
            }
        }
    }

    return ctr;
}