#include <stdio.h>

void get_elements(int *nums, int size);
void get_sum(int *nums, int size, int *sum);

int main (int argc, char *argv[]) {
    int size;
    
    printf("Input the number of elements to store in the array (max 10): ");
    scanf("%d", &size);

    int nums[size], sum=0;

    get_elements(nums, size);

    get_sum(nums, size, &sum);

    printf("The sum of array is: %d", sum);

    return 0;
}

void get_elements(int *nums, int size) {
    printf("Input %d elements in the array:\n", size);
    for (int i=0; i<size; i++) {
        printf("element - %d: ", i+1);
        scanf("%d", &*(nums+i));
    }
}

void get_sum(int *nums, int size, int *sum) {
    for (int i=0; i<size; i++) {
        *(sum) += *(nums+i);
    }
}