#include <stdio.h>
#include <math.h>
void main()
{
    int n, c = 0, s1, s2, s3, s4;
    printf("enter the size");
    scanf("%d", &n);
    int N = 2 * n - 1;
    for (int i = 1; i <= (N * N); i++)
    {
        
        s1 = c * (N - 1) + n;
        s2 = c * (N + 1) + n;
        s3 = c * (N + 1) - n + 2;
        s4 = N * (c + 1) + n - c - 1;
        if (s1<i&&i<s2&&c<=(n-1))
        {
            printf("*");
        }
        if (s3<i&&i<s4&&c>(n-1))
        {
            printf("*");
        }
        if ((s1<=i&&i<=s2)==0)
        {
            printf(" ");
        }
        if ((s3<=i&&i<=s4)==0)
        {
            printf(" ");
        }
        if (i == ((c + 1) * N))
        {
            c++;
            printf("\n");
        }
    }
}
