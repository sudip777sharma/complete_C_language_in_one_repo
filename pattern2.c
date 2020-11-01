

#include <stdio.h>
void main()
{
    int n, c, size = 0, s = 0;
    printf("enter the size = ");
    scanf("%d", &n);
    c=n;
    size = ((n * (n + 1)) * 0.5);
    for (int i = 1; i <= size; i++)
    {
        s = size - ((c * (c - 1)) * 0.5);
        printf("*");
        if (i == s)
        {
            c--;
            printf("\n");
        }
    }
}













