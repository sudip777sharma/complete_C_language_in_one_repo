#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your age\n");
    scanf("%d",&age);

    switch (age)
    {
    case 3:
    printf("The age is 3\n");
    break;

     case 13:
    printf("The age is 13\n");
    break;

    case 23:
    printf("The age is 23\n");
    break;

    default:
    printf("Age is not 3,13,23\n");
    break;

    }

}