#include <stdio.h>
void binary_form(int n)
{
    int b = 0;
    printf("binary form: ");
    while(n>0)
    {
        b = b*10 + n%2;n /= 2;
    }
    
    printf("%d\n",b);
}
int test(int num)
{
    int count =0;
    while(num)
    {
        count++;
        binary_form(num);
        num >>= 1;
        printf("number: %d\n",num);
    }
    return count;
}
void main()
{
    int n;
    for(int i=0;i<100;i++)
    {
        printf("enter: ");
        scanf("%d",&n);
        printf("ans: %d\n",test(n));
    }
}