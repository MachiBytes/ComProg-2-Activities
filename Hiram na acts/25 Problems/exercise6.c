#include <stdio.h>

int main (int argc, char *argv[]) {
    int size, i;

    // Get size of array
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);

    int nums[size];

    // Get input for array
    printf("Input %d elements in the array:\n", size);
    for (i=0; i<size; i++) {
        printf("element - %d: ", i);
        scanf("%d", &nums[i]);
    }

    int odds[size], evens[size], odd_ctr=0, even_ctr=0;

    // 
    for (i=0; i<size; i++) {
        if (nums[i] % 2 == 0) {
            evens[even_ctr] = nums[i];
            even_ctr++;
        } else {
            odds[odd_ctr] = nums[i];
            odd_ctr++;
        }
    }

    // Print result
    printf("The Even elements are:\n");
    for (i=0; i<even_ctr; i++) {
        printf("%d ", evens[i]);
    }
    if (even_ctr == 0) {
        printf("None!");
    }
    printf("\n");

    printf("The Odd elements are:\n");
    for (i=0; i<odd_ctr; i++) {
        printf("%d ", odds[i]);
    }
    if (odd_ctr == 0) {
        printf("None!");
    }

    return 0;
}