#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");
    int a = 76;
    int *ptra = &a;
    int ptra2=NULL;
    printf("The address of pointer to a is %p \n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("The adress of a is %p\n",ptra);
    printf("The value of a is %d\n",*ptra);
    printf("The value of a is %d\n",a);
    printf("The address of some garbage is %p\n",ptra2);

}