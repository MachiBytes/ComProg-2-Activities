#include <stdio.h>

int main()
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    int *pm = &m;
    float *pfx = &fx;
    char *pcht = &cht;

    printf("Pointer: Demonstrate the use of & and * operator:\n");
    printf("--------------------------------------------------------\n");
    printf("m = %d\n", m);
    printf("fx = %f\n", fx);
    printf("cht = %c\n", cht);

    printf("\n");
    printf("Using & operator:\n");
    printf("-----------------------------\n");
    printf("address of m = %x\n", &m);
    printf("address of fx = %x\n", &fx);
    printf("address of cht = %x\n", &cht);

    printf("\n");
    printf("Using & and * operator:\n");
    printf("-----------------------------\n");
    printf("value at address of m = %d\n", *&m);
    printf("value at address of fx = %f\n", *&fx);
    printf("value at address of cht = %c\n", *&cht);

    printf("\n");
    printf("Using only pointer variable:\n");
    printf("-----------------------------\n");
    printf("value at address of m = %x\n", pm);
    printf("value at address of fx = %x\n", pfx);
    printf("value at address of cht = %x\n", pcht);

    printf("\n");
    printf("Using only pointer operator:\n");
    printf("-----------------------------\n");
    printf("value at address of m = %d\n", *pm);
    printf("value at address of fx = %f\n", *pfx);
    printf("value at address of cht = %c\n", *pcht);

    return 0;
}