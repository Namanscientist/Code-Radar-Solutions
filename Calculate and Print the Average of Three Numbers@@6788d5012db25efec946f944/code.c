#include <stdio.h>
int main()
{
    float n1, n2 , n3 , average;
    scanf("%f %f %f", &n1 , &n2 , &n3);
    average = n1 + n2 + n3 / 3;
    printf("Average: %f , %.2f and %f\n", average);
    return 0;

}