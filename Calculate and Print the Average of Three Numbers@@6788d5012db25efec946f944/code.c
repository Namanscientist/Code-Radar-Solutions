#include <stdio.h>
int main()
{
    float n1, n2 , n3 , average;
    scanf("%f %f %f", &n1 , &n2 , &n3);
    average = (n1 + n2 + n3) / 3;
    printf("Average: .2%f\n", average);
    return 0;

}