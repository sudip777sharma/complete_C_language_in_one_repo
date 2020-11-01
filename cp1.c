#include<stdio.h>
int test()
{
    static int a =0;
    a++;
    return a;
}
void main()
{
    int i, r;
    for(i = 0;i<=10;i++)
        r = test();
    printf("\n%d\n",r);
}