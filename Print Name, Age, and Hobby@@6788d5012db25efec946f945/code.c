#include <stdio.h>
int main()
{
    char name[100];
    char age[100];
    char hobby[100];
    scanf("%c %c %c", &name , &age , &hobby);
    printf("Name: %c\n Age: %d\n Hobby: %c", name , age , hobby);
    return 0;
}