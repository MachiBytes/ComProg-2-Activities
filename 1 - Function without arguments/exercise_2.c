#include <stdio.h>

void drawRoof()
{
    printf("  ##\n");
    printf(" #  #\n");
    printf("#    #\n");
}

void drawRoom()
{
    printf("######\n");
    printf("#    #\n");
    printf("#    #\n");
    printf("######\n");
}

void drawRectangle()
{
    drawRoof();
    drawRoom();
}

int main()
{
    drawRectangle();

    return 0;
}