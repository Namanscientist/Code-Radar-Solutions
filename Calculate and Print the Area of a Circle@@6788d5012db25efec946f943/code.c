#include <stdio.h>
#define PI 3.14
int main()
{
    float n , area;
    scanf("%f", n);
    area = PI *n * n;

    print("Area: %.2f\n", area);
    return 0;
}