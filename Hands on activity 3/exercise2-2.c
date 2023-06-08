#include <stdio.h>

int multiplyByTwo(int *ptr) {
    for (int i=0; i<5; i++) {
        *ptr *= 2;
        ptr++;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Input:\n");
    for (int i=0; i<5; i++) {
        printf("element %d - %d\n", i, arr[i]);
    }

    multiplyByTwo(&arr[0]);

    printf("\nOutput:\n");
    for (int i=0; i<5; i++) {
        printf("element %d - %d\n", i, arr[i]);
    }

    return 0;
}