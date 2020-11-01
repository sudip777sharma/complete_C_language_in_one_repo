#include <stdio.h>

int main()
{
    int i, age;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n Enter Your age :",age);
        scanf("%d", &age);
        if (age < 18)
        {
            printf("break\n");
            break;
        }
        if (age > 18)
        {
            printf("continue\n");
            continue;
        }
    }
    return 0;
}