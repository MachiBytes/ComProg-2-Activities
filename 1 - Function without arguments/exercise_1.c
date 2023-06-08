#include <stdio.h>

void drawParallel()
{
    printf("#             #\n");
    printf("#             #\n");
    printf("#             #\n");
}

void drawBase()
{
    printf("###############\n");
}

void drawRectangle()
{
    drawBase();
    drawParallel();
    drawBase();
}

int main()
{
    drawRectangle();

    return 0;
}