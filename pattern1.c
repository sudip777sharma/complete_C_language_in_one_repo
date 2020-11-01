
#include <stdio.h>
void main()
{
    int n,c=1;
    printf("enter the size = ");
    scanf("%d", &n);
    for (int i = 1; i <= ((n * (n + 1)) / 2); i++)
    {
        printf("*");
        if (i == ((c * (c + 1)) / 2))
        {
            c++;
            printf("\n");
        }
    }
}








