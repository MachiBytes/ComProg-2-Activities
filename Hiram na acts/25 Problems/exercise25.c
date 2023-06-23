#include <stdio.h>

void get_elements(int *nums, int size);
void get_indices(int *nums, int size, int target);

int main (int argc, char *argv[]) {
    int size;

    printf("Input size: ");
    scanf("%d", &size);

    int nums[size];

    get_elements(nums, size);

    int target;
    printf("Target sum: ");
    scanf("%d", &target);

    get_indices(nums, size, target);

    return 0;
}

void get_elements(int *nums, int size) {
    printf("Input %d elements into the array:\n", size);
    for (int i=0; i<size; i++) {
        printf("element - %d: ", i+1);
        scanf("%d", &*(nums+i));
    }
}

void get_indices(int *nums, int size, int target) {
    for (int i=0; i<size; i++) {
        for (int j=i+1; j<size; j++) {
            if (*(nums+i) + *(nums+j) == target) {
                printf("Indices of two numbers whose sum equal to target value: %d, %d\n", i, j);
                return;
            }
        }
    }
    printf("No two numbers are equal to the target sum.");
    return;
}
