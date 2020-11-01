#include <stdio.h>
#include <math.h>
void main()
{
    int n, c = 1, s = 0, r = 0, size = 0;
    printf("enter the size");
    scanf("%d", &n);
    size = (n * 0.5) * (3 * n - 1);
    for (int i = 1; i <= size-(2*n-1); i++)
    {
        s = n * c + c * (c - 1) * 0.5;
        r = s - (2 * c - 1);
        if (i <= r){ printf(" ");}
        else { printf("*");}
        if (i == s){c++;printf("\n");}
    }
     n, c, s = 0, r = 0, size = 0;
     c = n - 1;
    size = (n * 0.5) * (3 * n - 1);
    for (int i = 1; i <= size; i++)
    {
        s = size - (n * c + c * (c - 1) * 0.5);
        r = s - (2 * (c + 1) - 1);
        if (i <= r) {printf(" ");}
        else {printf("*");}
        if (i == s) {c--;printf("\n");}
    }
}


















