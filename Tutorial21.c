#include <stdio.h>
int fac(int n)
{
    if (n == 1||n==0)
    {
        return 1;
    }
    else
    {
        return n * fac(n - 1);
    }
}
int main()
{
    int a, n;
    printf("Enter Number:");
    scanf("%d", &n);
    a = fac(n);
    printf("factorial of Number is:%d\n", a);
}