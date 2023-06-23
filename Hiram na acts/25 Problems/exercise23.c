#include <stdio.h>

void get_elements(int *nums, int size);
void reverse_array(int *nums, int size);

int main (int argc, char *argv[]) {
    int size;
    printf("Input the number of elements to store in the array (max 15): ");
    scanf("%d", &size);

    int nums[size];

    get_elements(nums, size);
    reverse_array(nums, size);

    return 0;
}

void get_elements(int *nums, int size) {
    printf("Input %d number of elements in the array:\n", size);
    for (int i=0; i<size; i++) {
        printf("element - %d: ", i+1);
        scanf("%d", &*(nums+i));
    }
}

void reverse_array(int *nums, int size) {
    printf("The elements of array in reverse order are:\n");
    for (int i=size; i>0; i--) {
        printf("element - %d: %d\n", i, *(nums+i-1));
    }
}
