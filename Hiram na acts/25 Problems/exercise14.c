#include <stdio.h>

int main (int argc, char *argv[]) {
    int sum=0;
    for (int i=100; i<200; i++) {
        if (i % 9 == 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nThe sum: %d", sum);

    return 0;
}