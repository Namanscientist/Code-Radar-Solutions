#include <stdio.h>
int main()
{
    char name[100];
    int age;
    char hobby[50];
    scanf("%99s", &name);
    scanf("%d", &age);
    scanf("%49s", &hobby);
    printf("Name: %s\n", name);
    printf("Age: &d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}