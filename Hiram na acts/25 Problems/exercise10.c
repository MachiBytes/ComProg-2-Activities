#include <stdio.h>

int main (int argc, char *argv[]) {
    
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    

    return 0;
}