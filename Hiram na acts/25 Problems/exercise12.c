#include <stdio.h>

int main (int argc, char *argv[]) {
    int ctr=1;
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < 4-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%d ", ctr++);
        }
        printf("\n");
    }
    return 0;
}