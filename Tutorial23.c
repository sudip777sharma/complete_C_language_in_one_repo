#include <stdio.h>

int main()
{
    int marks[2][3]={{1,2,3},{4,5,6}};
    int mark[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d elment of the array\n");
        scanf("%d", &mark[i]);
    }
    printf("Element of array are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", mark[i]);
    }
}