#include <stdio.h>

int main (int argc, char *argv[]) {
    int upp_bound, low_bound;
    printf("Input lowest search limit of perfect numbers: ");
    scanf("%d", &low_bound);
    printf("Input highest search limit of perfect numbers: ");
    scanf("%d", &upp_bound);

    int perfect_numbers[upp_bound - low_bound], pn_ctr=0;

    // Collect divisors
    // Check sum of divisor

    int i, j, div_ctr, sum;
    for (i=low_bound+1; i<upp_bound; i++) {
        int divisors[i];
        div_ctr=0;
        for (j=1; j<=i/2; j++) {
            if (i % j == 0) {
                divisors[div_ctr] = j;
                div_ctr++;
            }
        }
        sum = 0;
        for (j=0; j<div_ctr; j++) {
            sum += divisors[j];
        }
        if (sum == i) {
            perfect_numbers[pn_ctr] = i;
            pn_ctr++;
        }
    }

    if (pn_ctr == 0) {
        printf("There are no perfect numbers between %d and %d.", low_bound, upp_bound);
        return 0;
    }

    printf("The perfect numbers between %d and %d are:\n", low_bound, upp_bound);
    for (i=0; i<pn_ctr; i++) {
        printf("%d ", perfect_numbers[i]);
    }

    return 0;
}