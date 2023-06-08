#include <stdio.h>

float average(int *ptr) {
    float sum;
    for (int i=0; i<10; i++) {
        sum += *ptr;
        ptr++;
    }

    return sum / 10.0;
}

int main() {
    int arr[10];

    printf("Enter 10 integers:\n");
    for (int i=0; i<10; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    float ave = average(&arr[0]);

    printf("The average of the 10 integers is: %.2f", ave);

    return 0;
}