#include <stdio.h>

void show_uniq(int nums[], int size);

int main (int argc, char *argv[]) {
    int n_elem, i;

    printf("Print all unique elements of an array:\n");
    printf("------------------------------------------\n");

    // Get size of array
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n_elem);

    // Get array elements
    int nums[n_elem];
    printf("Input %d elements in the array:\n", n_elem);
    for (i=0; i<n_elem; i++) {
        printf("element - %d: ", i);
        scanf("%d", &nums[i]);
    }

    // Show unique numbers
    show_uniq(nums, n_elem);

    return 0;
}

void show_uniq(int nums[], int size) {
    int uniq[size];
    int i, j, has_dupe, ctr=0;

    for (i=0; i<size; i++) {
        has_dupe=0;
        for (j=0; j<size; j++) {
            if (nums[i] == nums[j] && i != j) {
                has_dupe = 1;
                break;
            }
        }

        if (!has_dupe) {
            uniq[ctr] = nums[i];
            ctr++;
        }
    }

    printf("The unique elements found in the array are: \n");

    for (i=0; i<ctr; i++) {
        printf("%d ", uniq[i]);
    }
}