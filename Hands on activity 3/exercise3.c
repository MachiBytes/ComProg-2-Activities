#include <stdio.h>
void swapPointers (int **pa, int **pb){
    int *temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main() {
    int a=1, b=2;
    int *ptrA=NULL, *ptrB=NULL;
    ptrA = &a;
    ptrB = &b;

    printf("Pointer a: %p\n", ptrA);
    printf("Pointer b: %p\n", ptrB);

    swapPointers(&ptrA, &ptrB);

    printf("Pointer a: %p\n", ptrA);
    printf("Pointer b: %p\n", ptrB);

    return 0;
}