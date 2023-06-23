#include <stdio.h>

int main (int argc, char *argv[]) {
    int size, i, j;

    // Get size of array
    printf("Input the number of elements to be stored in each array: ");
    scanf("%d", &size);

    int nums1[size], nums2[size];

    // Get elements of nums1
    printf("Input %d elements in the array:\n", size);
    for (i=0; i<size; i++) {
        printf("element - %d: ", i);
        scanf("%d", &nums1[i]);
    }

    // Get elements of nums2
    printf("Input %d elements in the array:\n", size);
    for (i=0; i<size; i++) {
        printf("element - %d: ", i);
        scanf("%d", &nums2[i]);
    }

    int all_nums[size+size];

    // Combine nums1 and nums2
    for (i=0; i<size; i++) {
        all_nums[i] = nums1[i];
        all_nums[i+size] = nums2[i];
    }

    // Bubble sort
    for (i=0; i<(size*2)-1; i++) {
        for (j=0; j<(size*2)-i-1; j++) {
            if (all_nums[j] < all_nums[j+1]) {
                int temp = all_nums[j];
                all_nums[j] = all_nums[j+1];
                all_nums[j+1] = temp;
            }
        }
    }

    // Print result
    printf("The merged array in descending order is: \n");
    for (i=0; i<size*2; i++) {
        printf("%d ", all_nums[i]);
    }

    return 0;
}