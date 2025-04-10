#include <stdio.h>
#define PI 3.14
int main()
{
    float radius , area;
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area: %.2f", area);
}