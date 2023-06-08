#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *pointer = NULL;
    pointer = &arr[0];

    pointer = &arr[2];
    printf("Third element of array: %d\n", *pointer);

    pointer += 2;
    printf("Incremented pointer by 2: %d\n", *pointer);

    *pointer -= 1;
    printf("Substract 1 from value at pointer: %d\n", *pointer);

    pointer = &arr[0];
    printf("First element of array: %d\n", *pointer);

    return 0;
}