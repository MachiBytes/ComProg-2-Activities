#include <stdio.h>

int sort_arr(int arr[], int size) {
    for (int step = 0; step < size - 1; ++step) {
        for (int i = 0; i < size - step - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d number of elements in the array:\n", n);
    for (int i=0; i<n; i++) {
        printf("element - %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    sort_arr(arr, n);

    printf("The elements in the array after sorting:\n");
    for (int i=0; i<n; i++) {
        printf("element - %d: %d\n", i + 1, *&arr[i]);
    }

    return 0;
}