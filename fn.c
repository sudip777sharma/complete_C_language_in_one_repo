#include <stdio.h>
void main()
{
    char c[] = "hello world";

    char *p = c;

    int *q;
    q = &c;//error because of incompatible type of pointer are used : int pointer = char pointer

    printf("\nsudeep: %d\n",q);// but stores the address to the int pointer

    printf("%d\n",p);

    printf("%c\n",p+7);

    printf("%s\n",p+7);

    printf("%s\n\n", p+p[1]-p[10]+5);
}



