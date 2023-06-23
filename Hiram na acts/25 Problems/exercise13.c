#include <stdio.h>

int main (int argc, char *argv[]) {
    int floyd[15] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1}, ctr=0;
    for (int i=0; i<5; i++) {
        for (int j=0; j<i+1; j++) {
            printf("%d", floyd[ctr++]);
        }
        printf("\n");
    }
    return 0;
}