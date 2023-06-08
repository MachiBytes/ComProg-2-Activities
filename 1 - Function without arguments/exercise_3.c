#include <stdio.h>
#include <math.h>

void instruct()
{
    printf("Instructions:\n");
    printf("This program computes the area and circumference of a circle.\n");
    printf("To use this program, enter the radius of the circle after the prompt:\nEnter radius=> ");
}

int main()
{
    float radius, area, circum;
    const float PI = 3.14159;

    instruct();
    scanf("%f", &radius);

    area = PI * pow(radius, 2);
    circum = 2 * PI * radius;

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circum);

    return 0;
}
