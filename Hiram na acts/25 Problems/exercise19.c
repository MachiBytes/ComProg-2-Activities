#include <stdio.h>

void get_elements(int *nums, int size);
void sort_elements(int *nums, int size);
void print_elements(int *nums, int size);

int main (int argc, char *argv[]) {
    int size;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size);

    int nums[size];

    get_elements(nums, size);

    sort_elements(nums, size);

    print_elements(nums, size);

    return 0;
}

void get_elements(int *nums, int size) {
    printf("Input %d elements in the array:\n", size);
    for (int i=0; i<size; i++) {
        printf("element - %d: ", i+1);
        scanf("%d", &*(nums+i));
    }
}

void sort_elements(int *nums, int size) {
    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size-i-1; j++) {
            if (*(nums+j) > *(nums+j+1)) {
                int temp = *(nums+j);
                *(nums+j) =  *(nums+j+1);
                *(nums+j+1) = temp;
            }
        }
    }
}

void print_elements(int *nums, int size) {
    for (int i=0; i<size; i++) {
        printf("%d: %d\n", i, *(nums+i));
    }
}