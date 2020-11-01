#include <stdio.h>

int fib_iterative(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n-1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}
int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}
int main()
{
    int n;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &n);
    printf("The value of fibonacci series at position no %d using iterative approach is %d\n", n, fib_iterative(n));
    printf("The value of fibonacci series at position no %d using recursive approach is %d\n", n, fib_recursive(n));
}