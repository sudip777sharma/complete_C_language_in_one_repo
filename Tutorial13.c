#include <stdio.h>

int main()
{
    int n, index = 0;
    printf("Enter a Number:");
    scanf("%d", &n);

    do
    {
        printf("%d\n", index);
        index = index + 1;
    } while (index < n);
    return 0;
}