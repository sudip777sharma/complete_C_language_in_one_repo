#include <stdio.h>

int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    printf("\n");
}
int takenumber()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    return n;
}
int main()
{
    int a, b, c, d;
    a = 10, b = 87;
    c = sum(a, b);
    printf("The sum is :%d\n", c);
    printstar(a);
    d=takenumber();
    printf("The Entered Number is: %d\n",d);
}
int sum(int a, int b)
{
    return a + b;
}