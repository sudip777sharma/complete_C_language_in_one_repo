#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i = 0, j = 0;
    for (; j < 3, i < 10; i++,j++)
    {
        printf("%d %d\n", i, j);
    }
}